#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef void* ghttpRequest;
typedef int GHTTPBool;

#define GHTTPFalse 0
#define GHTTPTrue 1

void ghttpStartup(void);
void ghttpCleanup(void);

GHTTPBool ghttpGet(const char* url, GHTTPBool blocking, void* callback, void* param);
GHTTPBool ghttpHead(const char* url, GHTTPBool blocking, void* callback, void* param);
const char* ghttpGetHeaders(ghttpRequest request);
void ghttpThink(void);
void ghttpSetProxy(const char* proxy);

#ifdef __cplusplus
}
#endif
