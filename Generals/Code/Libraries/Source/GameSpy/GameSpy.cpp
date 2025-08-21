#include "GameSpy/Peer/Peer.h"
#include "GameSpy/GP/GP.h"
#include "GameSpy/gstats/gpersist.h"
#include "GameSpy/ghttp/ghttp.h"

#ifdef __cplusplus
extern "C" {
#endif

// Peer stubs
PEER peerInitialize(...) { return NULL; }
void peerThink(PEER) {}
void peerShutdown(PEER) {}
int peerIsConnected(PEER) { return 0; }
void peerConnect(PEER, ...) {}
void peerDisconnect(PEER) {}
void peerRetryWithNick(PEER, const char*) {}
void peerEnumPlayers(PEER, ...) {}
void peerMessageRoom(PEER, ...) {}
void peerMessagePlayer(PEER, ...) {}
void peerSetGlobalKeys(PEER, ...) {}
void peerSetGlobalWatchKeys(PEER, ...) {}
void peerSetRoomKeys(PEER, ...) {}
void peerSetRoomWatchKeys(PEER, ...) {}
void peerGetRoomKeys(PEER, ...) {}
int peerGetPlayerFlags(PEER, ...) { return 0; }
int peerGetPlayerInfoNoWait(PEER, ...) { return 0; }
unsigned int peerGetLocalIP(PEER) { return 0; }
void peerUTMRoom(PEER, ...) {}
void peerUTMPlayer(PEER, ...) {}
void peerJoinGroupRoom(PEER, ...) {}
void peerLeaveRoom(PEER, ...) {}
void peerJoinStagingRoom(PEER, ...) {}
void peerCreateStagingRoom(PEER, ...) {}
void peerCreateStagingRoomWithSocket(PEER, ...) {}
void peerStartGame(PEER, ...) {}
void peerStopGame(PEER, ...) {}
void peerUpdateGame(PEER, ...) {}
void peerStartListingGames(PEER, ...) {}
void peerStopListingGames(PEER) {}
void peerListGroupRooms(PEER, ...) {}
void peerSetReady(PEER, int) {}
void peerSetTitle(PEER, ...) {}
void peerSetUpdatesRoomChannel(PEER, ...) {}
void peerParseQuery(PEER, ...) {}
void peerAuthenticateCDKey(PEER, ...) {}
int peerGetPlayerProfileID(PEER, ...) { return 0; }
PEERBool peerStateChanged(PEER) { return 0; }
PEERBool peerStateChange(PEER, ...) { return 0; }
int peerGetGlobalWatchKey(PEER, ...) { return 0; }

// GP stubs
GPResult gpInitialize(GPConnection*, ...) { return GP_NO_ERROR; }
void gpDestroy(GPConnection*) {}
void gpDisconnect(GPConnection*) {}
GPBool gpIsConnected(GPConnection*) { return 0; }
GPResult gpProcess(GPConnection*) { return GP_NO_ERROR; }
GPResult gpSetCallback(GPConnection*, int, GPCallback, void*) { return GP_NO_ERROR; }
GPResult gpSetStatus(GPConnection*, int, const char*, const char*) { return GP_NO_ERROR; }
GPResult gpConnect(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpConnectNewUser(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpAuthBuddyRequest(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpDenyBuddyRequest(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpDeleteBuddy(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpDeleteProfile(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpGetBuddyStatus(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpGetInfo(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpSendBuddyMessage(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpSendBuddyRequest(GPConnection*, ...) { return GP_NO_ERROR; }
GPResult gpSetInfoMask(GPConnection*, ...) { return GP_NO_ERROR; }

// ghttp stubs
void ghttpStartup(void) {}
void ghttpCleanup(void) {}
GHTTPBool ghttpGet(const char*, GHTTPBool, void*, void*) { return GHTTPFalse; }
GHTTPBool ghttpHead(const char*, GHTTPBool, void*, void*) { return GHTTPFalse; }
const char* ghttpGetHeaders(ghttpRequest) { return NULL; }
void ghttpThink(void) {}
void ghttpSetProxy(const char*) {}

// gstats stubs
int InitStatsConnection(...) { return 0; }
void CloseStatsConnection(...) {}
int IsStatsConnected(...) { return 0; }
void PersistThink(...) {}
void GetPersistDataValues(...) {}
void SetPersistDataValues(...) {}

#ifdef __cplusplus
}
#endif
