#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_143y/steam_api.h"
#include "steamworks_sdk_143y/isteamnetworkingsocketsserialized.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_143y
#include "struct_converters.h"
#include "cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003.h"
void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PRendezvous(void *linux_side, CSteamID steamIDRemote, uint32 unConnectionIDSrc, const void * pMsgRendezvous, uint32 cbRendezvous)
{
    ((ISteamNetworkingSocketsSerialized*)linux_side)->SendP2PRendezvous((CSteamID)steamIDRemote, (uint32)unConnectionIDSrc, (const void *)pMsgRendezvous, (uint32)cbRendezvous);
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_SendP2PConnectionFailure(void *linux_side, CSteamID steamIDRemote, uint32 unConnectionIDDest, uint32 nReason, const char * pszReason)
{
    ((ISteamNetworkingSocketsSerialized*)linux_side)->SendP2PConnectionFailure((CSteamID)steamIDRemote, (uint32)unConnectionIDDest, (uint32)nReason, (const char *)pszReason);
}

SteamAPICall_t cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCertAsync(void *linux_side)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCertAsync();
}

int cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetNetworkConfigJSON(void *linux_side, void * buf, uint32 cbBuf, const char * pszLauncherPartner)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetNetworkConfigJSON((void *)buf, (uint32)cbBuf, (const char *)pszLauncherPartner);
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_CacheRelayTicket(void *linux_side, const void * pTicket, uint32 cbTicket)
{
    ((ISteamNetworkingSocketsSerialized*)linux_side)->CacheRelayTicket((const void *)pTicket, (uint32)cbTicket);
}

uint32 cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicketCount(void *linux_side)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCachedRelayTicketCount();
}

int cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_GetCachedRelayTicket(void *linux_side, uint32 idxTicket, void * buf, uint32 cbBuf)
{
    return ((ISteamNetworkingSocketsSerialized*)linux_side)->GetCachedRelayTicket((uint32)idxTicket, (void *)buf, (uint32)cbBuf);
}

void cppISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized003_PostConnectionStateMsg(void *linux_side, const void * pMsg, uint32 cbMsg)
{
    ((ISteamNetworkingSocketsSerialized*)linux_side)->PostConnectionStateMsg((const void *)pMsg, (uint32)cbMsg);
}

#ifdef __cplusplus
}
#endif
