// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclNlmAPI.pas' rev: 30.00 (Windows)

#ifndef WclnlmapiHPP
#define WclnlmapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.ActiveX.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------
#include <utilcls.h>
typedef IEnumVARIANTPtr _di_IEnumVariant;

namespace Wclnlmapi
{
//-- forward type declarations -----------------------------------------------
__interface INetworkListManager;
typedef System::DelphiInterface<INetworkListManager> _di_INetworkListManager;
struct NLM_USAGE_DATA;
struct NLM_DATAPLAN_STATUS;
struct NLM_SIMULATED_PROFILE_INFO;
struct NLM_SOCKADDR;
__interface INetworkConnectionCost;
typedef System::DelphiInterface<INetworkConnectionCost> _di_INetworkConnectionCost;
__interface INetworkCostManager;
typedef System::DelphiInterface<INetworkCostManager> _di_INetworkCostManager;
__interface IEnumNetworks;
typedef System::DelphiInterface<IEnumNetworks> _di_IEnumNetworks;
__interface INetwork;
typedef System::DelphiInterface<INetwork> _di_INetwork;
__interface IEnumNetworkConnections;
typedef System::DelphiInterface<IEnumNetworkConnections> _di_IEnumNetworkConnections;
__interface INetworkConnection;
typedef System::DelphiInterface<INetworkConnection> _di_INetworkConnection;
__interface INetworkEvents;
typedef System::DelphiInterface<INetworkEvents> _di_INetworkEvents;
__interface INetworkConnectionEvents;
typedef System::DelphiInterface<INetworkConnectionEvents> _di_INetworkConnectionEvents;
__interface INetworkListManagerEvents;
typedef System::DelphiInterface<INetworkListManagerEvents> _di_INetworkListManagerEvents;
__interface INetworkCostManagerEvents;
typedef System::DelphiInterface<INetworkCostManagerEvents> _di_INetworkCostManagerEvents;
__interface INetworkConnectionCostEvents;
typedef System::DelphiInterface<INetworkConnectionCostEvents> _di_INetworkConnectionCostEvents;
__interface IPropertyBag;
typedef System::DelphiInterface<IPropertyBag> _di_IPropertyBag;
__interface IErrorLog;
typedef System::DelphiInterface<IErrorLog> _di_IErrorLog;
//-- type declarations -------------------------------------------------------
typedef Winapi::Activex::TOleEnum NLM_CONNECTION_COST;

typedef Winapi::Activex::TOleEnum NLM_ENUM_NETWORK;

typedef Winapi::Activex::TOleEnum NLM_DOMAIN_TYPE;

typedef Winapi::Activex::TOleEnum NLM_CONNECTIVITY;

typedef Winapi::Activex::TOleEnum NLM_NETWORK_CATEGORY;

typedef Winapi::Activex::TOleEnum NLM_NETWORK_PROPERTY_CHANGE;

typedef Winapi::Activex::TOleEnum NLM_CONNECTION_PROPERTY_CHANGE;

typedef _di_INetworkListManager NetworkListManager;

#pragma pack(push,1)
struct DECLSPEC_DRECORD NLM_USAGE_DATA
{
public:
	unsigned UsageInMegabytes;
	_FILETIME LastSyncTime;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD NLM_DATAPLAN_STATUS
{
public:
	GUID InterfaceGuid;
	NLM_USAGE_DATA UsageData;
	unsigned DataLimitInMegabytes;
	unsigned InboundBandwidthInKbps;
	unsigned OutboundBandwidthInKbps;
	_FILETIME NextBillingCycle;
	unsigned MaxTransferSizeInMegabytes;
	unsigned Reserved;
};
#pragma pack(pop)


typedef NLM_SIMULATED_PROFILE_INFO *PNLM_SIMULATED_PROFILE_INFO;

#pragma pack(push,1)
struct DECLSPEC_DRECORD NLM_SIMULATED_PROFILE_INFO
{
public:
	System::StaticArray<System::Word, 256> ProfileName;
	Winapi::Activex::TOleEnum cost;
	unsigned UsageInMegabytes;
	unsigned DataLimitInMegabytes;
};
#pragma pack(pop)


typedef NLM_SOCKADDR *PNLM_SOCKADDR;

#pragma pack(push,1)
struct DECLSPEC_DRECORD NLM_SOCKADDR
{
public:
	System::StaticArray<System::Byte, 128> data;
};
#pragma pack(pop)


__interface  INTERFACE_UUID("{DCB0000A-570F-4A9B-8D69-199FDBA5723B}") INetworkConnectionCost  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCost(/* out */ unsigned &pCost) = 0 ;
	virtual HRESULT __stdcall GetDataPlanStatus(/* out */ NLM_DATAPLAN_STATUS &pDataPlanStatus) = 0 ;
};

__interface  INTERFACE_UUID("{DCB00000-570F-4A9B-8D69-199FDBA5723B}") INetworkListManager  : public IDispatch 
{
	virtual HRESULT __safecall GetNetworks(Winapi::Activex::TOleEnum Flags, _di_IEnumNetworks &__GetNetworks_result) = 0 ;
	virtual HRESULT __safecall GetNetwork(const GUID gdNetworkId, _di_INetwork &__GetNetwork_result) = 0 ;
	virtual HRESULT __safecall GetNetworkConnections(_di_IEnumNetworkConnections &__GetNetworkConnections_result) = 0 ;
	virtual HRESULT __safecall GetNetworkConnection(const GUID gdNetworkConnectionId, _di_INetworkConnection &__GetNetworkConnection_result) = 0 ;
	virtual HRESULT __safecall Get_IsConnectedToInternet(System::WordBool &__Get_IsConnectedToInternet_result) = 0 ;
	virtual HRESULT __safecall Get_IsConnected(System::WordBool &__Get_IsConnected_result) = 0 ;
	virtual HRESULT __safecall GetConnectivity(Winapi::Activex::TOleEnum &__GetConnectivity_result) = 0 ;
	virtual HRESULT __safecall SetSimulatedProfileInfo(PNLM_SIMULATED_PROFILE_INFO pSimulatedInfo) = 0 ;
	virtual HRESULT __safecall ClearSimulatedProfileInfo(void) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_IsConnectedToInternet() { System::WordBool __r; HRESULT __hr = Get_IsConnectedToInternet(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool IsConnectedToInternet = {read=_scw_Get_IsConnectedToInternet};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_IsConnected() { System::WordBool __r; HRESULT __hr = Get_IsConnected(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool IsConnected = {read=_scw_Get_IsConnected};
};

__interface  INTERFACE_UUID("{DCB00008-570F-4A9B-8D69-199FDBA5723B}") INetworkCostManager  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCost(/* out */ unsigned &pCost, PNLM_SOCKADDR pDestIPAddr) = 0 ;
	virtual HRESULT __stdcall GetDataPlanStatus(/* out */ NLM_DATAPLAN_STATUS &pDataPlanStatus, PNLM_SOCKADDR pDestIPAddr) = 0 ;
	virtual HRESULT __stdcall SetDestinationAddresses(unsigned length, PNLM_SOCKADDR pDestIPAddrList, System::WordBool bAppend) = 0 ;
};

__interface  INTERFACE_UUID("{DCB00003-570F-4A9B-8D69-199FDBA5723B}") IEnumNetworks  : public IDispatch 
{
	virtual HRESULT __safecall Get__NewEnum(_di_IEnumVARIANT &__Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Next(unsigned celt, /* out */ _di_INetwork &rgelt, unsigned &pceltFetched) = 0 ;
	virtual HRESULT __safecall Skip(unsigned celt) = 0 ;
	virtual HRESULT __safecall Reset(void) = 0 ;
	virtual HRESULT __safecall Clone(_di_IEnumNetworks &__Clone_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IEnumVARIANT _scw_Get__NewEnum() { _di_IEnumVARIANT __r; HRESULT __hr = Get__NewEnum(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IEnumVARIANT _NewEnum = {read=_scw_Get__NewEnum};
};

__interface  INTERFACE_UUID("{DCB00002-570F-4A9B-8D69-199FDBA5723B}") INetwork  : public IDispatch 
{
	virtual HRESULT __safecall GetName(System::WideString &__GetName_result) = 0 ;
	virtual HRESULT __safecall SetName(const System::WideString szNetworkNewName) = 0 ;
	virtual HRESULT __safecall GetDescription(System::WideString &__GetDescription_result) = 0 ;
	virtual HRESULT __safecall SetDescription(const System::WideString szDescription) = 0 ;
	virtual HRESULT __safecall GetNetworkId(GUID &__GetNetworkId_result) = 0 ;
	virtual HRESULT __safecall GetDomainType(Winapi::Activex::TOleEnum &__GetDomainType_result) = 0 ;
	virtual HRESULT __safecall GetNetworkConnections(_di_IEnumNetworkConnections &__GetNetworkConnections_result) = 0 ;
	virtual HRESULT __safecall GetTimeCreatedAndConnected(/* out */ unsigned &pdwLowDateTimeCreated, /* out */ unsigned &pdwHighDateTimeCreated, /* out */ unsigned &pdwLowDateTimeConnected, /* out */ unsigned &pdwHighDateTimeConnected) = 0 ;
	virtual HRESULT __safecall Get_IsConnectedToInternet(System::WordBool &__Get_IsConnectedToInternet_result) = 0 ;
	virtual HRESULT __safecall Get_IsConnected(System::WordBool &__Get_IsConnected_result) = 0 ;
	virtual HRESULT __safecall GetConnectivity(Winapi::Activex::TOleEnum &__GetConnectivity_result) = 0 ;
	virtual HRESULT __safecall GetCategory(Winapi::Activex::TOleEnum &__GetCategory_result) = 0 ;
	virtual HRESULT __safecall SetCategory(Winapi::Activex::TOleEnum NewCategory) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_IsConnectedToInternet() { System::WordBool __r; HRESULT __hr = Get_IsConnectedToInternet(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool IsConnectedToInternet = {read=_scw_Get_IsConnectedToInternet};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_IsConnected() { System::WordBool __r; HRESULT __hr = Get_IsConnected(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool IsConnected = {read=_scw_Get_IsConnected};
};

__interface  INTERFACE_UUID("{DCB00006-570F-4A9B-8D69-199FDBA5723B}") IEnumNetworkConnections  : public IDispatch 
{
	virtual HRESULT __safecall Get__NewEnum(_di_IEnumVARIANT &__Get__NewEnum_result) = 0 ;
	virtual HRESULT __safecall Next(unsigned celt, /* out */ _di_INetworkConnection &rgelt, unsigned &pceltFetched) = 0 ;
	virtual HRESULT __safecall Skip(unsigned celt) = 0 ;
	virtual HRESULT __safecall Reset(void) = 0 ;
	virtual HRESULT __safecall Clone(_di_IEnumNetworkConnections &__Clone_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IEnumVARIANT _scw_Get__NewEnum() { _di_IEnumVARIANT __r; HRESULT __hr = Get__NewEnum(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IEnumVARIANT _NewEnum = {read=_scw_Get__NewEnum};
};

__interface  INTERFACE_UUID("{DCB00005-570F-4A9B-8D69-199FDBA5723B}") INetworkConnection  : public IDispatch 
{
	virtual HRESULT __safecall GetNetwork(_di_INetwork &__GetNetwork_result) = 0 ;
	virtual HRESULT __safecall Get_IsConnectedToInternet(System::WordBool &__Get_IsConnectedToInternet_result) = 0 ;
	virtual HRESULT __safecall Get_IsConnected(System::WordBool &__Get_IsConnected_result) = 0 ;
	virtual HRESULT __safecall GetConnectivity(Winapi::Activex::TOleEnum &__GetConnectivity_result) = 0 ;
	virtual HRESULT __safecall GetConnectionId(GUID &__GetConnectionId_result) = 0 ;
	virtual HRESULT __safecall GetAdapterId(GUID &__GetAdapterId_result) = 0 ;
	virtual HRESULT __safecall GetDomainType(Winapi::Activex::TOleEnum &__GetDomainType_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_IsConnectedToInternet() { System::WordBool __r; HRESULT __hr = Get_IsConnectedToInternet(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool IsConnectedToInternet = {read=_scw_Get_IsConnectedToInternet};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_IsConnected() { System::WordBool __r; HRESULT __hr = Get_IsConnected(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool IsConnected = {read=_scw_Get_IsConnected};
};

__interface  INTERFACE_UUID("{DCB00004-570F-4A9B-8D69-199FDBA5723B}") INetworkEvents  : public System::IInterface 
{
	virtual HRESULT __stdcall NetworkAdded(const GUID networkId) = 0 ;
	virtual HRESULT __stdcall NetworkDeleted(const GUID networkId) = 0 ;
	virtual HRESULT __stdcall NetworkConnectivityChanged(const GUID networkId, Winapi::Activex::TOleEnum newConnectivity) = 0 ;
	virtual HRESULT __stdcall NetworkPropertyChanged(const GUID networkId, Winapi::Activex::TOleEnum Flags) = 0 ;
};

__interface  INTERFACE_UUID("{DCB00007-570F-4A9B-8D69-199FDBA5723B}") INetworkConnectionEvents  : public System::IInterface 
{
	virtual HRESULT __stdcall NetworkConnectionConnectivityChanged(const GUID connectionId, Winapi::Activex::TOleEnum newConnectivity) = 0 ;
	virtual HRESULT __stdcall NetworkConnectionPropertyChanged(const GUID connectionId, Winapi::Activex::TOleEnum Flags) = 0 ;
};

__interface  INTERFACE_UUID("{DCB00001-570F-4A9B-8D69-199FDBA5723B}") INetworkListManagerEvents  : public System::IInterface 
{
	virtual HRESULT __stdcall ConnectivityChanged(Winapi::Activex::TOleEnum newConnectivity) = 0 ;
};

__interface  INTERFACE_UUID("{DCB00009-570F-4A9B-8D69-199FDBA5723B}") INetworkCostManagerEvents  : public System::IInterface 
{
	virtual HRESULT __stdcall CostChanged(unsigned newCost, PNLM_SOCKADDR pDestAddr) = 0 ;
	virtual HRESULT __stdcall DataPlanStatusChanged(PNLM_SOCKADDR pDestAddr) = 0 ;
};

__interface  INTERFACE_UUID("{DCB0000B-570F-4A9B-8D69-199FDBA5723B}") INetworkConnectionCostEvents  : public System::IInterface 
{
	virtual HRESULT __stdcall ConnectionCostChanged(const GUID connectionId, unsigned newCost) = 0 ;
	virtual HRESULT __stdcall ConnectionDataPlanStatusChanged(const GUID connectionId) = 0 ;
};

__interface  INTERFACE_UUID("{55272A00-42CB-11CE-8135-00AA004BB851}") IPropertyBag  : public System::IInterface 
{
	virtual HRESULT __stdcall RemoteRead(System::WideChar * pszPropName, /* out */ System::OleVariant &pVar, const _di_IErrorLog pErrorLog, unsigned varType, const System::_di_IInterface pUnkObj) = 0 ;
	virtual HRESULT __stdcall Write(System::WideChar * pszPropName, System::OleVariant &pVar) = 0 ;
};

__interface  INTERFACE_UUID("{3127CA40-446E-11CE-8135-00AA004BB851}") IErrorLog  : public System::IInterface 
{
	virtual HRESULT __stdcall AddError(System::WideChar * pszPropName, Winapi::Activex::PExcepInfo pExcepInfo) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 NETWORKLISTMajorVersion = System::Int8(0x1);
static const System::Int8 NETWORKLISTMinorVersion = System::Int8(0x0);
extern DELPHI_PACKAGE GUID LIBID_NETWORKLIST;
extern DELPHI_PACKAGE GUID CLASS_NetworkListManager;
static const System::Int8 NLM_CONNECTION_COST_UNKNOWN = System::Int8(0x0);
static const System::Int8 NLM_CONNECTION_COST_UNRESTRICTED = System::Int8(0x1);
static const System::Int8 NLM_CONNECTION_COST_FIXED = System::Int8(0x2);
static const System::Int8 NLM_CONNECTION_COST_VARIABLE = System::Int8(0x4);
static const int NLM_CONNECTION_COST_OVERDATALIMIT = int(0x10000);
static const int NLM_CONNECTION_COST_CONGESTED = int(0x20000);
static const int NLM_CONNECTION_COST_ROAMING = int(0x40000);
static const int NLM_CONNECTION_COST_APPROACHINGDATALIMIT = int(0x80000);
static const System::Int8 NLM_ENUM_NETWORK_CONNECTED = System::Int8(0x1);
static const System::Int8 NLM_ENUM_NETWORK_DISCONNECTED = System::Int8(0x2);
static const System::Int8 NLM_ENUM_NETWORK_ALL = System::Int8(0x3);
static const System::Int8 NLM_DOMAIN_TYPE_NON_DOMAIN_NETWORK = System::Int8(0x0);
static const System::Int8 NLM_DOMAIN_TYPE_DOMAIN_NETWORK = System::Int8(0x1);
static const System::Int8 NLM_DOMAIN_TYPE_DOMAIN_AUTHENTICATED = System::Int8(0x2);
static const System::Int8 NLM_CONNECTIVITY_DISCONNECTED = System::Int8(0x0);
static const System::Int8 NLM_CONNECTIVITY_IPV4_NOTRAFFIC = System::Int8(0x1);
static const System::Int8 NLM_CONNECTIVITY_IPV6_NOTRAFFIC = System::Int8(0x2);
static const System::Int8 NLM_CONNECTIVITY_IPV4_SUBNET = System::Int8(0x10);
static const System::Int8 NLM_CONNECTIVITY_IPV4_LOCALNETWORK = System::Int8(0x20);
static const System::Int8 NLM_CONNECTIVITY_IPV4_INTERNET = System::Int8(0x40);
static const System::Word NLM_CONNECTIVITY_IPV6_SUBNET = System::Word(0x100);
static const System::Word NLM_CONNECTIVITY_IPV6_LOCALNETWORK = System::Word(0x200);
static const System::Word NLM_CONNECTIVITY_IPV6_INTERNET = System::Word(0x400);
static const System::Int8 NLM_NETWORK_CATEGORY_PUBLIC = System::Int8(0x0);
static const System::Int8 NLM_NETWORK_CATEGORY_PRIVATE = System::Int8(0x1);
static const System::Int8 NLM_NETWORK_CATEGORY_DOMAIN_AUTHENTICATED = System::Int8(0x2);
static const System::Int8 NLM_NETWORK_PROPERTY_CHANGE_CONNECTION = System::Int8(0x1);
static const System::Int8 NLM_NETWORK_PROPERTY_CHANGE_DESCRIPTION = System::Int8(0x2);
static const System::Int8 NLM_NETWORK_PROPERTY_CHANGE_NAME = System::Int8(0x4);
static const System::Int8 NLM_NETWORK_PROPERTY_CHANGE_ICON = System::Int8(0x8);
static const System::Int8 NLM_NETWORK_PROPERTY_CHANGE_CATEGORY_VALUE = System::Int8(0x10);
static const System::Int8 NLM_CONNECTION_PROPERTY_CHANGE_AUTHENTICATION = System::Int8(0x1);
}	/* namespace Wclnlmapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLNLMAPI)
using namespace Wclnlmapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclnlmapiHPP
