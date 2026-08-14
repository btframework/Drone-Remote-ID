// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclNlm.pas' rev: 30.00 (Windows)

#ifndef WclnlmHPP
#define WclnlmHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <wclNlmAPI.hpp>
#include <wclErrors.hpp>
#include <wclMessaging.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclnlm
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclNlmConnection;
class DELPHICLASS TwclNlmNetwork;
struct TwclNetworkAdapter;
class DELPHICLASS TwclNetworkListManager;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TwclNlmConnectivity : unsigned int { nlmDisconnected, nlmIPv4NoTraffic, nlmIPv6NoTraffic, nlmIPv4Subnet, nlmIPv4LocalNetwork, nlmIPv4Internet, nlmIPv6Subnet, nlmIPv6LocalNetwork, nlmIPv6Internet };

typedef System::Set<TwclNlmConnectivity, TwclNlmConnectivity::nlmDisconnected, TwclNlmConnectivity::nlmIPv6Internet> TwclNlmConnectivityFlags;

enum DECLSPEC_DENUM TwclNlmNetworkPropertyChange : unsigned int { nlmNetworkChangeConnection, nlmNetworkChangeDescription, nlmNetworkChangeName, nlmNetworkChangeIcon, nlmNetworkChangeCategoryValue };

typedef System::Set<TwclNlmNetworkPropertyChange, TwclNlmNetworkPropertyChange::nlmNetworkChangeConnection, TwclNlmNetworkPropertyChange::nlmNetworkChangeCategoryValue> TwclNlmNetworkPropertyChangeFlags;

enum DECLSPEC_DENUM TwclNlmNetworkCategory : unsigned int { nlmCategoryPublic, nlmCategoryPrivate, nlmCategoryDomainAuthenticated };

enum DECLSPEC_DENUM TwclNlmDomainType : unsigned int { nlmNonDomainNetwork, nlmDomainNetwork, nlmDomainAuthenticated };

enum DECLSPEC_DENUM TwclNlmConnectionProperty : unsigned int { nlmAuthentication };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclNlmConnection : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclnlmapi::_di_INetworkConnection FConnection;
	
public:
	__fastcall TwclNlmConnection(const Wclnlmapi::_di_INetworkConnection Connection);
	__fastcall virtual ~TwclNlmConnection(void);
	int __fastcall GetAdapterId(/* out */ GUID &Id);
	int __fastcall GetConnected(/* out */ bool &Connected);
	int __fastcall GetConnectedToInternet(/* out */ bool &Connected);
	int __fastcall GetConnectivity(/* out */ TwclNlmConnectivityFlags &Connectivity);
	int __fastcall GetDomainType(/* out */ TwclNlmDomainType &DomainType);
	int __fastcall GetId(/* out */ GUID &Id);
	int __fastcall GetNetwork(/* out */ TwclNlmNetwork* &Network);
};

#pragma pack(pop)

typedef System::DynamicArray<TwclNlmConnection*> TwclNlmConnections;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclNlmNetwork : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclnlmapi::_di_INetwork FNetwork;
	
public:
	__fastcall TwclNlmNetwork(const Wclnlmapi::_di_INetwork Network);
	__fastcall virtual ~TwclNlmNetwork(void);
	int __fastcall GetCategory(/* out */ TwclNlmNetworkCategory &Category);
	int __fastcall GetConnected(/* out */ bool &Connected);
	int __fastcall GetConnectedToInternet(/* out */ bool &Connected);
	int __fastcall GetConnections(/* out */ TwclNlmConnections &Connections);
	int __fastcall GetConnectivity(/* out */ TwclNlmConnectivityFlags &Connectivity);
	int __fastcall GetDescription(/* out */ System::UnicodeString &Description);
	int __fastcall GetDomainType(/* out */ TwclNlmDomainType &DomainType);
	int __fastcall GetName(/* out */ System::UnicodeString &Name);
	int __fastcall GetNetworkId(/* out */ GUID &Id);
	int __fastcall GetTimeCreatedAndConnected(/* out */ System::TDateTime &Created, /* out */ System::TDateTime &Connected);
	int __fastcall SetCategory(const TwclNlmNetworkCategory Category);
	int __fastcall SetDescription(const System::UnicodeString Description);
	int __fastcall SetName(const System::UnicodeString Name);
};

