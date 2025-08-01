
/**
 * @file
 *
 * @author OmniBlade
 *
 * @brief Stub library containing subset of functions from binkw32.dll as used by the W3D engine.
 *
 * @copyright This is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            2 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#pragma once

// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the BINK_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// BINK_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifdef BINK_EXPORTS
#define BINK_API __declspec(dllexport)
#else
#define BINK_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define BINKSURFACE24 1
#define BINKSURFACE32 3
#define BINKSURFACE555 9
#define BINKSURFACE565 10
#define BINKPRELOADALL 0x00002000
#define BINKCOPYNOSCALING 0x70000000

    typedef struct BINK
    {
        unsigned int Width;
        unsigned int Height;
        unsigned int Frames;
        unsigned int FrameNum;
        unsigned int LastFrameNum;
        unsigned int FrameRate;
        unsigned int FrameRateDiv;
        /* Original struct has more members, but we only need these to match the ABI*/
    } BINK, * HBINK;

    typedef void* (__stdcall* SndOpenCallback)(unsigned long param);
    typedef unsigned int u32;

    BINK_API HBINK __stdcall BinkOpen(const char* name, unsigned int flags);
    BINK_API void __stdcall BinkSetSoundTrack(unsigned int total_tracks, unsigned int* tracks);
    BINK_API int __stdcall BinkSetSoundSystem(SndOpenCallback open, unsigned long param);
    BINK_API void* __stdcall BinkOpenDirectSound(unsigned long param);
    BINK_API void __stdcall BinkClose(HBINK handle);
    BINK_API int __stdcall BinkWait(HBINK handle);
    BINK_API int __stdcall BinkDoFrame(HBINK handle);
    BINK_API int __stdcall BinkCopyToBuffer(
        HBINK handle, void* dest, int destpitch, unsigned int destheight, unsigned int destx, unsigned int desty, unsigned int flags);
    BINK_API void __stdcall BinkSetVolume(HBINK handle, unsigned int trackid, int volume);
    BINK_API void __stdcall BinkNextFrame(HBINK handle);
    BINK_API void __stdcall BinkGoto(HBINK handle, unsigned int frame, int flags);

#define BinkSoundUseDirectSound(x) BinkSetSoundSystem(BinkOpenDirectSound, (unsigned long)x)

#ifdef __cplusplus
} // extern "C"
#endif
