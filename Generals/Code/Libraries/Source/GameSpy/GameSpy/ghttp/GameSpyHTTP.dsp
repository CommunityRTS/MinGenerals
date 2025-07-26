# Microsoft Developer Studio Project File - Name="GameSpyHTTP" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=GameSpyHTTP - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "GameSpyHTTP.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "GameSpyHTTP.mak" CFG="GameSpyHTTP - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "GameSpyHTTP - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "GameSpyHTTP - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "GameSpyHTTP - Win32 Internal" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""$/Gamespy/GOA/GameSpyHTTP", PHXAAAAA"
# PROP Scc_LocalPath "."
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "GameSpyHTTP - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\..\..\lib"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /G6 /MD /W3 /GX /O2 /Ob2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyHTTP.lib"

!ELSEIF  "$(CFG)" == "GameSpyHTTP - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\..\..\lib"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /G6 /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyHTTPDebug.lib"

!ELSEIF  "$(CFG)" == "GameSpyHTTP - Win32 Internal"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "GameSpyHTTP___Win32_Internal"
# PROP BASE Intermediate_Dir "GameSpyHTTP___Win32_Internal"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Internal"
# PROP Intermediate_Dir "Internal"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /G6 /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\GameSpyHTTP.lib"
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyHTTPInternal.lib"

!ENDIF 

# Begin Target

# Name "GameSpyHTTP - Win32 Release"
# Name "GameSpyHTTP - Win32 Debug"
# Name "GameSpyHTTP - Win32 Internal"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\ghttpBuffer.c
# End Source File
# Begin Source File

SOURCE=.\ghttpCallbacks.c
# End Source File
# Begin Source File

SOURCE=.\ghttpCommon.c
# End Source File
# Begin Source File

SOURCE=.\ghttpConnection.c
# End Source File
# Begin Source File

SOURCE=.\ghttpMain.c
# End Source File
# Begin Source File

SOURCE=.\ghttpPost.c
# End Source File
# Begin Source File

SOURCE=.\ghttpProcess.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\ghttp.h
# End Source File
# Begin Source File

SOURCE=.\ghttpBuffer.h
# End Source File
# Begin Source File

SOURCE=.\ghttpCallbacks.h
# End Source File
# Begin Source File

SOURCE=.\ghttpCommon.h
# End Source File
# Begin Source File

SOURCE=.\ghttpConnection.h
# End Source File
# Begin Source File

SOURCE=.\ghttpMain.h
# End Source File
# Begin Source File

SOURCE=.\ghttpPost.h
# End Source File
# Begin Source File

SOURCE=.\ghttpProcess.h
# End Source File
# End Group
# Begin Group "GOA"

# PROP Default_Filter ""
# Begin Group "nonport"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\nonport.c
# End Source File
# Begin Source File

SOURCE=..\nonport.h
# End Source File
# End Group
# Begin Group "darray"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\darray.c
# End Source File
# Begin Source File

SOURCE=..\darray.h
# End Source File
# End Group
# End Group
# End Target
# End Project
