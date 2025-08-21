/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// FILE: Compression.cpp /////////////////////////////////////////////////////
// Author: Matthew D. Campbell
// LZH wrapper taken from Nox, originally from Jeff Brown
//////////////////////////////////////////////////////////////////////////////

#include "Compression.h"
#include "EAC/codex.h"
#include "EAC/refcodex.h"

#ifdef _INTERNAL
// for occasional debugging...
//#pragma optimize("", off)
//#pragma message("************************************** WARNING, optimization disabled for debugging purposes")
#endif

#define DEBUG_LOG(x) {}

const char *CompressionManager::getCompressionNameByType( CompressionType compType )
{
	static const char *s_compressionNames[COMPRESSION_MAX+1] = {
		"No compression",
		"RefPack",
	};
	return s_compressionNames[compType];
}

// For perf timers, so we can have separate ones for compression/decompression
const char *CompressionManager::getDecompressionNameByType( CompressionType compType )
{
	static const char *s_decompressionNames[COMPRESSION_MAX+1] = {
		"d_None",
		"d_RefPack",
	};
	return s_decompressionNames[compType];
}

// ---------------------------------------------------------------------------------------

Bool CompressionManager::isDataCompressed( const void *mem, Int len )
{
	CompressionType t = getCompressionType(mem, len);
	return t != COMPRESSION_NONE;
}

CompressionType CompressionManager::getPreferredCompression( void )
{
	return COMPRESSION_REFPACK;
}


CompressionType CompressionManager::getCompressionType( const void *mem, Int len )
{
	if (len < 8)
		return COMPRESSION_NONE;
	if ( memcmp( mem, "EAR\0", 4 ) == 0 )
		return COMPRESSION_REFPACK;

	return COMPRESSION_NONE;
}

Int CompressionManager::getMaxCompressedSize( Int uncompressedLen, CompressionType compType )
{
	if(compType == COMPRESSION_REFPACK)
		return uncompressedLen + 8;

	return 0;
}

Int CompressionManager::getUncompressedSize( const void *mem, Int len )
{
	if (len < 8)
		return len;

	CompressionType compType = getCompressionType( mem, len );

	if(compType == COMPRESSION_REFPACK)
		return *(Int *)(((UnsignedByte *)mem)+4);

	return len;
}

Int CompressionManager::compressData( CompressionType compType, void *srcVoid, Int srcLen, void *destVoid, Int destLen )
{
	if (destLen < 8)
		return 0;

	destLen -= 8;

	UnsignedByte *src = (UnsignedByte *)srcVoid;
	UnsignedByte *dest = (UnsignedByte *)destVoid;

	if (compType == COMPRESSION_REFPACK)
	{
		memcpy(dest, "EAR\0", 4);
		*(Int *)(dest+4) = 0;
		Int ret = REF_encode(dest+8, src, srcLen);
		if (ret)
		{
			*(Int *)(dest+4) = srcLen;
			return ret + 8;
		}
		else
			return 0;
	}
	return 0;
}

Int CompressionManager::decompressData( void *srcVoid, Int srcLen, void *destVoid, Int destLen )
{
	if (srcLen < 8)
		return 0;

	UnsignedByte *src = (UnsignedByte *)srcVoid;
	UnsignedByte *dest = (UnsignedByte *)destVoid;

	CompressionType compType = getCompressionType(src, srcLen);

	if (compType == COMPRESSION_REFPACK)
	{
		Int slen = srcLen - 8;
		Int ret = REF_decode(dest, src+8, &slen);
		if (ret)
			return ret;
		else
			return 0;
	}

	return 0;
}