#pragma pack(pop)

typedef System::DynamicArray<TwclNlmNetwork*> TwclNlmNetworks;

enum DECLSPEC_DENUM TwclNlmEnumNetwork : unsigned int { nlmEnumConnected, nlmEnumDisconnected, nlmEnumAll };

enum DECLSPEC_DENUM TwclNetworkAdapterFlag : unsigned int { afDdnsEnabled, afRegisterSuffix, afDhcpEnabled, afReceiveOnly, afNoMulticast, afIpv6OtherStatefulConfig, afNetbiosOverTcpIpEnabled, afIpv4Enabled, afIpv6Enabled, afIpv6ManageAddressConfig };

typedef System::Set<TwclNetworkAdapterFlag, TwclNetworkAdapterFlag::afDdnsEnabled, TwclNetworkAdapterFlag::afIpv6ManageAddressConfig> TwclNetworkAdapterFlags;

enum DECLSPEC_DENUM TwclNetworkInterfaceStatus : unsigned int { isUp, isDown, isTesting, isUnknown, isDormant, isNotPresent, isLowerLayerDown };

struct DECLSPEC_DRECORD TwclNetworkAdapter
{
	
private:
	typedef System::DynamicArray<System::UnicodeString> _TwclNetworkAdapter__1;
	
	
public:
	System::UnicodeString Id;
	System::UnicodeString FriendlyName;
	System::UnicodeString Description;
	System::UnicodeString Mac;
	_TwclNetworkAdapter__1 IPs;
	System::UnicodeString DnsSuffix;
	unsigned Mtu;
	TwclNetworkAdapterFlags Flags;
	TwclNetworkInterfaceStatus Status;
};


typedef System::DynamicArray<TwclNetworkAdapter> TwclNetworkAdapters;

typedef void __fastcall (__closure *TwclNlmConnectivityChangeEvent)(System::TObject* Sender, const TwclNlmConnectivityFlags Connectivity);

typedef void __fastcall (__closure *TwclNlmNetworkConnectivityChangedEvent)(System::TObject* Sender, const GUID &NetworkId, const TwclNlmConnectivityFlags Connectivity);

typedef void __fastcall (__closure *TwclNlmNetworkEvent)(System::TObject* Sender, const GUID &NetworkId);

typedef void __fastcall (__closure *TwclNlmNetworkPropertyChangedEvent)(System::TObject* Sender, const GUID &NetworkId, const TwclNlmNetworkPropertyChangeFlags Change);

typedef void __fastcall (__closure *TwclNlmConnectionConnectivityChangedEvent)(System::TObject* Sender, const GUID &ConnectionId, const TwclNlmConnectivityFlags Connectivity);

typedef void __fastcall (__closure *TwclNlmConnectionPropertyChangedEvent)(System::TObject* Sender, const GUID &ConnectionId, const TwclNlmConnectionProperty Prop);

