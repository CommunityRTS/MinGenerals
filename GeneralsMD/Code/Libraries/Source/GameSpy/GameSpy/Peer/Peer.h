#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef void* PEER;
typedef int PEERBool;
typedef void* GServer;

typedef void (*peerEnumPlayersCallback)(PEER, ...);
typedef void (*peerListingGamesCallback)(PEER, ...);

enum peerRequestType { PEER_REQUEST_UNKNOWN = 0 };
enum peerResponseType { PEER_RESPONSE_UNKNOWN = 0 };

#define PEERTrue 1
#define PEERFalse 0

PEER peerInitialize(...);
void peerThink(PEER peer);
void peerShutdown(PEER peer);
int peerIsConnected(PEER peer);
void peerConnect(PEER peer, ...);
void peerDisconnect(PEER peer);
void peerRetryWithNick(PEER peer, const char* nick);
void peerEnumPlayers(PEER peer, ...);
void peerMessageRoom(PEER peer, ...);
void peerMessagePlayer(PEER peer, ...);
void peerSetGlobalKeys(PEER peer, ...);
void peerSetGlobalWatchKeys(PEER peer, ...);
void peerSetRoomKeys(PEER peer, ...);
void peerSetRoomWatchKeys(PEER peer, ...);
void peerGetRoomKeys(PEER peer, ...);
int peerGetPlayerFlags(PEER peer, ...);
int peerGetPlayerInfoNoWait(PEER peer, ...);
unsigned int peerGetLocalIP(PEER peer);
void peerUTMRoom(PEER peer, ...);
void peerUTMPlayer(PEER peer, ...);
void peerJoinGroupRoom(PEER peer, ...);
void peerLeaveRoom(PEER peer, ...);
void peerJoinStagingRoom(PEER peer, ...);
void peerCreateStagingRoom(PEER peer, ...);
void peerCreateStagingRoomWithSocket(PEER peer, ...);
void peerStartGame(PEER peer, ...);
void peerStopGame(PEER peer, ...);
void peerUpdateGame(PEER peer, ...);
void peerStartListingGames(PEER peer, ...);
void peerStopListingGames(PEER peer);
void peerListGroupRooms(PEER peer, ...);
void peerSetReady(PEER peer, int ready);
void peerSetTitle(PEER peer, ...);
void peerSetUpdatesRoomChannel(PEER peer, ...);
void peerParseQuery(PEER peer, ...);
void peerAuthenticateCDKey(PEER peer, ...);
int peerGetPlayerProfileID(PEER peer, ...);
PEERBool peerStateChanged(PEER peer);
PEERBool peerStateChange(PEER peer, ...);
int peerGetGlobalWatchKey(PEER peer, ...);

#ifdef __cplusplus
}
#endif
