# Microsoft Developer Studio Project File - Name="GameSpyPeer" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=GameSpyPeer - Win32 Release
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "GameSpyPeer.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "GameSpyPeer.mak" CFG="GameSpyPeer - Win32 Release"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "GameSpyPeer - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "GameSpyPeer - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "GameSpyPeer - Win32 Internal" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""$/Gamespy/GOA/GameSpyPeer", OWNAAAAA"
# PROP Scc_LocalPath "."
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "GameSpyPeer - Win32 Release"

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
# ADD CPP /nologo /G6 /MD /W3 /WX /GX /O2 /Ob2 /D "NDEBUG" /D "WIN32" /D "_MBCS" /D "_LIB" /YX /FD /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyPeer.lib"

!ELSEIF  "$(CFG)" == "GameSpyPeer - Win32 Debug"

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
# ADD CPP /nologo /G6 /MDd /W3 /WX /Gm /GX /Zi /Od /D "_DEBUG" /D "_WINDOWS" /D "IRC_LOG" /D "WIN32" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyPeerDebug.lib"

!ELSEIF  "$(CFG)" == "GameSpyPeer - Win32 Internal"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Peer___Win32_Internal"
# PROP BASE Intermediate_Dir "Peer___Win32_Internal"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Internal"
# PROP Intermediate_Dir "Internal"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /G6 /MD /W3 /WX /Gm /GX /Zi /Od /D "_DEBUG" /D "_WINDOWS" /D "IRC_LOG" /D "WIN32" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo /out:"..\..\..\lib\GameSpyPeer.lib"
# ADD LIB32 /nologo /out:"..\..\..\..\lib\GameSpyPeerInternal.lib"

!ENDIF 

# Begin Target

# Name "GameSpyPeer - Win32 Release"
# Name "GameSpyPeer - Win32 Debug"
# Name "GameSpyPeer - Win32 Internal"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\peerCallbacks.c
# End Source File
# Begin Source File

SOURCE=.\peerGlobalCallbacks.c
# End Source File
# Begin Source File

SOURCE=.\peerKeys.c
# End Source File
# Begin Source File

SOURCE=.\peerMain.c
# End Source File
# Begin Source File

SOURCE=.\peerMangle.c
# End Source File
# Begin Source File

SOURCE=.\peerOperations.c
# End Source File
# Begin Source File

SOURCE=.\peerPing.c
# End Source File
# Begin Source File

SOURCE=.\peerPlayers.c
# End Source File
# Begin Source File

SOURCE=.\peerRooms.c
# End Source File
# Begin Source File

SOURCE=.\peerSB.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\peer.h
# End Source File
# Begin Source File

SOURCE=.\peerCallbacks.h
# End Source File
# Begin Source File

SOURCE=.\peerGlobalCallbacks.h
# End Source File
# Begin Source File

SOURCE=.\peerKeys.h
# End Source File
# Begin Source File

SOURCE=.\peerMain.h
# End Source File
# Begin Source File

SOURCE=.\peerMangle.h
# End Source File
# Begin Source File

SOURCE=.\peerOperations.h
# End Source File
# Begin Source File

SOURCE=.\peerPing.h
# End Source File
# Begin Source File

SOURCE=.\peerPlayers.h
# End Source File
# Begin Source File

SOURCE=.\peerRooms.h
# End Source File
# Begin Source File

SOURCE=.\peerSB.h
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
# Begin Group "nonport"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\nonport.c
# End Source File
# Begin Source File

SOURCE=..\nonport.h
# End Source File
# End Group
# Begin Group "chat"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\chat\chat.h
# End Source File
# Begin Source File

SOURCE=..\chat\chatCallbacks.c
# End Source File
# Begin Source File

SOURCE=..\chat\chatCallbacks.h
# End Source File
# Begin Source File

SOURCE=..\chat\chatChannel.c
# End Source File
# Begin Source File

SOURCE=..\chat\chatChannel.h
# End Source File
# Begin Source File

SOURCE=..\Chat\chatCrypt.c
# End Source File
# Begin Source File

SOURCE=..\Chat\chatCrypt.h
# End Source File
# Begin Source File

SOURCE=..\chat\chatHandlers.c
# End Source File
# Begin Source File

SOURCE=..\chat\chatHandlers.h
# End Source File
# Begin Source File

SOURCE=..\chat\chatMain.c
# End Source File
# Begin Source File

SOURCE=..\chat\chatMain.h
# End Source File
# Begin Source File

SOURCE=..\chat\chatSocket.c
# End Source File
# Begin Source File

SOURCE=..\chat\chatSocket.h
# End Source File
# End Group
# Begin Group "hashtable"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\hashtable.c
# End Source File
# Begin Source File

SOURCE=..\hashtable.h
# End Source File
# End Group
# Begin Group "pinger"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\pinger\pinger.h
# End Source File
# Begin Source File

SOURCE=..\pinger\pingerMain.c
# End Source File
# End Group
# Begin Group "md5"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\md5.h
# End Source File
# Begin Source File

SOURCE=..\md5c.c
# End Source File
# End Group
# Begin Group "qr2"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\qr2\qr2.c
# End Source File
# Begin Source File

SOURCE=..\qr2\qr2.h
# End Source File
# Begin Source File

SOURCE=..\qr2\qr2regkeys.c
# End Source File
# Begin Source File

SOURCE=..\qr2\qr2regkeys.h
# End Source File
# End Group
# Begin Group "serverbrowsing"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\serverbrowsing\sb_crypt.c
# End Source File
# Begin Source File

SOURCE=..\serverbrowsing\sb_crypt.h
# End Source File
# Begin Source File

SOURCE=..\serverbrowsing\sb_internal.h
# End Source File
# Begin Source File

SOURCE=..\serverbrowsing\sb_queryengine.c
# End Source File
# Begin Source File

SOURCE=..\serverbrowsing\sb_server.c
# End Source File
# Begin Source File

SOURCE=..\serverbrowsing\sb_serverbrowsing.c
# End Source File
# Begin Source File

SOURCE=..\serverbrowsing\sb_serverbrowsing.h
# End Source File
# Begin Source File

SOURCE=..\serverbrowsing\sb_serverlist.c
# End Source File
# End Group
# End Target
# End Project
