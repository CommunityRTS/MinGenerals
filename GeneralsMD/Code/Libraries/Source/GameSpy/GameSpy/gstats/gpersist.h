#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef int persisttype_t;

int InitStatsConnection(...);
void CloseStatsConnection(...);
int IsStatsConnected(...);
void PersistThink(...);
void GetPersistDataValues(...);
void SetPersistDataValues(...);

#ifdef __cplusplus
}
#endif