class PASCALIMPLEMENTATION TwclNetworkListManager : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Wclnlmapi::_di_INetworkListManager FManager;
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	_di_IConnectionPoint FListConnectionPoint;
	_di_IConnectionPoint FNetworkConnectionPoint;
	_di_IConnectionPoint FConnectionConnectionPoint;
	int FListCookie;
	int FNetworkCookie;
	int FConnectionCookie;
	System::Classes::TNotifyEvent FAfterOpen;
	System::Classes::TNotifyEvent FBeforeClose;
	TwclNlmConnectivityChangeEvent FOnConnectivityChanged;
	TwclNlmNetworkEvent FOnNetworkAdded;
	TwclNlmNetworkConnectivityChangedEvent FOnNetworkConnectivityChanged;
	TwclNlmNetworkEvent FOnNetworkDeleted;
	TwclNlmNetworkPropertyChangedEvent FOnNetworkPropertyChanged;
	TwclNlmConnectionConnectivityChangedEvent FOnConnectionConnectivityChanged;
	TwclNlmConnectionPropertyChangedEvent FOnConnectionPropertyChanged;
	void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	int __fastcall DecodeRegError(const int Res);
	bool __fastcall GetActive(void);
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	
protected:
	virtual void __fastcall DoAfterOpen(void);
	virtual void __fastcall DoBeforeClose(void);
	virtual void __fastcall DoConnectivityChanged(const TwclNlmConnectivityFlags Connectivity);
	virtual void __fastcall DoNetworkAdded(const GUID &NetworkId);
	virtual void __fastcall DoNetworkConnectivityChanged(const GUID &NetworkId, const TwclNlmConnectivityFlags Connectivity);
	virtual void __fastcall DoNetworkDeleted(const GUID &NetworkId);
	virtual void __fastcall DoNetworkPropertyChanged(const GUID &NetworkId, const TwclNlmNetworkPropertyChangeFlags Change);
	virtual void __fastcall DoConnectionConnectivityChanged(const GUID &ConnectionId, const TwclNlmConnectivityFlags Connectivity);
	virtual void __fastcall DoConnectionPropertyChanged(const GUID &ConnectionId, const TwclNlmConnectionProperty Prop);
	
public:
	__fastcall virtual TwclNetworkListManager(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclNetworkListManager(void);
	int __fastcall Close(void);
	int __fastcall Open(void);
	int __fastcall GetConnected(/* out */ bool &Connected);
	int __fastcall GetConnectedToInternet(/* out */ bool &Connected);
	int __fastcall GetConnectivity(/* out */ TwclNlmConnectivityFlags &Connectivity);
	int __fastcall GetConnections(/* out */ TwclNlmConnections &Connections);
	int __fastcall GetNetwork(const GUID &NetworkId, /* out */ TwclNlmNetwork* &Network);
	int __fastcall GetNetworks(const TwclNlmEnumNetwork Flags, /* out */ TwclNlmNetworks &Networks);
	int __fastcall DeleteNetwork(const GUID &NetworkId);
	int __fastcall EnumAdapters(/* out */ TwclNetworkAdapters &Adapters);
	int __fastcall GetAdapter(const System::UnicodeString Id, TwclNetworkAdapter &Adapter);
	__property bool Active = {read=GetActive, nodefault};
	
__published:
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
	__property System::Classes::TNotifyEvent AfterOpen = {read=FAfterOpen, write=FAfterOpen};
	__property System::Classes::TNotifyEvent BeforeClose = {read=FBeforeClose, write=FBeforeClose};
	__property TwclNlmConnectivityChangeEvent OnConnectivityChanged = {read=FOnConnectivityChanged, write=FOnConnectivityChanged};
	__property TwclNlmNetworkEvent OnNetworkAdded = {read=FOnNetworkAdded, write=FOnNetworkAdded};
	__property TwclNlmNetworkConnectivityChangedEvent OnNetworkConnectivityChanged = {read=FOnNetworkConnectivityChanged, write=FOnNetworkConnectivityChanged};
	__property TwclNlmNetworkEvent OnNetworkDeleted = {read=FOnNetworkDeleted, write=FOnNetworkDeleted};
	__property TwclNlmNetworkPropertyChangedEvent OnNetworkPropertyChanged = {read=FOnNetworkPropertyChanged, write=FOnNetworkPropertyChanged};
	__property TwclNlmConnectionConnectivityChangedEvent OnConnectionConnectivityChanged = {read=FOnConnectionConnectivityChanged, write=FOnConnectionConnectivityChanged};
	__property TwclNlmConnectionPropertyChangedEvent OnConnectionPropertyChanged = {read=FOnConnectionPropertyChanged, write=FOnConnectionPropertyChanged};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wclnlm */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLNLM)
using namespace Wclnlm;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclnlmHPP
