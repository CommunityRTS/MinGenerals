# Microsoft Developer Studio Project File - Name="GameSpyPresence" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=GameSpyPresence - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "GameSpyPresence.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "GameSpyPresence.mak" CFG="GameSpyPresence - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "GameSpyPresence - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "GameSpyPresence - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "GameSpyPresence - Win32 Internal" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""$/Gamespy/Formation/Mr_Pants/GameSpyPresence", YPGAAAAA"
# PROP Scc_LocalPath "."
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "GameSpyPresence - Win32 Release"

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
# ADD CPP /nologo /G6 /MD /W3 /WX /GX /O2 /Ob2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyPresence.lib"

!ELSEIF  "$(CFG)" == "GameSpyPresence - Win32 Debug"

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
# ADD CPP /nologo /G6 /MDd /W3 /WX /Gm /GX /Zi /Od /D "_WIN32" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyPresenceDebug.lib"

!ELSEIF  "$(CFG)" == "GameSpyPresence - Win32 Internal"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "GameSpyPresence___Win32_Internal"
# PROP BASE Intermediate_Dir "GameSpyPresence___Win32_Internal"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Internal"
# PROP Intermediate_Dir "Internal"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /Zi /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /G6 /MD /W3 /WX /GX /Zi /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\..\lib\GameSpyPresence.lib"
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyPresenceInternal.lib"

!ENDIF 

# Begin Target

# Name "GameSpyPresence - Win32 Release"
# Name "GameSpyPresence - Win32 Debug"
# Name "GameSpyPresence - Win32 Internal"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\darray.c
# End Source File
# Begin Source File

SOURCE=.\gp.c
# End Source File
# Begin Source File

SOURCE=.\gpi.c
# End Source File
# Begin Source File

SOURCE=.\gpiBuddy.c
# End Source File
# Begin Source File

SOURCE=.\gpiBuffer.c
# End Source File
# Begin Source File

SOURCE=.\gpiCallback.c
# End Source File
# Begin Source File

SOURCE=.\gpiConnect.c
# End Source File
# Begin Source File

SOURCE=.\gpiInfo.c
# End Source File
# Begin Source File

SOURCE=.\gpiOperation.c
# End Source File
# Begin Source File

SOURCE=.\gpiPeer.c
# End Source File
# Begin Source File

SOURCE=.\gpiProfile.c
# End Source File
# Begin Source File

SOURCE=.\gpiSearch.c
# End Source File
# Begin Source File

SOURCE=.\gpiTransfer.c
# End Source File
# Begin Source File

SOURCE=.\gpiUtility.c
# End Source File
# Begin Source File

SOURCE=..\hashtable.c
# End Source File
# Begin Source File

SOURCE=..\md5c.c
# End Source File
# Begin Source File

SOURCE=..\nonport.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\darray.h
# End Source File
# Begin Source File

SOURCE=.\gp.h
# End Source File
# Begin Source File

SOURCE=.\gpi.h
# End Source File
# Begin Source File

SOURCE=.\gpiBuddy.h
# End Source File
# Begin Source File

SOURCE=.\gpiBuffer.h
# End Source File
# Begin Source File

SOURCE=.\gpiCallback.h
# End Source File
# Begin Source File

SOURCE=.\gpiConnect.h
# End Source File
# Begin Source File

SOURCE=.\gpiInfo.h
# End Source File
# Begin Source File

SOURCE=.\gpiOperation.h
# End Source File
# Begin Source File

SOURCE=.\gpiPeer.h
# End Source File
# Begin Source File

SOURCE=.\gpiProfile.h
# End Source File
# Begin Source File

SOURCE=.\gpiSearch.h
# End Source File
# Begin Source File

SOURCE=.\gpiTransfer.h
# End Source File
# Begin Source File

SOURCE=.\gpiUtility.h
# End Source File
# Begin Source File

SOURCE=..\hashtable.h
# End Source File
# Begin Source File

SOURCE=..\md5.h
# End Source File
# Begin Source File

SOURCE=..\nonport.h
# End Source File
# End Group
# End Target
# End Project
