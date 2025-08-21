#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef void* GPConnection;
typedef int GPProfile;
typedef int GPResult;
typedef int GPBool;
typedef void (*GPCallback)(GPConnection*, void*, void*);

#define GP_ERROR 0
#define GP_RECV_BUDDY_REQUEST 1
#define GP_RECV_BUDDY_MESSAGE 2
#define GP_RECV_BUDDY_STATUS 3
#define GP_FIREWALL 0
#define GP_NON_BLOCKING 0
#define GP_CHATTING 0
#define GP_ONLINE 1

#define GP_NO_ERROR 0
#define GP_MEMORY_ERROR 1
#define GP_PARAMETER_ERROR 2
#define GP_NETWORK_ERROR 3
#define GP_SERVER_ERROR 4

#define GP_GENERAL 0
#define GP_PARSE 1
#define GP_NOT_LOGGED_IN 2
#define GP_BAD_SESSKEY 3
#define GP_DATABASE 4
#define GP_NETWORK 5
#define GP_FORCED_DISCONNECT 6
#define GP_CONNECTION_CLOSED 7
#define GP_LOGIN 8
#define GP_LOGIN_TIMEOUT 9
#define GP_LOGIN_BAD_NICK 10
#define GP_LOGIN_BAD_EMAIL 11
#define GP_LOGIN_BAD_PASSWORD 12
#define GP_LOGIN_BAD_PROFILE 13
#define GP_LOGIN_PROFILE_DELETED 14
#define GP_LOGIN_CONNECTION_FAILED 15
#define GP_LOGIN_SERVER_AUTH_FAILED 16
#define GP_NEWUSER 17
#define GP_NEWUSER_BAD_NICK 18
#define GP_NEWUSER_BAD_PASSWORD 19
#define GP_UPDATEUI 20
#define GP_UPDATEUI_BAD_EMAIL 21
#define GP_NEWPROFILE 22
#define GP_NEWPROFILE_BAD_NICK 23
#define GP_NEWPROFILE_BAD_OLD_NICK 24
#define GP_UPDATEPRO 25
#define GP_UPDATEPRO_BAD_NICK 26
#define GP_ADDBUDDY 27
#define GP_ADDBUDDY_BAD_FROM 28
#define GP_ADDBUDDY_BAD_NEW 29
#define GP_ADDBUDDY_ALREADY_BUDDY 30
#define GP_AUTHADD 31
#define GP_AUTHADD_BAD_FROM 32
#define GP_AUTHADD_BAD_SIG 33
#define GP_STATUS 34
#define GP_BM 35
#define GP_BM_NOT_BUDDY 36
#define GP_GETPROFILE 37
#define GP_GETPROFILE_BAD_PROFILE 38
#define GP_DELBUDDY 39
#define GP_DELBUDDY_NOT_BUDDY 40
#define GP_DELPROFILE 41
#define GP_DELPROFILE_LAST_PROFILE 42
#define GP_SEARCH 43
#define GP_SEARCH_CONNECTION_FAILED 44

typedef struct {
    GPResult result;
    GPProfile profile;
} GPConnectResponseArg;

typedef struct {
    GPResult result;
    int errorCode;
    int fatal;
    const char* errorString;
} GPErrorArg;

typedef struct {
    GPProfile profile;
    const char* message;
} GPRecvBuddyMessageArg;

typedef struct {
    GPProfile profile;
    int index;
} GPRecvBuddyStatusArg;

typedef struct {
    GPProfile profile;
    const char* reason;
} GPRecvBuddyRequestArg;

GPResult gpInitialize(GPConnection* connection, ...);
void gpDestroy(GPConnection* connection);
void gpDisconnect(GPConnection* connection);
GPBool gpIsConnected(GPConnection* connection);
GPResult gpProcess(GPConnection* connection);
GPResult gpSetCallback(GPConnection* connection, int type, GPCallback callback, void* param);
GPResult gpSetStatus(GPConnection* connection, int status, const char* statusString, const char* location);
GPResult gpConnect(GPConnection* connection, ...);
GPResult gpConnectNewUser(GPConnection* connection, ...);
GPResult gpAuthBuddyRequest(GPConnection* connection, ...);
GPResult gpDenyBuddyRequest(GPConnection* connection, ...);
GPResult gpDeleteBuddy(GPConnection* connection, ...);
GPResult gpDeleteProfile(GPConnection* connection, ...);
GPResult gpGetBuddyStatus(GPConnection* connection, ...);
GPResult gpGetInfo(GPConnection* connection, ...);
GPResult gpSendBuddyMessage(GPConnection* connection, ...);
GPResult gpSendBuddyRequest(GPConnection* connection, ...);
GPResult gpSetInfoMask(GPConnection* connection, ...);

#ifdef __cplusplus
}
#endif
