// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclWiFi.pas' rev: 30.00 (Windows)

#ifndef WclwifiHPP
#define WclwifiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <wclWinAPI.hpp>
#include <wclMessaging.hpp>
#include <Winapi.Windows.hpp>
#include <wclErrors.hpp>
#include <wclWlan.hpp>
#include <wclWiFiErrors.hpp>
#include <wclDriCommon.hpp>
#include <wclDriAsd.hpp>
#include <wclSync.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclwifi
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclCustomWiFiComponent;
class DELPHICLASS TwclCustomWiFiMemoryComponent;
struct TwclWiFiAcmConnectionEventData;
struct TwclWiFiHostedNetworkPeerState;
struct TwclWiFiMsmConnectionEventData;
struct TwclWiFiPhyRadioState;
struct TwclWiFiIpSettings;
struct TwclWiFiOneXStatus;
struct TwclWiFiOneXConnectionProfile;
struct TwclWiFiOnexXAuthParams;
struct TwclWiFiEapType;
struct TwclWiFiEapMethodType;
struct TwclWiFiOneXEapError;
struct TwclWiFiOneXStatusUpdate;
class DELPHICLASS TwclWiFiEvents;
struct TwclWiFiInterfaceData;
struct TwclWiFiAvailableNetwork;
struct TwclWiFiBss;
struct TwclWiFiInformationElement;
class DELPHICLASS TwclWiFiInformationElementParser;
class DELPHICLASS TwclWiFiClient;
struct TwclWiFiAuthCipherPair;
struct TwclWiFiInterfaceCapability;
struct TwclWiFiAssociationAttributes;
struct TwclWiFiSecurityAttributes;
struct TwclWiFiConnectionAttributes;
struct TwclWiFiInterfaceParameter;
class DELPHICLASS TwclWiFiInterface;
struct TwclWiFiHostedNetworkStatus;
struct TwclWiFiHostedNetworkConnectionSettings;
class DELPHICLASS TwclWiFiHostedNetwork;
struct TwclWiFiProfileData;
class DELPHICLASS TwclWiFiProfilesManager;
struct TwclWiFiSnifferFrameMetaData;
class DELPHICLASS TwclWiFiSniffer;
class DELPHICLASS TwclWiFiDirectDevice;
class DELPHICLASS TwclCustomWiFiDirectComponent;
class DELPHICLASS TwclWiFiDirectConnectionComponent;
class DELPHICLASS TwclWiFiDirectAdvertiser;
class DELPHICLASS TwclWiFiSoftAP;
class DELPHICLASS TwclWiFiDirectDeviceWatcher;
class DELPHICLASS TwclWiFiDirectClient;
struct TwclMobileHotspotClient;
class DELPHICLASS TwclMobileHotspot;
class DELPHICLASS TwclWiFiDriParser;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TwclCustomWiFiComponent : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	NativeUInt FHandle;
	System::Classes::TNotifyEvent FAfterOpen;
	System::Classes::TNotifyEvent FBeforeClose;
	bool __fastcall GetActive(void);
	
protected:
	int __fastcall RequestAccess(void);
	virtual int __fastcall InternalClose(void) = 0 ;
	virtual int __fastcall InternalOpen(void) = 0 ;
	virtual void __fastcall DoAfterOpen(void);
	virtual void __fastcall DoBeforeClose(void);
	__property NativeUInt Handle = {read=FHandle, nodefault};
	
public:
	__fastcall virtual TwclCustomWiFiComponent(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclCustomWiFiComponent(void);
	int __fastcall Close(void);
	int __fastcall Open(void);
	__property bool Active = {read=GetActive, nodefault};
	
__published:
	__property System::Classes::TNotifyEvent AfterOpen = {read=FAfterOpen, write=FAfterOpen};
	__property System::Classes::TNotifyEvent BeforeClose = {read=FBeforeClose, write=FBeforeClose};
};


class PASCALIMPLEMENTATION TwclCustomWiFiMemoryComponent : public TwclCustomWiFiComponent
{
	typedef TwclCustomWiFiComponent inherited;
	
public:
	int __fastcall FreeMemory(const void * Memory);
public:
	/* TwclCustomWiFiComponent.Create */ inline __fastcall virtual TwclCustomWiFiMemoryComponent(System::Classes::TComponent* AOwner) : TwclCustomWiFiComponent(AOwner) { }
	/* TwclCustomWiFiComponent.Destroy */ inline __fastcall virtual ~TwclCustomWiFiMemoryComponent(void) { }
	
};


enum DECLSPEC_DENUM TwclWiFiAdHocNetworkState : unsigned int { asFormed, asConnected };

enum DECLSPEC_DENUM TwclWiFiBssType : unsigned int { bssInfrastructure, bssIndependent, bssAny };

enum DECLSPEC_DENUM TwclWiFiConnectionMode : unsigned int { cmProfile, cmTemporaryProfile, cmDiscoverySecure, cmDiscoveryUnsecure, cmAuto, cmInvalid };

enum DECLSPEC_DENUM TwclWiFiConnectionFlag : unsigned int { cfAdHocNetworkFormed, cfConsoleUserProfile };

typedef System::Set<TwclWiFiConnectionFlag, TwclWiFiConnectionFlag::cfAdHocNetworkFormed, TwclWiFiConnectionFlag::cfConsoleUserProfile> TwclWiFiConnectionFlags;

struct DECLSPEC_DRECORD TwclWiFiAcmConnectionEventData
{
public:
	TwclWiFiConnectionMode ConnectionMode;
	System::UnicodeString ProfileName;
	System::UnicodeString Ssid;
	TwclWiFiBssType BssType;
	bool SecurityEnabled;
	int Reason;
	TwclWiFiConnectionFlags Flags;
	System::UnicodeString ProfileXml;
};


enum DECLSPEC_DENUM TwclWiFiPowerSetting : unsigned int { psNo, psLow, psMedium, psMaximum, psInvalid };

enum DECLSPEC_DENUM TwclWiFiHostedNetworkPeerAuthState : unsigned int { asInvalid, asAuthenticated };

struct DECLSPEC_DRECORD TwclWiFiHostedNetworkPeerState
{
public:
	System::UnicodeString Mac;
	TwclWiFiHostedNetworkPeerAuthState AuthState;
};


typedef System::DynamicArray<TwclWiFiHostedNetworkPeerState> TwclWiFiHostedNetworkPeerStates;

typedef System::DynamicArray<System::UnicodeString> TwclWiFiHostedNetworkConnectedPeers;

enum DECLSPEC_DENUM TwclWiFiRadioState : unsigned int { rsUnknown, rsOn, rsOff };

enum DECLSPEC_DENUM TwclWiFiHostedNetworkState : unsigned int { hnUnavailable, hnIdle, hnActive };

enum DECLSPEC_DENUM TwclWiFiOperationMode : unsigned int { omUnknown, omStation, omAccessPoint, omExtensibleStation, omExtensibleAccessPoint, omWiFiDirectDevice, omWiFiDirectGroupOwner, omWiFiDirectClient, omManufacturing, omNetworkMonitor };

struct DECLSPEC_DRECORD TwclWiFiMsmConnectionEventData
{
public:
	TwclWiFiConnectionMode ConnectionMode;
	System::UnicodeString ProfileName;
	System::UnicodeString Ssid;
	TwclWiFiBssType BssType;
	System::UnicodeString Mac;
	bool SecurityEnabled;
	bool FirstPeer;
	bool LastPeer;
	int Reason;
};


enum DECLSPEC_DENUM TwclWiFiPhy : unsigned int { phyAny, phyFhss, phyDsss, phyIr, phyOfdm, phyHrDsss, phyErp, phyHt, phyVht, phyUnknown };

typedef System::Set<TwclWiFiPhy, TwclWiFiPhy::phyAny, TwclWiFiPhy::phyUnknown> TwclWiFiPhys;

struct DECLSPEC_DRECORD TwclWiFiPhyRadioState
{
public:
	TwclWiFiPhy Phy;
	TwclWiFiRadioState SoftwareState;
	TwclWiFiRadioState HardwareState;
};


typedef System::DynamicArray<TwclWiFiPhyRadioState> TwclWiFiPhyRadioStates;

struct DECLSPEC_DRECORD TwclWiFiIpSettings
{
public:
	bool Static;
	System::UnicodeString Address;
	System::UnicodeString Mask;
	System::UnicodeString Gateway;
	System::UnicodeString Dns1;
	System::UnicodeString Dns2;
};


enum DECLSPEC_DENUM TwclWiFiOneXAuthStatus : unsigned int { oxAuthNotStarted, oxAuthInProgress, oxAuthNoAuthenticatorFound, oxAuthSuccess, oxAuthFailure, oxAuthInvalid };

struct DECLSPEC_DRECORD TwclWiFiOneXStatus
{
public:
	TwclWiFiOneXAuthStatus Status;
	int Reason;
	int Error;
};


enum DECLSPEC_DENUM TwclWiFiOneXEapMethodBackendSupport : unsigned int { oxEapMethodBackendSupportUnknown, oxEapMethodBackendSupported, oxEapMethodBackendUnsupported };

enum DECLSPEC_DENUM TwclWiFiOneXSupplicantMode : unsigned int { oxSupplicantModeInhibitTransmission, oxSupplicantModeLearn, oxSupplicantModeCompliant, oxSupplicantModeInvalid };

enum DECLSPEC_DENUM TwclWiFiOnexXAuthMode : unsigned int { oxAuthModeMachineOrUser, oxAuthModeMachineOnly, oxAuthModeUserOnly, oxAuthModeGuest, oxAuthModeUnspecified, oxAuthModeInvalid };

struct DECLSPEC_DRECORD TwclWiFiOneXConnectionProfile
{
public:
	TwclWiFiOneXSupplicantMode SupplicantMode;
	TwclWiFiOnexXAuthMode AuthMode;
	unsigned HeldPeriod;
	unsigned AuthPeriod;
	unsigned StartPeriod;
	unsigned MaxStart;
	unsigned MaxAuthFailures;
	unsigned NetworkAuthTimeout;
	unsigned NetworkAuthWithUITimeout;
	bool AllowLogonDialogs;
	bool UserBasedVLan;
};


enum DECLSPEC_DENUM TwclWiFiOneXAuthIdentity : unsigned int { oxAuthIdentityNone, oxAuthIdentityMachine, oxAuthIdentityUser, oxAuthIdentityExplicitUser, oxAuthIdentityGuest, oxAuthIdentityInvalid, oxAuthIdentityUnknown };

enum DECLSPEC_DENUM TwclWiFiIsolationState : unsigned int { isUnknonw, isNotRestricted, isInProbation, isRestrictedAccess, isInvalid };

struct DECLSPEC_DRECORD TwclWiFiOnexXAuthParams
{
public:
	bool UpdatePending;
	TwclWiFiOneXConnectionProfile Profile;
	TwclWiFiOneXAuthIdentity AuthIdentity;
	TwclWiFiIsolationState QuarantineState;
	unsigned SessiondId;
	System::UnicodeString Identity;
	System::UnicodeString UserName;
	System::UnicodeString Domain;
};


struct DECLSPEC_DRECORD TwclWiFiEapType
{
public:
	System::Byte EapType;
	unsigned VendorId;
	unsigned VendorType;
};


struct DECLSPEC_DRECORD TwclWiFiEapMethodType
{
public:
	TwclWiFiEapType EapType;
	unsigned AuthorId;
};


struct DECLSPEC_DRECORD TwclWiFiOneXEapError
{
public:
	int Error;
	TwclWiFiEapMethodType MethodType;
	int Reason;
	GUID RootCauseGuid;
	GUID RepairGuid;
	GUID HelpLinkGuid;
	System::UnicodeString RootCauseString;
	System::UnicodeString RepairString;
};


struct DECLSPEC_DRECORD TwclWiFiOneXStatusUpdate
{
public:
	TwclWiFiOneXStatus Status;
	TwclWiFiOneXEapMethodBackendSupport BackendSupport;
	bool BackendEngaged;
	TwclWiFiOnexXAuthParams AuthParams;
	TwclWiFiOneXEapError EapError;
};


typedef void __fastcall (__closure *TwclWiFiAcmAdHocNetworkStateChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiAdHocNetworkState State);

typedef void __fastcall (__closure *TwclWiFiAcmBssTypeChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiBssType BssType);

typedef void __fastcall (__closure *TwclWiFiAcmConnectionEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiAcmConnectionEventData &Data);

typedef void __fastcall (__closure *TwclWiFiAcmPowerSettingChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiPowerSetting Setting);

typedef void __fastcall (__closure *TwclWiFiAcmProfileNameChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const System::UnicodeString OldName, const System::UnicodeString NewName);

typedef void __fastcall (__closure *TwclWiFiAcmScanFailEvent)(System::TObject* Sender, const GUID &IfaceId, const int Reason);

typedef void __fastcall (__closure *TwclWiFiAcmScreenPowerChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const bool SwitchedOn);

typedef void __fastcall (__closure *TwclWiFiHostedNetworkPeerStateChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiHostedNetworkPeerState &OldState, const TwclWiFiHostedNetworkPeerState &NewState, const int Reason);

typedef void __fastcall (__closure *TwclWiFiHostedNetworkRadioStateChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiRadioState SoftwareState, const TwclWiFiRadioState HardwareState);

typedef void __fastcall (__closure *TwclWiFiHostedNetworkStateChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiHostedNetworkState OldState, const TwclWiFiHostedNetworkState NewState, const int Reason);

typedef void __fastcall (__closure *TwclWiFiMsmAdapterOperationModeChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiOperationMode Mode);

typedef void __fastcall (__closure *TwclWiFiMsmConnectionEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);

typedef void __fastcall (__closure *TwclWiFiMsmRadioStateChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiPhyRadioState &State);

typedef void __fastcall (__closure *TwclWiFiMsmSignalQualityChangeEvent)(System::TObject* Sender, const GUID &IfaceId, const unsigned Quality);

typedef void __fastcall (__closure *TwclWiFiOneXAuthRestartedEvent)(System::TObject* Sender, const GUID &IfaceId, const int Reason);

typedef void __fastcall (__closure *TwclWiFiOneXAuthUpdateEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiOneXStatusUpdate &State);

typedef void __fastcall (__closure *TwclWiFiIpChangedEvent)(System::TObject* Sender, const GUID &IfaceId, const TwclWiFiIpSettings &Old, const TwclWiFiIpSettings &New);

typedef void __fastcall (__closure *TwclWiFiEvent)(System::TObject* Sender, const GUID &IfaceId);

class PASCALIMPLEMENTATION TwclWiFiEvents : public TwclCustomWiFiComponent
{
	typedef TwclCustomWiFiComponent inherited;
	
private:
	System::Classes::TList* FIfaces;
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	TwclWiFiAcmAdHocNetworkStateChangeEvent FOnAcmAdHocNetworkStateChange;
	TwclWiFiEvent FOnAcmAutoconfDisabled;
	TwclWiFiEvent FOnAcmAutoconfEnabled;
	TwclWiFiEvent FOnAcmBackgroundScanDisabled;
	TwclWiFiEvent FOnAcmBackgroundScanEnabled;
	TwclWiFiAcmBssTypeChangeEvent FOnAcmBssTypeChange;
	TwclWiFiAcmConnectionEvent FOnAcmConnectionAttemptFail;
	TwclWiFiAcmConnectionEvent FOnAcmConnectionComplete;
	TwclWiFiAcmConnectionEvent FOnAcmConnectionStart;
	TwclWiFiAcmConnectionEvent FOnAcmDisconnected;
	TwclWiFiAcmConnectionEvent FOnAcmDisconnecting;
	TwclWiFiEvent FOnAcmFilterListChange;
	TwclWiFiEvent FOnAcmInterfaceArrival;
	TwclWiFiEvent FOnAcmInterfaceRemoval;
	TwclWiFiEvent FOnAcmNetworkAvailable;
	TwclWiFiEvent FOnAcmNetworkNotAvailable;
	TwclWiFiEvent FOnAcmOperationalStateChange;
	TwclWiFiAcmPowerSettingChangeEvent FOnAcmPowerSettingChange;
	TwclWiFiEvent FOnAcmProfileBlocked;
	TwclWiFiEvent FOnAcmProfileChange;
	TwclWiFiAcmProfileNameChangeEvent FOnAcmProfileNameChange;
	TwclWiFiEvent FOnAcmProfilesExhausted;
	TwclWiFiEvent FOnAcmProfileUnblocked;
	TwclWiFiEvent FOnAcmScanComplete;
	TwclWiFiAcmScanFailEvent FOnAcmScanFail;
	TwclWiFiEvent FOnAcmScanListRefresh;
	TwclWiFiAcmScreenPowerChangeEvent FOnAcmScreenPowerChange;
	TwclWiFiHostedNetworkPeerStateChangeEvent FOnHostedNetworkPeerStateChange;
	TwclWiFiHostedNetworkRadioStateChangeEvent FOnHostedNetworkRadioStateChange;
	TwclWiFiHostedNetworkStateChangeEvent FOnHostedNetworkStateChange;
	TwclWiFiMsmAdapterOperationModeChangeEvent FOnMsmAdapterOperationModeChange;
	TwclWiFiMsmConnectionEvent FOnMsmAdapterRemoval;
	TwclWiFiMsmConnectionEvent FOnMsmAssociated;
	TwclWiFiMsmConnectionEvent FOnMsmAssociating;
	TwclWiFiMsmConnectionEvent FOnMsmAuthenticating;
	TwclWiFiMsmConnectionEvent FOnMsmConnected;
	TwclWiFiMsmConnectionEvent FOnMsmDisassociating;
	TwclWiFiMsmConnectionEvent FOnMsmDisconnected;
	TwclWiFiEvent FOnMsmLinkDegraded;
	TwclWiFiEvent FOnMsmLinkImproved;
	TwclWiFiMsmConnectionEvent FOnMsmPeerJoin;
	TwclWiFiMsmConnectionEvent FOnMsmPeerLeave;
	TwclWiFiMsmRadioStateChangeEvent FOnMsmRadioStateChange;
	TwclWiFiMsmConnectionEvent FOnMsmRoamingEnd;
	TwclWiFiMsmConnectionEvent FOnMsmRoamingStart;
	TwclWiFiMsmSignalQualityChangeEvent FOnMsmSignalQualityChange;
	TwclWiFiOneXAuthRestartedEvent FOnOneXAuthRestarted;
	TwclWiFiOneXAuthUpdateEvent FOnOneXAuthUpdate;
	TwclWiFiIpChangedEvent FOnIpChanged;
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	
protected:
	virtual int __fastcall InternalClose(void);
	virtual int __fastcall InternalOpen(void);
	virtual void __fastcall DoAcmAdHocNetworkStateChange(const GUID &IfaceId, const TwclWiFiAdHocNetworkState State);
	virtual void __fastcall DoAcmAutoconfDisabled(const GUID &IfaceId);
	virtual void __fastcall DoAcmAutoconfEnabled(const GUID &IfaceId);
	virtual void __fastcall DoAcmBackgroundScanDisabled(const GUID &IfaceId);
	virtual void __fastcall DoAcmBackgroundScanEnabled(const GUID &IfaceId);
	virtual void __fastcall DoAcmBssTypeChange(const GUID &IfaceId, const TwclWiFiBssType BssType);
	virtual void __fastcall DoAcmConnectionAttemptFail(const GUID &IfaceId, const TwclWiFiAcmConnectionEventData &Data);
	virtual void __fastcall DoAcmConnectionComplete(const GUID &IfaceId, const TwclWiFiAcmConnectionEventData &Data);
	virtual void __fastcall DoAcmConnectionStart(const GUID &IfaceId, const TwclWiFiAcmConnectionEventData &Data);
	virtual void __fastcall DoAcmDisconnected(const GUID &IfaceId, const TwclWiFiAcmConnectionEventData &Data);
	virtual void __fastcall DoAcmDisconnecting(const GUID &IfaceId, const TwclWiFiAcmConnectionEventData &Data);
	virtual void __fastcall DoAcmFilterListChange(const GUID &IfaceId);
	virtual void __fastcall DoAcmInterfaceArrival(const GUID &IfaceId);
	virtual void __fastcall DoAcmInterfaceRemoval(const GUID &IfaceId);
	virtual void __fastcall DoAcmNetworkAvailable(const GUID &IfaceId);
	virtual void __fastcall DoAcmNetworkNotAvailable(const GUID &IfaceId);
	virtual void __fastcall DoAcmOperationalStateChange(const GUID &IfaceId);
	virtual void __fastcall DoAcmPowerSettingChange(const GUID &IfaceId, const TwclWiFiPowerSetting Setting);
	virtual void __fastcall DoAcmProfileBlocked(const GUID &IfaceId);
	virtual void __fastcall DoAcmProfileChange(const GUID &IfaceId);
	virtual void __fastcall DoAcmProfileNameChange(const GUID &IfaceId, const System::UnicodeString OldName, const System::UnicodeString NewName);
	virtual void __fastcall DoAcmProfilesExhausted(const GUID &IfaceId);
	virtual void __fastcall DoAcmProfileUnblocked(const GUID &IfaceId);
	virtual void __fastcall DoAcmScanComplete(const GUID &IfaceId);
	virtual void __fastcall DoAcmScanFail(const GUID &IfaceId, const int Reason);
	virtual void __fastcall DoAcmScanListRefresh(const GUID &IfaceId);
	virtual void __fastcall DoAcmScreenPowerChange(const GUID &IfaceId, const bool SwitchedOn);
	virtual void __fastcall DoHostedNetworkPeerStateChange(const GUID &IfaceId, const TwclWiFiHostedNetworkPeerState &OldState, const TwclWiFiHostedNetworkPeerState &NewState, const int Reason);
	virtual void __fastcall DoHostedNetworkRadioStateChange(const GUID &IfaceId, const TwclWiFiRadioState SoftwareState, const TwclWiFiRadioState HardwareState);
	virtual void __fastcall DoHostedNetworkStateChange(const GUID &IfaceId, const TwclWiFiHostedNetworkState OldState, const TwclWiFiHostedNetworkState NewState, const int Reason);
	virtual void __fastcall DoMsmAdapterOperationModeChange(const GUID &IfaceId, const TwclWiFiOperationMode Mode);
	virtual void __fastcall DoMsmAdapterRemoval(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmAssociated(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmAssociating(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmAuthenticating(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmConnected(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmDisassociating(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmDisconnected(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmLinkDegraded(const GUID &IfaceId);
	virtual void __fastcall DoMsmLinkImproved(const GUID &IfaceId);
	virtual void __fastcall DoMsmPeerJoin(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmPeerLeave(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmRadioStateChange(const GUID &IfaceId, const TwclWiFiPhyRadioState &State);
	virtual void __fastcall DoMsmRoamingEnd(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmRoamingStart(const GUID &IfaceId, const TwclWiFiMsmConnectionEventData &Data);
	virtual void __fastcall DoMsmSignalQualityChange(const GUID &IfaceId, const unsigned Quality);
	virtual void __fastcall DoOneXAuthRestarted(const GUID &IfaceId, const int Reason);
	virtual void __fastcall DoOneXAuthUpdate(const GUID &IfaceId, const TwclWiFiOneXStatusUpdate &State);
	virtual void __fastcall DoIpChanged(const GUID &IfaceId, const TwclWiFiIpSettings &Old, const TwclWiFiIpSettings &New);
	
public:
	__fastcall virtual TwclWiFiEvents(System::Classes::TComponent* AOwner);
	
__published:
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
	__property TwclWiFiAcmAdHocNetworkStateChangeEvent OnAcmAdHocNetworkStateChange = {read=FOnAcmAdHocNetworkStateChange, write=FOnAcmAdHocNetworkStateChange};
	__property TwclWiFiEvent OnAcmAutoconfDisabled = {read=FOnAcmAutoconfDisabled, write=FOnAcmAutoconfDisabled};
	__property TwclWiFiEvent OnAcmAutoconfEnabled = {read=FOnAcmAutoconfEnabled, write=FOnAcmAutoconfEnabled};
	__property TwclWiFiEvent OnAcmBackgroundScanDisabled = {read=FOnAcmBackgroundScanDisabled, write=FOnAcmBackgroundScanDisabled};
	__property TwclWiFiEvent OnAcmBackgroundScanEnabled = {read=FOnAcmBackgroundScanEnabled, write=FOnAcmBackgroundScanEnabled};
	__property TwclWiFiAcmBssTypeChangeEvent OnAcmBssTypeChange = {read=FOnAcmBssTypeChange, write=FOnAcmBssTypeChange};
	__property TwclWiFiAcmConnectionEvent OnAcmConnectionAttemptFail = {read=FOnAcmConnectionAttemptFail, write=FOnAcmConnectionAttemptFail};
	__property TwclWiFiAcmConnectionEvent OnAcmConnectionComplete = {read=FOnAcmConnectionComplete, write=FOnAcmConnectionComplete};
	__property TwclWiFiAcmConnectionEvent OnAcmConnectionStart = {read=FOnAcmConnectionStart, write=FOnAcmConnectionStart};
	__property TwclWiFiAcmConnectionEvent OnAcmDisconnected = {read=FOnAcmDisconnected, write=FOnAcmDisconnected};
	__property TwclWiFiAcmConnectionEvent OnAcmDisconnecting = {read=FOnAcmDisconnecting, write=FOnAcmDisconnecting};
	__property TwclWiFiEvent OnAcmFilterListChange = {read=FOnAcmFilterListChange, write=FOnAcmFilterListChange};
	__property TwclWiFiEvent OnAcmInterfaceArrival = {read=FOnAcmInterfaceArrival, write=FOnAcmInterfaceArrival};
	__property TwclWiFiEvent OnAcmInterfaceRemoval = {read=FOnAcmInterfaceRemoval, write=FOnAcmInterfaceRemoval};
	__property TwclWiFiEvent OnAcmNetworkAvailable = {read=FOnAcmNetworkAvailable, write=FOnAcmNetworkAvailable};
	__property TwclWiFiEvent OnAcmNetworkNotAvailable = {read=FOnAcmNetworkNotAvailable, write=FOnAcmNetworkNotAvailable};
	__property TwclWiFiEvent OnAcmOperationalStateChange = {read=FOnAcmOperationalStateChange, write=FOnAcmOperationalStateChange};
	__property TwclWiFiAcmPowerSettingChangeEvent OnAcmPowerSettingChange = {read=FOnAcmPowerSettingChange, write=FOnAcmPowerSettingChange};
	__property TwclWiFiEvent OnAcmProfileBlocked = {read=FOnAcmProfileBlocked, write=FOnAcmProfileBlocked};
	__property TwclWiFiEvent OnAcmProfileChange = {read=FOnAcmProfileChange, write=FOnAcmProfileChange};
	__property TwclWiFiAcmProfileNameChangeEvent OnAcmProfileNameChange = {read=FOnAcmProfileNameChange, write=FOnAcmProfileNameChange};
	__property TwclWiFiEvent OnAcmProfilesExhausted = {read=FOnAcmProfilesExhausted, write=FOnAcmProfilesExhausted};
	__property TwclWiFiEvent OnAcmProfileUnblocked = {read=FOnAcmProfileUnblocked, write=FOnAcmProfileUnblocked};
	__property TwclWiFiEvent OnAcmScanComplete = {read=FOnAcmScanComplete, write=FOnAcmScanComplete};
	__property TwclWiFiAcmScanFailEvent OnAcmScanFail = {read=FOnAcmScanFail, write=FOnAcmScanFail};
	__property TwclWiFiEvent OnAcmScanListRefresh = {read=FOnAcmScanListRefresh, write=FOnAcmScanListRefresh};
	__property TwclWiFiAcmScreenPowerChangeEvent OnAcmScreenPowerChange = {read=FOnAcmScreenPowerChange, write=FOnAcmScreenPowerChange};
	__property TwclWiFiHostedNetworkPeerStateChangeEvent OnHostedNetworkPeerStateChange = {read=FOnHostedNetworkPeerStateChange, write=FOnHostedNetworkPeerStateChange};
	__property TwclWiFiHostedNetworkRadioStateChangeEvent OnHostedNetworkRadioStateChange = {read=FOnHostedNetworkRadioStateChange, write=FOnHostedNetworkRadioStateChange};
	__property TwclWiFiHostedNetworkStateChangeEvent OnHostedNetworkStateChange = {read=FOnHostedNetworkStateChange, write=FOnHostedNetworkStateChange};
	__property TwclWiFiMsmAdapterOperationModeChangeEvent OnMsmAdapterOperationModeChange = {read=FOnMsmAdapterOperationModeChange, write=FOnMsmAdapterOperationModeChange};
	__property TwclWiFiMsmConnectionEvent OnMsmAdapterRemoval = {read=FOnMsmAdapterRemoval, write=FOnMsmAdapterRemoval};
	__property TwclWiFiMsmConnectionEvent OnMsmAssociated = {read=FOnMsmAssociated, write=FOnMsmAssociated};
	__property TwclWiFiMsmConnectionEvent OnMsmAssociating = {read=FOnMsmAssociating, write=FOnMsmAssociating};
	__property TwclWiFiMsmConnectionEvent OnMsmAuthenticating = {read=FOnMsmAuthenticating, write=FOnMsmAuthenticating};
	__property TwclWiFiMsmConnectionEvent OnMsmConnected = {read=FOnMsmConnected, write=FOnMsmConnected};
	__property TwclWiFiMsmConnectionEvent OnMsmDisassociating = {read=FOnMsmDisassociating, write=FOnMsmDisassociating};
	__property TwclWiFiMsmConnectionEvent OnMsmDisconnected = {read=FOnMsmDisconnected, write=FOnMsmDisconnected};
	__property TwclWiFiEvent OnMsmLinkDegraded = {read=FOnMsmLinkDegraded, write=FOnMsmLinkDegraded};
	__property TwclWiFiEvent OnMsmLinkImproved = {read=FOnMsmLinkImproved, write=FOnMsmLinkImproved};
	__property TwclWiFiMsmConnectionEvent OnMsmPeerJoin = {read=FOnMsmPeerJoin, write=FOnMsmPeerJoin};
	__property TwclWiFiMsmConnectionEvent OnMsmPeerLeave = {read=FOnMsmPeerLeave, write=FOnMsmPeerLeave};
	__property TwclWiFiMsmRadioStateChangeEvent OnMsmRadioStateChange = {read=FOnMsmRadioStateChange, write=FOnMsmRadioStateChange};
	__property TwclWiFiMsmConnectionEvent OnMsmRoamingEnd = {read=FOnMsmRoamingEnd, write=FOnMsmRoamingEnd};
	__property TwclWiFiMsmConnectionEvent OnMsmRoamingStart = {read=FOnMsmRoamingStart, write=FOnMsmRoamingStart};
	__property TwclWiFiMsmSignalQualityChangeEvent OnMsmSignalQualityChange = {read=FOnMsmSignalQualityChange, write=FOnMsmSignalQualityChange};
	__property TwclWiFiOneXAuthRestartedEvent OnOneXAuthRestarted = {read=FOnOneXAuthRestarted, write=FOnOneXAuthRestarted};
	__property TwclWiFiOneXAuthUpdateEvent OnOneXAuthUpdate = {read=FOnOneXAuthUpdate, write=FOnOneXAuthUpdate};
	__property TwclWiFiIpChangedEvent OnIpChanged = {read=FOnIpChanged, write=FOnIpChanged};
public:
	/* TwclCustomWiFiComponent.Destroy */ inline __fastcall virtual ~TwclWiFiEvents(void) { }
	
};


struct DECLSPEC_DRECORD TwclWiFiInterfaceData
{
public:
	GUID Id;
	System::UnicodeString Description;
	bool Primary;
};


typedef System::DynamicArray<TwclWiFiInterfaceData> TwclWiFiInterfaces;

enum DECLSPEC_DENUM TwclWiFiAvailableNetworkFilter : unsigned int { ffIncludeAllAdhocProfiles, ffIncludeAllManualHiddenProfiles };

typedef System::Set<TwclWiFiAvailableNetworkFilter, TwclWiFiAvailableNetworkFilter::ffIncludeAllAdhocProfiles, TwclWiFiAvailableNetworkFilter::ffIncludeAllManualHiddenProfiles> TwclWiFiAvailableNetworkFilters;

enum DECLSPEC_DENUM TwclWiFiAuthAlgorithm : unsigned int { auOpen, auSharedKey, auWpa, auWpaPsk, auWpaNone, auRsna, auRsnaPsk, auWpa3, auWpa3Sae, auOwe, auWpa3Ent, auUnknown };

enum DECLSPEC_DENUM TwclWiFiCipherAlgorithm : unsigned int { caNone, caWep40, caTkip, caCcmp, caWep104, caBip, caGcmp128, caGcmp256, caCcmp256, caBipGmac128, caBipGmac256, caBipCmac256, caUseGroup, caWep, caUnknown };

enum DECLSPEC_DENUM TwclWiFiAvailableNetworkFlag : unsigned int { nfConnected, nfHasProfile };

typedef System::Set<TwclWiFiAvailableNetworkFlag, TwclWiFiAvailableNetworkFlag::nfConnected, TwclWiFiAvailableNetworkFlag::nfHasProfile> TwclWiFiAvailableNetworkFlags;

struct DECLSPEC_DRECORD TwclWiFiAvailableNetwork
{
public:
	System::UnicodeString ProfileName;
	System::UnicodeString Ssid;
	TwclWiFiBssType BssType;
	unsigned NumberOfBssids;
	bool NetworkConnectable;
	int NotConnectableReason;
	TwclWiFiPhys PhyTypes;
	bool MorePhyTypes;
	unsigned SignalQuality;
	bool SecurityEnabled;
	TwclWiFiAuthAlgorithm DefaultAuthAlgorithm;
	TwclWiFiCipherAlgorithm DefaultCipherAlgorithm;
	TwclWiFiAvailableNetworkFlags Flags;
};


typedef System::DynamicArray<TwclWiFiAvailableNetwork> TwclWiFiAvailableNetworks;

enum DECLSPEC_DENUM TwclWiFiBssCap : unsigned int { bcEss, bcIbss, bcCfPollable, bcCfPollRequest, bcPrivacy };

typedef System::Set<TwclWiFiBssCap, TwclWiFiBssCap::bcEss, TwclWiFiBssCap::bcPrivacy> TwclWiFiBssCaps;

typedef System::DynamicArray<System::Byte> TwclWiFiIeRawData;

struct DECLSPEC_DRECORD TwclWiFiBss
{
	
private:
	typedef System::DynamicArray<System::Word> _TwclWiFiBss__1;
	
	
public:
	System::UnicodeString Ssid;
	unsigned PhyId;
	System::UnicodeString Mac;
	TwclWiFiBssType BssType;
	TwclWiFiPhy PhyType;
	int Rssi;
	unsigned LinkQuality;
	bool InRegDomain;
	System::Word BeaconPeriod;
	unsigned __int64 Timestamp;
	unsigned __int64 HostTimestamp;
	TwclWiFiBssCaps Capability;
	unsigned ChCenterFrequency;
	_TwclWiFiBss__1 Rates;
	TwclWiFiIeRawData IeRaw;
};


typedef System::DynamicArray<TwclWiFiBss> TwclWiFiBssArray;

enum DECLSPEC_DENUM TwclWiFiConnectFlag : unsigned int { cfHiddentNetwork, cfAdHocJoinOnly, cfIgnorePrivacyBit, cfEapolPassThrough, cfPersistDiscoveryProfile, cfPersistDiscoveryProfileConnectionModeAuto, cfPersistDiscoveryProfileOverwriteExisting };

typedef System::Set<TwclWiFiConnectFlag, TwclWiFiConnectFlag::cfHiddentNetwork, TwclWiFiConnectFlag::cfPersistDiscoveryProfileOverwriteExisting> TwclWiFiConnectFlags;

typedef System::DynamicArray<System::Byte> TwclWiFiScanIeData;

typedef System::DynamicArray<System::UnicodeString> TwclWiFiBssList;

enum DECLSPEC_DENUM TwclWiFiInformationElementId : unsigned int { eidSsid, eidSuppRates, eidCfParams = 4, eidTim, eidIbssParams, eidCountry, eidRequest = 10, eidBssLoad, eidEdcaParamSet, eidTspec, eidTclas, eidSchedule, eidChallenge, eidPwrConstraint = 32, eidPwrCapability, eidTpcRequest, eidTpcReport, eidSupportedChannels, eidChannelSwitch, eidMeasureRequest, eidMeasureReport, eidQuiet, eidIbssDfs, eidErpInfo, eidTsDelay, eidTclasProcessing, eidHtCap, eidQos, eidRns = 48, eidExtSuppRates = 50, eidApChannelReport, eidNeightborReport, eidRcpi, eidMobilityDomain, eidFastBssTransition, eidTimeoutInterval, eidRicData, eidDseRegisteredLocation, eidSupportedOperatingClasses, eidExtChanSwitchAnn, eidHtOperation, eidSecondaryChannelOffset, eidBssAverageAccessDelay, 
	eidAntenna, eidRsni, eidMeasurementPilotTransmission, eidBssAvailableAdmCapa, eidBssAcAccessDelay, eidTimeAdvertisement, eidRrmEnabledCapabilities, eidMultipleBssid, eid2040BssCoexistence, eid2040BssIntolerant, eidOverlappingBssScanParams, eidRicDescriptor, eidMmie, eidEventRequest = 78, eidEventReport, eidDiagnosticRequest, eidDiagnosticReport, eidLocationParameters, eidNontransmittedBssidCapa, eidSsidList, eidMultipleBssidIndex, eidFmsDescriptor, eidFmsRequest, eidFmsResponse, eidQosTrafficCapability, eidBssMaxIdlePeriod, eidTfsReq, eidTfsResp, eidWnmSleep, eidTimBroadcastRequest, eidTimBroadcastResponse, eidCollocatedInterferenceReport, eidChannelUsage, eidTimeZone, eidDmsRequest, eidDmsResponse, eidLinkId, eidWakeupSchedule, eidChannelSwitchTiming = 104, 
	eidPtiControl, eidTpuBufferStatus, eidInterworking, eidAdvProto, eidExpeditedBandwidthReq, eidQosMapSet, eidRoamingConsortium, eidEmergencyAlertId, eidMeshConfig, eidMeshId, eidMeshLinkMetricReport, eidCongestionNotification, eidPeerMgmt, eidMeshChannelSwitchParameters, eidMeshAwakeWindow, eidBeaconTiming, eidMccaopSetupRequest, eidMccaopSetupReplay, eidMccaopAdvertisement, eidMccaopTeardown, eidGann, eidRann, eidExtCapab, eidPreq = 130, eidPrep, eidPerr, eidPxu = 137, eidPxuc, eidAmpe, eidMic, eidDestinationUri, eidUApsdCoex, eidDmgWakeupSchedule, eidExtendedSchedule, eidStaAvailability, eidDmgTspec, eidNextDmgAti, eidDmgCapabilities, eidDmgOperation = 151, eidDmgBssParameterChange, eidDmgBeamRefinement, eidChannelMeasurementFeedback, eidAwakeWindow = 157, 
	eidMultiBand, eidAddbaExtension, eidNextPcpList, eidPcpHandover, eidDmgLinkMargin, eidSwitchingStream, eidSessionTransition, eidDynamicTonePairingReport, eidClusterReport, eidRelayCapabilities, eidRelayTransferParamSet, eidBeamLinkMaintenance, eidMultipleMacSublayers, eidUPid, eidDmgLinkAdaptationAck, eidMccaopAdvertisementOverview = 174, eidQuietPeriodRequest, eidQuietPeriodResponse = 177, eidQmfPolicy = 181, eidEcapcPolicy, eidClusterTimeOffset, eidIntraAccessCategoryPriority, eidScsDescriptor, eidQLoadReport, eidHccaTxopUpdateCount, eidHigherLayerStreamId, eidGcrGroupAddress, eidAntennaSectorIdPattern, eidVhtCap, eidVhtOperation, eidExtendedBssLoad, eidWideBwChSwitch, eidTransmitPowerEnvelop, eidChannelSwitchWrapper, eidAid, eidQuietChannel, 
	eidOperatingModeNotification, eidUpsim, eidReducedNeightborReport, eidTvhtOperation, eidDeviceLocation = 204, eidWhiteSpaceMap, eidFtmParameters, eidVendorSpecific = 221, eidExtension = 255 };

struct DECLSPEC_DRECORD TwclWiFiInformationElement
{
public:
	TwclWiFiInformationElementId Id;
	TwclWiFiIeRawData Data;
};


typedef System::DynamicArray<TwclWiFiInformationElement> TwclWiFiInformationElements;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiFiInformationElementParser : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	void __fastcall AddElement(const TwclWiFiInformationElement &Element, TwclWiFiInformationElements &Elements);
	
public:
	int __fastcall ExtractInformationElements(const TwclWiFiBss &Bss, /* out */ TwclWiFiInformationElements &Elements)/* overload */;
	int __fastcall ExtractInformationElements(const TwclWiFiIeRawData Raw, /* out */ TwclWiFiInformationElements &Elements)/* overload */;
	int __fastcall ExtractInformationElements(const TwclWiFiInformationElementId Id, const TwclWiFiBss &Bss, /* out */ TwclWiFiInformationElements &Elements)/* overload */;
	int __fastcall ExtractInformationElements(const TwclWiFiInformationElementId Id, const TwclWiFiIeRawData Raw, /* out */ TwclWiFiInformationElements &Elements)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TwclWiFiInformationElementParser(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiFiInformationElementParser(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclWiFiClient : public TwclCustomWiFiComponent
{
	typedef TwclCustomWiFiComponent inherited;
	
private:
	int __fastcall AcmGetProperty(const Wclwlan::WLAN_AUTOCONF_OPCODE PropId, /* out */ void * &Data);
	int __fastcall AcmSetProperty(const Wclwlan::WLAN_AUTOCONF_OPCODE PropId, const unsigned DataSize, const void * Data);
	
protected:
	virtual int __fastcall InternalClose(void);
	virtual int __fastcall InternalOpen(void);
	
public:
	int __fastcall EnumInterfaces(/* out */ TwclWiFiInterfaces &Ifaces);
	int __fastcall EnumAvailableNetworks(const GUID &IfaceId, const TwclWiFiAvailableNetworkFilters Filters, /* out */ TwclWiFiAvailableNetworks &Networks);
	int __fastcall EnumBss(const GUID &IfaceId, const System::UnicodeString Ssid, const TwclWiFiBssType BssType, const bool SecurityEnabled, /* out */ TwclWiFiBssArray &BssList);
	int __fastcall Scan(const GUID &IfaceId)/* overload */;
	int __fastcall Scan(const GUID &IfaceId, const System::UnicodeString Ssid)/* overload */;
	int __fastcall Scan(const GUID &IfaceId, const TwclWiFiScanIeData Ie)/* overload */;
	int __fastcall Scan(const GUID &IfaceId, const System::UnicodeString Ssid, const TwclWiFiScanIeData Ie)/* overload */;
	int __fastcall Connect(const GUID &IfaceId, const TwclWiFiConnectionMode Mode, const System::UnicodeString Profile, const System::UnicodeString Ssid, const TwclWiFiBssType BssType, const TwclWiFiConnectFlags Flags, const TwclWiFiBssList BssList)/* overload */;
	int __fastcall Connect(const GUID &IfaceId, const TwclWiFiConnectionMode Mode, const System::UnicodeString Profile, const System::UnicodeString Ssid, const TwclWiFiBssType BssType, const TwclWiFiConnectFlags Flags, const System::UnicodeString Bss)/* overload */;
	int __fastcall Connect(const GUID &IfaceId, const TwclWiFiConnectionMode Mode, const System::UnicodeString Profile, const System::UnicodeString Ssid, const TwclWiFiBssType BssType, const TwclWiFiConnectFlags Flags)/* overload */;
	int __fastcall Disconnect(const GUID &IfaceId);
	int __fastcall AcmGetShowDeniedNetworks(/* out */ bool &Show);
	int __fastcall AcmGetPowerSetting(/* out */ TwclWiFiPowerSetting &Setting);
	int __fastcall AcmGetOnlyUseGpProfiles(/* out */ bool &Enabled);
	int __fastcall AcmGetAllowExplicitCreds(/* out */ bool &Allow);
	int __fastcall AcmGetBlockPeriod(/* out */ unsigned &Period);
	int __fastcall AcmGetVirtualStationExtensibility(/* out */ bool &Allowed);
	int __fastcall AcmSetShowDeniedNetworks(const bool Show);
	int __fastcall AcmSetAllowExplicitCreds(const bool Allow);
	int __fastcall AcmSetBlockPeriod(const unsigned Period);
	int __fastcall AcmSetVirtualStationExtensibility(const bool Allowed);
public:
	/* TwclCustomWiFiComponent.Create */ inline __fastcall virtual TwclWiFiClient(System::Classes::TComponent* AOwner) : TwclCustomWiFiComponent(AOwner) { }
	/* TwclCustomWiFiComponent.Destroy */ inline __fastcall virtual ~TwclWiFiClient(void) { }
	
};


struct DECLSPEC_DRECORD TwclWiFiAuthCipherPair
{
public:
	TwclWiFiAuthAlgorithm AuthAlgorithm;
	TwclWiFiCipherAlgorithm CipherAlgorithm;
};


typedef System::DynamicArray<TwclWiFiAuthCipherPair> TwclWiFiAuthCipherPairs;

enum DECLSPEC_DENUM TwclWiFiInterfaceType : unsigned int { itEmulated, itNative, itInvalid };

struct DECLSPEC_DRECORD TwclWiFiInterfaceCapability
{
public:
	TwclWiFiInterfaceType IfaceType;
	bool Dot11dSupport;
	unsigned MaxDesiredSsidListSize;
	unsigned MaxDesiredBssidListSize;
	TwclWiFiPhys SupportedPhys;
};


enum DECLSPEC_DENUM TwclWiFiInterfaceState : unsigned int { isNotReady, isConnected, isAdHocFormed, isDisconnecting, isDisconnected, isAssociating, isDiscovering, isAuthenticating };

struct DECLSPEC_DRECORD TwclWiFiAssociationAttributes
{
public:
	System::UnicodeString Ssid;
	TwclWiFiBssType BssType;
	System::UnicodeString BssId;
	TwclWiFiPhy Phy;
	unsigned SignalQuality;
	unsigned RxRate;
	unsigned TxRate;
};


struct DECLSPEC_DRECORD TwclWiFiSecurityAttributes
{
public:
	bool SecurityEnabled;
	bool OneXEnabled;
	TwclWiFiAuthCipherPair AuthCiperPair;
};


struct DECLSPEC_DRECORD TwclWiFiConnectionAttributes
{
public:
	TwclWiFiInterfaceState State;
	TwclWiFiConnectionMode Mode;
	System::UnicodeString ProfileName;
	TwclWiFiAssociationAttributes Association;
	TwclWiFiSecurityAttributes Security;
};


typedef System::DynamicArray<System::UnicodeString> TwclWiFiCountryOrRegions;

enum DECLSPEC_DENUM TwclWiFiBand : unsigned int { wb24GHz, wb365GHz, wb5GHz, wb6GHz, wb60GHz, wbUnknown };

struct DECLSPEC_DRECORD TwclWiFiInterfaceParameter
{
public:
	System::UnicodeString Name;
	System::UnicodeString DisplayName;
	System::UnicodeString Default;
};


typedef System::DynamicArray<TwclWiFiInterfaceParameter> TwclWiFiInterfaceParameters;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiFiInterface : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	NativeUInt FHandle;
	GUID FId;
	HKEY FKey;
	System::UnicodeString FKeyPath;
	bool __fastcall GetActive(void);
	int __fastcall GetProperty(const unsigned PropId, /* out */ void * &Data);
	int __fastcall SetProperty(const unsigned PropId, const unsigned DataSize, const void * Data);
	int __fastcall SwitchState(const bool TurnOn);
	void __fastcall OpenKey(void);
	int __fastcall RestartInterface(void);
	
public:
	__fastcall virtual TwclWiFiInterface(const GUID &Id);
	__fastcall virtual ~TwclWiFiInterface(void);
	int __fastcall Close(void);
	int __fastcall Open(void);
	int __fastcall GetAuthCipherPairs(const bool AdHoc, /* out */ TwclWiFiAuthCipherPairs &Pairs);
	int __fastcall GetAutoConfState(/* out */ bool &Enabled);
	int __fastcall GetBackgroundScanState(/* out */ bool &Enabled);
	int __fastcall GetBssType(/* out */ TwclWiFiBssType &BssType);
	int __fastcall GetCapability(/* out */ TwclWiFiInterfaceCapability &Capability);
	int __fastcall GetCertifiedSafeMode(/* out */ bool &Supported);
	int __fastcall GetChannel(/* out */ unsigned &Channel);
	int __fastcall GetConnectionAttributes(/* out */ TwclWiFiConnectionAttributes &Attributes);
	int __fastcall GetCountryOrRegions(/* out */ TwclWiFiCountryOrRegions &List);
	int __fastcall GetHostedNetworkCapable(/* out */ bool &Supported);
	int __fastcall GetManagementFrameProtectionCapable(/* out */ bool &Supported);
	int __fastcall GetMediaStreaming(/* out */ bool &Enabled);
	int __fastcall GetOperationMode(/* out */ TwclWiFiOperationMode &Mode);
	int __fastcall GetRadioState(/* out */ TwclWiFiPhyRadioStates &States);
	int __fastcall GetRssi(/* out */ int &Rssi);
	int __fastcall GetSafeMode(/* out */ bool &Supported);
	int __fastcall GetSecondarySta(/* out */ bool &Enabled);
	int __fastcall GetState(/* out */ TwclWiFiInterfaceState &State);
	int __fastcall SetAutoConfState(const bool Enable);
	int __fastcall SetBackgroundScanState(const bool Enable);
	int __fastcall SetBssType(const TwclWiFiBssType BssType);
	int __fastcall SetMediaStreaming(const bool Enable);
	int __fastcall SetOperationMode(const TwclWiFiOperationMode Mode);
	int __fastcall SetRadioState(const TwclWiFiPhyRadioState &State);
	int __fastcall SetSecondarySta(const bool Enable);
	int __fastcall GetCurrentIp(/* out */ bool &Static, /* out */ System::UnicodeString &Address, /* out */ System::UnicodeString &Mask, /* out */ System::UnicodeString &Gateway, /* out */ System::UnicodeString &Dns1, /* out */ System::UnicodeString &Dns2);
	int __fastcall GetIpSettings(/* out */ bool &Static, /* out */ System::UnicodeString &Address, /* out */ System::UnicodeString &Mask, /* out */ System::UnicodeString &Gateway, /* out */ System::UnicodeString &Dns1, /* out */ System::UnicodeString &Dns2);
	int __fastcall SetStaticIp(const System::UnicodeString Address, const System::UnicodeString Mask, const System::UnicodeString Gateway, const System::UnicodeString Dns1, const System::UnicodeString Dns2);
	int __fastcall EnableDhcp(void);
	int __fastcall TurnOff(void);
	int __fastcall TurnOn(void);
	int __fastcall EnumInterfaces(/* out */ TwclWiFiInterfaces &Ifaces);
	int __fastcall EnumParams(/* out */ TwclWiFiInterfaceParameters &Params);
	int __fastcall GetParamValue(const System::UnicodeString Name, /* out */ System::UnicodeString &Value);
	int __fastcall GetParamValues(const System::UnicodeString Name, System::Classes::TStringList* const Values);
	int __fastcall SetParamValue(const System::UnicodeString Name, const System::UnicodeString Value);
	__classmethod TwclWiFiBand __fastcall FrequencyToBand(const unsigned Frequency);
	__classmethod System::Byte __fastcall FrequencyToChannel(const unsigned Frequency);
	__property bool Active = {read=GetActive, nodefault};
	__property GUID Id = {read=FId};
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TwclWiFiHostedNetworkStatus
{
public:
	TwclWiFiHostedNetworkState State;
	GUID Id;
	System::UnicodeString BssId;
	TwclWiFiPhy Phy;
	unsigned ChannelFrequency;
	TwclWiFiHostedNetworkPeerStates Peers;
};


struct DECLSPEC_DRECORD TwclWiFiHostedNetworkConnectionSettings
{
public:
	System::UnicodeString Ssid;
	unsigned MaxNumberOfPeers;
};


class PASCALIMPLEMENTATION TwclWiFiHostedNetwork : public TwclCustomWiFiMemoryComponent
{
	typedef TwclCustomWiFiMemoryComponent inherited;
	
private:
	TwclWiFiScanIeData FData;
	System::UnicodeString FFormat;
	int __fastcall GetProperty(const Wclwlan::WLAN_HOSTED_NETWORK_OPCODE OpCode, /* out */ void * &Data);
	int __fastcall SetProperty(const Wclwlan::WLAN_HOSTED_NETWORK_OPCODE OpCode, const unsigned Size, const void * Data);
	int __fastcall AddPsdIe(void);
	int __fastcall GetStateOpened(/* out */ bool &Enabled);
	int __fastcall GetStateClosed(/* out */ bool &Enabled);
	int __fastcall SetStateOpened(const bool Enabled);
	int __fastcall SetStateClosed(const bool Enabled);
	
protected:
	virtual int __fastcall InternalClose(void);
	virtual int __fastcall InternalOpen(void);
	
public:
	__fastcall virtual TwclWiFiHostedNetwork(System::Classes::TComponent* AOwner);
	int __fastcall GetConnectionSettings(/* out */ TwclWiFiHostedNetworkConnectionSettings &Settings);
	int __fastcall GetKey(/* out */ unsigned &KeyLength, /* out */ void * &KeyData, /* out */ bool &IsPassPhrase, /* out */ bool &Persistent);
	int __fastcall GetLocalIp(/* out */ System::UnicodeString &Address);
	int __fastcall GetConnectedPeers(/* out */ TwclWiFiHostedNetworkConnectedPeers &Peers);
	int __fastcall GetProfile(/* out */ System::UnicodeString &ProfileXml);
	int __fastcall GetRemoteIp(const System::UnicodeString Mac, /* out */ System::UnicodeString &Address);
	int __fastcall GetSecuritySettings(/* out */ TwclWiFiAuthCipherPair &Settings);
	int __fastcall GetStatus(/* out */ TwclWiFiHostedNetworkStatus &Status);
	int __fastcall GetState(/* out */ bool &Enabled);
	int __fastcall SetConnectionSettings(const TwclWiFiHostedNetworkConnectionSettings &Settings);
	int __fastcall SetKey(const unsigned KeyLength, const void * KeyData, const bool IsPassPhrase, const bool Persistent);
	int __fastcall SetState(const bool Enabled);
	int __fastcall RefreshSecuritySettings(void);
	int __fastcall Restart(void);
	int __fastcall SetPsdIe(const System::UnicodeString Format, const TwclWiFiScanIeData Data);
	__property TwclWiFiScanIeData Data = {read=FData};
	__property System::UnicodeString Format = {read=FFormat};
public:
	/* TwclCustomWiFiComponent.Destroy */ inline __fastcall virtual ~TwclWiFiHostedNetwork(void) { }
	
};


enum DECLSPEC_DENUM TwclWiFiProfileFlag : unsigned int { pfGroupPolicy, pfUser, pfGetPlaintextKey };

typedef System::Set<TwclWiFiProfileFlag, TwclWiFiProfileFlag::pfGroupPolicy, TwclWiFiProfileFlag::pfGetPlaintextKey> TwclWiFiProfileFlags;

struct DECLSPEC_DRECORD TwclWiFiProfileData
{
public:
	System::UnicodeString Name;
	TwclWiFiProfileFlags Flags;
};


typedef System::DynamicArray<TwclWiFiProfileData> TwclWiFiProfiles;

enum DECLSPEC_DENUM TwclWiFiTemporaryProfileFlag : unsigned int { tpfUser, tpfConnectionModeSetByClient, tpfConnectionModeAuto };

typedef System::Set<TwclWiFiTemporaryProfileFlag, TwclWiFiTemporaryProfileFlag::tpfUser, TwclWiFiTemporaryProfileFlag::tpfConnectionModeAuto> TwclWiFiTemporaryProfileFlags;

enum DECLSPEC_DENUM TwclWiFiProfileEditPage : unsigned int { epConnection, epSecurity, epAdvanced };

class PASCALIMPLEMENTATION TwclWiFiProfilesManager : public TwclCustomWiFiMemoryComponent
{
	typedef TwclCustomWiFiMemoryComponent inherited;
	
protected:
	virtual int __fastcall InternalClose(void);
	virtual int __fastcall InternalOpen(void);
	
public:
	int __fastcall GetProfile(const GUID &IfaceId, const System::UnicodeString ProfileName, TwclWiFiProfileFlags &Flags, /* out */ System::UnicodeString &ProfileXml);
	int __fastcall GetProfileList(const GUID &IfaceId, /* out */ TwclWiFiProfiles &Profiles);
	int __fastcall DeleteProfile(const GUID &IfaceId, const System::UnicodeString ProfileName);
	int __fastcall RenameProfile(const GUID &IfaceId, const System::UnicodeString OldName, const System::UnicodeString NewName);
	int __fastcall SaveTemporaryProfile(const GUID &IfaceId, const System::UnicodeString ProfileName, const bool OverWrite, const TwclWiFiTemporaryProfileFlags Flags);
	int __fastcall SetPosition(const GUID &IfaceId, const System::UnicodeString ProfileName, const unsigned Position);
	int __fastcall SetProfile(const GUID &IfaceId, const TwclWiFiProfileFlags Flags, const System::UnicodeString ProfileXml, const bool Overwrite);
	int __fastcall SetProfileList(const GUID &IfaceId, System::UnicodeString const *Names, const int Names_High);
	int __fastcall GetProfileUserData(const GUID &IfaceId, const System::UnicodeString ProfileName, /* out */ unsigned &DataSize, /* out */ System::PByte &Data);
	int __fastcall SetProfileUserData(const GUID &IfaceId, const System::UnicodeString ProfileName, const unsigned DataSize, const System::PByte Data);
	int __fastcall SetProfileEapXmlUserData(const GUID &IfaceId, const System::UnicodeString ProfileName, const bool AllUsers, const System::UnicodeString UserData);
	int __fastcall SetProfileEapUserData(const GUID &IfaceId, const System::UnicodeString ProfileName, const bool AllUsers, const TwclWiFiEapMethodType &EapMethod, const System::PByte Data, const unsigned Size);
	int __fastcall ShowUIEdit(const GUID &IfaceId, const System::UnicodeString ProfileName, const TwclWiFiProfileEditPage Page = (TwclWiFiProfileEditPage)(0x0));
	System::UnicodeString __fastcall SsidToHex(const System::UnicodeString Ssid);
public:
	/* TwclCustomWiFiComponent.Create */ inline __fastcall virtual TwclWiFiProfilesManager(System::Classes::TComponent* AOwner) : TwclCustomWiFiMemoryComponent(AOwner) { }
	/* TwclCustomWiFiComponent.Destroy */ inline __fastcall virtual ~TwclWiFiProfilesManager(void) { }
	
};


enum DECLSPEC_DENUM TwclWiFiSnifferPhy : unsigned int { ph802_11a, ph802_11b, ph802_11g, ph802_11n, phUndefined };

struct DECLSPEC_DRECORD TwclWiFiSnifferFrameMetaData
{
public:
	System::Byte Version;
	TwclWiFiOperationMode Mode;
	unsigned Flags;
	TwclWiFiSnifferPhy Phy;
	System::Byte Channel;
	System::Word Freq;
	int Rssi;
	double Rate;
	System::TDateTime Timestamp;
};


typedef void __fastcall (__closure *TwclWiFiSnifferFrameReceived)(System::TObject* Sender, const TwclWiFiSnifferFrameMetaData &Meta, const void * Buffer, const unsigned Size);

typedef void __fastcall (__closure *TwclWiFiSnifferRawFrameReceived)(System::TObject* Sender, const void * Buffer, const unsigned Size);

class PASCALIMPLEMENTATION TwclWiFiSniffer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString FDeviceName;
	bool FDoNotChangeMode;
	NativeUInt FEngine;
	TwclWiFiInterface* FIface;
	unsigned FIndex;
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	TwclWiFiOperationMode FMode;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	System::Classes::TNotifyEvent FAfterOpen;
	System::Classes::TNotifyEvent FBeforeClose;
	TwclWiFiSnifferFrameReceived FOnFrameReceived;
	TwclWiFiSnifferRawFrameReceived FOnRawFrameReceived;
	bool __fastcall GetActive(void);
	GUID __fastcall GetIfaceId(void);
	TwclWiFiOperationMode __fastcall GetMode(void);
	void __fastcall SetDoNotChangeMode(const bool Value);
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	int __fastcall SetupInterface(const GUID &Id);
	void __fastcall DestroyInterface(void);
	int __fastcall StartCapture(void);
	void __fastcall StopCapture(void);
	void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	System::Word __fastcall ConvertChannelToFreq(const unsigned Phy, const unsigned Channel);
	TwclWiFiOperationMode __fastcall ConvertOperationMode(const unsigned Mode);
	TwclWiFiSnifferPhy __fastcall ConvertPhy(const unsigned Phy);
	void __fastcall ParseFrame(const void * Buffer, const unsigned Size);
	
protected:
	virtual void __fastcall DoAfterOpen(void);
	virtual void __fastcall DoBeforeClose(void);
	virtual void __fastcall DoFrameReceived(const TwclWiFiSnifferFrameMetaData &Meta, const void * Buffer, const unsigned Size);
	virtual void __fastcall DoRawFrameReceived(const void * Buffer, const unsigned Size);
	
public:
	__fastcall virtual TwclWiFiSniffer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclWiFiSniffer(void);
	int __fastcall Close(void);
	int __fastcall Open(const GUID &Id);
	int __fastcall GetChannel(/* out */ unsigned &Channel);
	int __fastcall GetMacAddr(/* out */ __int64 &Address);
	int __fastcall GetPhy(/* out */ TwclWiFiSnifferPhy &Phy);
	int __fastcall SetChannel(const unsigned Channel);
	int __fastcall SetPhy(const TwclWiFiSnifferPhy Phy);
	__property bool Active = {read=GetActive, nodefault};
	__property GUID IfaceId = {read=GetIfaceId};
	__property TwclWiFiOperationMode Mode = {read=GetMode, nodefault};
	
__published:
	__property bool DoNotChangeMode = {read=FDoNotChangeMode, write=SetDoNotChangeMode, default=0};
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
	__property System::Classes::TNotifyEvent AfterOpen = {read=FAfterOpen, write=FAfterOpen};
	__property System::Classes::TNotifyEvent BeforeClose = {read=FBeforeClose, write=FBeforeClose};
	__property TwclWiFiSnifferFrameReceived OnFrameReceived = {read=FOnFrameReceived, write=FOnFrameReceived};
	__property TwclWiFiSnifferRawFrameReceived OnRawFrameReceived = {read=FOnRawFrameReceived, write=FOnRawFrameReceived};
};


enum DECLSPEC_DENUM TwclWiFiDirectConfigurationMethod : unsigned int { cmDisplayPin, cmProvidePin, cmPushButton };

typedef System::Set<TwclWiFiDirectConfigurationMethod, TwclWiFiDirectConfigurationMethod::cmDisplayPin, TwclWiFiDirectConfigurationMethod::cmPushButton> TwclWiFiDirectConfigurationMethods;

enum DECLSPEC_DENUM TwclWiFiDirectAdvertisementDiscoverability : unsigned int { adIntensive, adNone, adNormal };

enum DECLSPEC_DENUM TwclWiFiDirectPairingProcedure : unsigned int { ppGroupOwnerNegotiation, ppInvitation };

enum DECLSPEC_DENUM TwclWiFiDirectDeviceState : unsigned int { dsDisconnected, dsConnecting, dsConnected, dsDisconnecting };

class PASCALIMPLEMENTATION TwclWiFiDirectDevice : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FId;
	bool FLegacy;
	System::UnicodeString FLocalAddress;
	System::UnicodeString FName;
	System::UnicodeString FRemoteAddress;
	TwclWiFiDirectDeviceState FState;
	System::UnicodeString FSystemDeviceId;
	int FReceiverId;
	int FRefCount;
	Wclwlan::_di_IWiFiDirectDevice FDevice;
	Wclwinapi::EventRegistrationToken FDeviceEvent;
	Wclsync::TwclCriticalSection* FCS;
	Wclsync::TwclManualResetEvent* FTerminationEvent;
	Wclsync::TwclThread* FThread;
	System::UnicodeString __fastcall GetAddress(const bool Local);
	void __fastcall GetDeviceName(const Wclwinapi::_di_IDeviceInformation Info);
	void __fastcall AddOrderedMethods(const Wclwlan::_di_IWiFiDirectConnectionParameters2 Params, System::TObject* const UserParams);
	int __fastcall CreatePairingInterfaces(const Wclwinapi::_di_IDeviceInformation Info, /* out */ Wclwinapi::_di_IDeviceInformationPairing &Pairing, /* out */ Wclwinapi::_di_IDeviceInformationPairing2 &Pairing2);
	Wclwinapi::DevicePairingKinds __fastcall EncodePairingMethods(System::TObject* const UserParams);
	void __fastcall NotifyPairCompleted(const Wclwinapi::DevicePairingResultStatus Status);
	int __fastcall Pair(const Wclwinapi::_di_IDeviceInformation Info, /* out */ bool &JustPaired);
	int __fastcall SetPairingProcedure(const Wclwlan::_di_IWiFiDirectConnectionParameters2 Params, System::TObject* const UserParams);
	int __fastcall SetupPairingParams(/* out */ Wclwinapi::DevicePairingKinds &Kind, /* out */ Wclwlan::_di_IWiFiDirectConnectionParameters &Params);
	void __fastcall Unpair(const Wclwinapi::_di_IDeviceInformation Info);
	int __fastcall WaitPairing(const Wclwinapi::_di_IDevicePairingResultAsyncOperation AsyncOper, /* out */ Wclwinapi::DevicePairingResultStatus &Status, /* out */ bool &JustPaired);
	int __fastcall CreateDevice(const Wclwinapi::_di_IDeviceInformation Info);
	void __fastcall DestroyDevice(void);
	int __fastcall InternalConnect(const Wclwinapi::_di_IDeviceInformation Info)/* overload */;
	int __fastcall InternalConnect(void)/* overload */;
	void __fastcall InternalDisconnect(void);
	void __fastcall SendConnectedMessage(const int Res);
	int __fastcall CreateTerminationEvent(void);
	void __fastcall ThreadProc(void);
	bool __fastcall Accept(const Wclwinapi::_di_IDeviceInformation Info);
	int __fastcall Connect(const Wclwinapi::_di_IDeviceInformation Info)/* overload */;
	int __fastcall Connect(const System::UnicodeString Id)/* overload */;
	void __fastcall AddRef(void);
	void __fastcall Release(void);
	
public:
	__fastcall virtual TwclWiFiDirectDevice(const int ReceiverId, const bool Legacy);
	__fastcall virtual ~TwclWiFiDirectDevice(void);
	int __fastcall Disconnect(void);
	__property System::UnicodeString Id = {read=FId};
	__property bool Legacy = {read=FLegacy, nodefault};
	__property System::UnicodeString LocalAddress = {read=FLocalAddress};
	__property System::UnicodeString Name = {read=FName};
	__property System::UnicodeString RemoteAddress = {read=FRemoteAddress};
	__property TwclWiFiDirectDeviceState State = {read=FState, nodefault};
	__property System::UnicodeString SystemDeviceId = {read=FSystemDeviceId};
};


class PASCALIMPLEMENTATION TwclCustomWiFiDirectComponent : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	NativeUInt FHandle;
	bool FHardwareAvailable;
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	
protected:
	virtual void __fastcall HardwareRemoved(void) = 0 ;
	int __fastcall InitWlan(void);
	void __fastcall UninitWlan(void);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	__property bool HardwareAvailable = {read=FHardwareAvailable, nodefault};
	__property Wclmessaging::TwclMessageReceiver* Receiver = {read=FReceiver};
	
public:
	__fastcall virtual TwclCustomWiFiDirectComponent(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclCustomWiFiDirectComponent(void);
	
__published:
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
};


typedef void __fastcall (__closure *TwclWiFiDirectAcceptDeviceEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, /* out */ bool &Accept);

typedef void __fastcall (__closure *TwclWiFiDirectConnectedEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, const int Error);

typedef void __fastcall (__closure *TwclWiFiDirectDisconnectedEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, const int Reason);

typedef void __fastcall (__closure *TwclWiFiDirectPairCompletedEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, const int Result);

typedef void __fastcall (__closure *TwclWiFiDirectPairConfirmEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, /* out */ bool &Confirm);

typedef void __fastcall (__closure *TwclWiFiDirectPairDisplayPinEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, const System::UnicodeString Pin);

typedef void __fastcall (__closure *TwclWiFiDirectPairGetParamsEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, /* out */ short &GroupOwnerIntent, /* out */ TwclWiFiDirectConfigurationMethods &ConfigurationMethods, /* out */ TwclWiFiDirectPairingProcedure &PairingProcedure);

typedef void __fastcall (__closure *TwclWiFiDirectPairProvidePinEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, /* out */ System::UnicodeString &Pin);

class PASCALIMPLEMENTATION TwclWiFiDirectConnectionComponent : public TwclCustomWiFiDirectComponent
{
	typedef TwclCustomWiFiDirectComponent inherited;
	
private:
	TwclWiFiDirectConnectedEvent FOnDeviceConnected;
	TwclWiFiDirectDisconnectedEvent FOnDeviceDisconnected;
	TwclWiFiDirectPairCompletedEvent FOnPairCompleted;
	TwclWiFiDirectPairConfirmEvent FOnPairConfirm;
	TwclWiFiDirectPairDisplayPinEvent FOnPairDisplayPin;
	TwclWiFiDirectPairGetParamsEvent FOnPairGetParams;
	TwclWiFiDirectPairProvidePinEvent FOnPairProvidePin;
	
protected:
	virtual TwclWiFiDirectDevice* __fastcall FindDevice(const System::UnicodeString Id) = 0 ;
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoDeviceConnected(TwclWiFiDirectDevice* const Device, const int Error);
	virtual void __fastcall DoDeviceDisconnected(TwclWiFiDirectDevice* const Device, const int Reason);
	virtual void __fastcall DoPairCompleted(TwclWiFiDirectDevice* const Device, const int Result);
	virtual void __fastcall DoPairConfirm(TwclWiFiDirectDevice* const Device, /* out */ bool &Confirm);
	virtual void __fastcall DoPairDisplayPin(TwclWiFiDirectDevice* const Device, const System::UnicodeString Pin);
	virtual void __fastcall DoPairGetParams(TwclWiFiDirectDevice* const Device, /* out */ short &GroupOwnerIntent, /* out */ TwclWiFiDirectConfigurationMethods &ConfigurationMethods, /* out */ TwclWiFiDirectPairingProcedure &PairingProcedure);
	virtual void __fastcall DoPairProvidePin(TwclWiFiDirectDevice* const Device, /* out */ System::UnicodeString &Pin);
	
public:
	__fastcall virtual TwclWiFiDirectConnectionComponent(System::Classes::TComponent* AOwner);
	
__published:
	__property TwclWiFiDirectConnectedEvent OnDeviceConnected = {read=FOnDeviceConnected, write=FOnDeviceConnected};
	__property TwclWiFiDirectDisconnectedEvent OnDeviceDisconnected = {read=FOnDeviceDisconnected, write=FOnDeviceDisconnected};
	__property TwclWiFiDirectPairCompletedEvent OnPairCompleted = {read=FOnPairCompleted, write=FOnPairCompleted};
	__property TwclWiFiDirectPairConfirmEvent OnPairConfirm = {read=FOnPairConfirm, write=FOnPairConfirm};
	__property TwclWiFiDirectPairDisplayPinEvent OnPairDisplayPin = {read=FOnPairDisplayPin, write=FOnPairDisplayPin};
	__property TwclWiFiDirectPairGetParamsEvent OnPairGetParams = {read=FOnPairGetParams, write=FOnPairGetParams};
	__property TwclWiFiDirectPairProvidePinEvent OnPairProvidePin = {read=FOnPairProvidePin, write=FOnPairProvidePin};
public:
	/* TwclCustomWiFiDirectComponent.Destroy */ inline __fastcall virtual ~TwclWiFiDirectConnectionComponent(void) { }
	
};


class PASCALIMPLEMENTATION TwclWiFiDirectAdvertiser : public TwclWiFiDirectConnectionComponent
{
	typedef TwclWiFiDirectConnectionComponent inherited;
	
public:
	TwclWiFiDirectDevice* operator[](const int Index) { return Devices[Index]; }
	
private:
	System::Classes::TList* FDevices;
	Wclsync::TwclMutex* FMutex;
	Wclsync::TwclAutoResetEvent* FStatusEvent;
	Wclwinapi::EventRegistrationToken FEventToken;
	Wclsync::TwclThread* FThread;
	Wclsync::TwclManualResetEvent* FThreadInitEvent;
	Wclsync::TwclManualResetEvent* FThreadTermEvent;
	int FThreadResult;
	Wclwlan::_di_IWiFiDirectAdvertisement FAdvertisement;
	Wclwlan::_di_IWiFiDirectConnectionListener FConnectionListener;
	Wclwlan::_di_IWiFiDirectLegacySettings FLegacySettings;
	Wclwlan::_di_IWiFiDirectAdvertisementPublisher FPublisher;
	Wclwinapi::EventRegistrationToken FConnectionRequestEventToken;
	bool FAutonomousGroupOwnerEnabled;
	TwclWiFiDirectAdvertisementDiscoverability FDiscoverability;
	bool FLegacy;
	bool FOpenAuth;
	System::UnicodeString FPassphrase;
	System::UnicodeString FSsid;
	TwclWiFiDirectAcceptDeviceEvent FOnAcceptDevice;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	bool __fastcall GetActive(void);
	bool __fastcall GetAutonomousGroupOwnerEnabled(void);
	int __fastcall GetCount(void);
	TwclWiFiDirectDevice* __fastcall GetDevices(const int Index);
	TwclWiFiDirectAdvertisementDiscoverability __fastcall GetDiscoverability(void);
	bool __fastcall GetLegacy(void);
	System::UnicodeString __fastcall GetPassphrase(void);
	System::UnicodeString __fastcall GetSsid(void);
	void __fastcall SetAutonomousGroupOwnerEnabled(const bool Value);
	void __fastcall SetDiscoverability(const TwclWiFiDirectAdvertisementDiscoverability Value);
	void __fastcall SetLegacy(const bool Value);
	void __fastcall SetOpenAuth(const bool Value);
	void __fastcall SetPassphrase(const System::UnicodeString Value);
	void __fastcall SetSsid(const System::UnicodeString Value);
	int __fastcall SetupAdvertisement(void);
	int __fastcall SetupLegacySettings(void);
	int __fastcall StartPublisher(void);
	void __fastcall StopPublisher(void);
	int __fastcall StartListener(void);
	void __fastcall StopListener(void);
	int __fastcall IsHotspotRunning(void);
	bool __fastcall IsWow64(void);
	void __fastcall ThreadProc(void);
	
protected:
	virtual void __fastcall HardwareRemoved(void);
	virtual TwclWiFiDirectDevice* __fastcall FindDevice(const System::UnicodeString Id);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoAcceptDevice(TwclWiFiDirectDevice* const Device, /* out */ bool &Accept);
	virtual void __fastcall DoDeviceConnected(TwclWiFiDirectDevice* const Device, const int Error);
	virtual void __fastcall DoDeviceDisconnected(TwclWiFiDirectDevice* const Device, const int Reason);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	
public:
	__fastcall virtual TwclWiFiDirectAdvertiser(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclWiFiDirectAdvertiser(void);
	int __fastcall Start(void);
	int __fastcall Stop(void);
	__property bool Active = {read=GetActive, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property TwclWiFiDirectDevice* Devices[const int Index] = {read=GetDevices/*, default*/};
	
__published:
	__property bool AutonomousGroupOwnerEnabled = {read=GetAutonomousGroupOwnerEnabled, write=SetAutonomousGroupOwnerEnabled, default=0};
	__property TwclWiFiDirectAdvertisementDiscoverability Discoverability = {read=GetDiscoverability, write=SetDiscoverability, default=2};
	__property bool Legacy = {read=GetLegacy, write=SetLegacy, default=0};
	__property bool OpenAuth = {read=FOpenAuth, write=SetOpenAuth, default=0};
	__property System::UnicodeString Passphrase = {read=GetPassphrase, write=SetPassphrase};
	__property System::UnicodeString Ssid = {read=GetSsid, write=SetSsid};
	__property TwclWiFiDirectAcceptDeviceEvent OnAcceptDevice = {read=FOnAcceptDevice, write=FOnAcceptDevice};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
};


typedef void __fastcall (__closure *TwclWiFiDirectSoftAPAcceptEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, /* out */ bool &Accept);

typedef void __fastcall (__closure *TwclWiFiDirectSoftAPConnectedEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device);

typedef void __fastcall (__closure *TwclWiFiDirectSoftAPConnectErrorEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device, const int Error);

typedef void __fastcall (__closure *TwclWiFiDirectSoftAPDisconnectedEvent)(System::TObject* Sender, TwclWiFiDirectDevice* const Device);

enum DECLSPEC_DENUM TwclWiFiSoftAPAcceptMode : unsigned int { amManual, amWhiteList, amBlackList };

class PASCALIMPLEMENTATION TwclWiFiSoftAP : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TwclWiFiDirectAdvertiser* FAdvertiser;
	System::Classes::TStringList* FAcceptedDevices;
	TwclWiFiSoftAPAcceptMode FAcceptMode;
	System::Classes::TStringList* FDevices;
	GUID FId;
	TwclWiFiDirectSoftAPAcceptEvent FOnDeviceAccept;
	TwclWiFiDirectSoftAPConnectedEvent FOnDeviceConnected;
	TwclWiFiDirectSoftAPConnectErrorEvent FOnDeviceConnectError;
	TwclWiFiDirectSoftAPDisconnectedEvent FOnDeviceDisconnected;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	bool __fastcall GetActive(void);
	Wclmessaging::TwclMessageProcessingMethod __fastcall GetMessageProcessing(void);
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	void __fastcall DeviceAccept(System::TObject* Sender, TwclWiFiDirectDevice* const Device, /* out */ bool &Accept);
	void __fastcall DeviceConnected(System::TObject* Sender, TwclWiFiDirectDevice* const Device, const int Error);
	void __fastcall DeviceDisconnected(System::TObject* Sender, TwclWiFiDirectDevice* const Device, const int Reason);
	void __fastcall Started(System::TObject* Sender);
	void __fastcall Stopped(System::TObject* Sender);
	
protected:
	virtual void __fastcall DoDeviceAccept(TwclWiFiDirectDevice* const Device, /* out */ bool &Accept);
	virtual void __fastcall DoDeviceConnected(TwclWiFiDirectDevice* const Device);
	virtual void __fastcall DoDeviceConnectError(TwclWiFiDirectDevice* const Device, const int Error);
	virtual void __fastcall DoDeviceDisconnected(TwclWiFiDirectDevice* const Device);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	
public:
	__fastcall virtual TwclWiFiSoftAP(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclWiFiSoftAP(void);
	int __fastcall Start(const System::UnicodeString Ssid, const System::UnicodeString Passphrase)/* overload */;
	int __fastcall Start(const System::UnicodeString Ssid)/* overload */;
	int __fastcall Stop(void);
	int __fastcall GetPassphrase(/* out */ System::UnicodeString &Passphrase);
	int __fastcall GetSsid(/* out */ System::UnicodeString &Ssid);
	int __fastcall GetIpSettings(/* out */ System::UnicodeString &Address, /* out */ System::UnicodeString &Mask, /* out */ System::UnicodeString &Gateway, /* out */ System::UnicodeString &Dns1, /* out */ System::UnicodeString &Dns2);
	int __fastcall SetIpSettings(const System::UnicodeString Address, const System::UnicodeString Mask, const System::UnicodeString Gateway, const System::UnicodeString Dns1, const System::UnicodeString Dns2);
	int __fastcall ResetIpSettings(void);
	__property bool Active = {read=GetActive, nodefault};
	__property System::Classes::TStringList* Devices = {read=FDevices};
	
__published:
	__property TwclWiFiSoftAPAcceptMode AcceptMode = {read=FAcceptMode, write=FAcceptMode, default=0};
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=GetMessageProcessing, write=SetMessageProcessing, default=1};
	__property TwclWiFiDirectSoftAPAcceptEvent OnDeviceAccept = {read=FOnDeviceAccept, write=FOnDeviceAccept};
	__property TwclWiFiDirectSoftAPConnectedEvent OnDeviceConnected = {read=FOnDeviceConnected, write=FOnDeviceConnected};
	__property TwclWiFiDirectSoftAPConnectErrorEvent OnDeviceConnectError = {read=FOnDeviceConnectError, write=FOnDeviceConnectError};
	__property TwclWiFiDirectSoftAPDisconnectedEvent OnDeviceDisconnected = {read=FOnDeviceDisconnected, write=FOnDeviceDisconnected};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
};


typedef void __fastcall (__closure *TwclWiFiDirectDeviceFoundEvent)(System::TObject* Sender, const System::UnicodeString Id, const System::UnicodeString Name);

typedef void __fastcall (__closure *TwclWiFiDirectDiscoveringCompletedEvent)(System::TObject* Sender, const int Error);

class PASCALIMPLEMENTATION TwclWiFiDirectDeviceWatcher : public TwclCustomWiFiDirectComponent
{
	typedef TwclCustomWiFiDirectComponent inherited;
	
private:
	Wclsync::TwclThread* FThread;
	Wclsync::TwclManualResetEvent* FThreadEvent;
	Wclsync::TwclManualResetEvent* FThreadInitEvent;
	int FThreadResult;
	System::UnicodeString FDeviceId;
	bool FPaired;
	System::Classes::TStringList* FPairedDevices;
	TwclWiFiDirectDeviceFoundEvent FOnDeviceFound;
	TwclWiFiDirectDiscoveringCompletedEvent FOnDiscoveringCompleted;
	System::Classes::TNotifyEvent FOnDiscoveringStarted;
	bool __fastcall GetDiscovering(void);
	int __fastcall CanExecuteOperation(void);
	int __fastcall CreatePairingInterface(const System::UnicodeString Id, /* out */ Wclwinapi::_di_IDeviceInformationPairing &Pairing);
	void __fastcall SetThreadInitResult(const int Res);
	void __fastcall ThreadProc(void);
	void __fastcall Terminate(const int Error)/* overload */;
	void __fastcall GetPairedThreadProc(void);
	void __fastcall UnpairThreadProc(void);
	void __fastcall EnumPairedDevicesThreadProc(void);
	
protected:
	virtual void __fastcall HardwareRemoved(void);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoDeviceFound(const System::UnicodeString Id, const System::UnicodeString Name);
	virtual void __fastcall DoDiscoveringCompleted(const int Error);
	virtual void __fastcall DoDiscoveringStarted(void);
	
public:
	__fastcall virtual TwclWiFiDirectDeviceWatcher(System::Classes::TComponent* AOwner);
	int __fastcall Discover(void);
	int __fastcall Terminate(void)/* overload */;
	int __fastcall IsPaired(const System::UnicodeString Id, /* out */ bool &Paired);
	int __fastcall Unpair(const System::UnicodeString Id);
	int __fastcall EnumPairedDevices(System::Classes::TStringList* const Devices);
	__property bool Discovering = {read=GetDiscovering, nodefault};
	
__published:
	__property TwclWiFiDirectDeviceFoundEvent OnDeviceFound = {read=FOnDeviceFound, write=FOnDeviceFound};
	__property TwclWiFiDirectDiscoveringCompletedEvent OnDiscoveringCompleted = {read=FOnDiscoveringCompleted, write=FOnDiscoveringCompleted};
	__property System::Classes::TNotifyEvent OnDiscoveringStarted = {read=FOnDiscoveringStarted, write=FOnDiscoveringStarted};
public:
	/* TwclCustomWiFiDirectComponent.Destroy */ inline __fastcall virtual ~TwclWiFiDirectDeviceWatcher(void) { }
	
};


class PASCALIMPLEMENTATION TwclWiFiDirectClient : public TwclWiFiDirectConnectionComponent
{
	typedef TwclWiFiDirectConnectionComponent inherited;
	
private:
	TwclWiFiDirectDevice* FDevice;
	System::UnicodeString __fastcall GetLocalAddress(void);
	System::UnicodeString __fastcall GetRemoteAddress(void);
	TwclWiFiDirectDeviceState __fastcall GetState(void);
	
protected:
	virtual void __fastcall HardwareRemoved(void);
	virtual TwclWiFiDirectDevice* __fastcall FindDevice(const System::UnicodeString Id);
	virtual void __fastcall DoDeviceConnected(TwclWiFiDirectDevice* const Device, const int Error);
	virtual void __fastcall DoDeviceDisconnected(TwclWiFiDirectDevice* const Device, const int Reason);
	
public:
	__fastcall virtual TwclWiFiDirectClient(System::Classes::TComponent* AOwner);
	int __fastcall Connect(const System::UnicodeString Id);
	int __fastcall Disconnect(void);
	__property System::UnicodeString LocalAddress = {read=GetLocalAddress};
	__property System::UnicodeString RemoteAddress = {read=GetRemoteAddress};
	__property TwclWiFiDirectDeviceState State = {read=GetState, nodefault};
public:
	/* TwclCustomWiFiDirectComponent.Destroy */ inline __fastcall virtual ~TwclWiFiDirectClient(void) { }
	
};


enum DECLSPEC_DENUM TwclMobileHotspotState : unsigned int { mhsUnknown, mhsOn, mhsOff, mhsInTransition };

enum DECLSPEC_DENUM TwclMobileHotspotBand : unsigned int { mhbAuto, mhbTwoPointFourGigahertz, mhbFiveGigahertz };

struct DECLSPEC_DRECORD TwclMobileHotspotClient
{
public:
	System::UnicodeString Mac;
	System::UnicodeString Name;
};


typedef System::DynamicArray<TwclMobileHotspotClient> TwclMobileHotspotClients;

class PASCALIMPLEMENTATION TwclMobileHotspot : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Wclwlan::_di_INetworkOperatorTetheringManager FManager;
	Wclsync::TwclThread* FThread;
	Wclsync::TwclManualResetEvent* FThreadInitEvent;
	int FThreadInitResult;
	Wclsync::TwclManualResetEvent* FThreadTermEvent;
	System::Classes::TNotifyEvent FOnClosed;
	System::Classes::TNotifyEvent FOnOpened;
	bool __fastcall GetActive(void);
	int __fastcall StatusToError(const Wclwlan::TetheringOperationStatus Status);
	int __fastcall GetApConfig(/* out */ Wclwlan::_di_INetworkOperatorTetheringAccessPointConfiguration &Config);
	int __fastcall SetApConfig(const Wclwlan::_di_INetworkOperatorTetheringAccessPointConfiguration Config);
	int __fastcall CreateStatics4(/* out */ Wclwlan::_di_INetworkOperatorTetheringManagerStatics4 &Statics);
	void __fastcall ThreadProc(void);
	
protected:
	virtual void __fastcall DoClosed(void);
	virtual void __fastcall DoOpened(void);
	
public:
	__fastcall virtual TwclMobileHotspot(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclMobileHotspot(void);
	int __fastcall Close(void);
	int __fastcall Open(void);
	int __fastcall Start(void);
	int __fastcall Stop(void);
	int __fastcall GetState(/* out */ TwclMobileHotspotState &State);
	int __fastcall GetSsid(/* out */ System::UnicodeString &Ssid);
	int __fastcall SetSsid(const System::UnicodeString Ssid);
	int __fastcall GetPassphrase(/* out */ System::UnicodeString &Passphrase);
	int __fastcall SetPassphrase(const System::UnicodeString Passphrase);
	int __fastcall IsBandSupported(const TwclMobileHotspotBand Band, /* out */ bool &Supported);
	int __fastcall GetBand(/* out */ TwclMobileHotspotBand &Band);
	int __fastcall SetBand(const TwclMobileHotspotBand Band);
	int __fastcall GetMaxClientCount(/* out */ unsigned &Count);
	int __fastcall GetClientCount(/* out */ unsigned &Count);
	int __fastcall GetClients(/* out */ TwclMobileHotspotClients &Clients);
	int __fastcall IsNoConnectionsTimeoutEnabled(/* out */ bool &Enabled);
	int __fastcall DisableNoConnectionsTimeout(void);
	int __fastcall EnableNoConnectionsTimeout(void);
	__property bool Active = {read=GetActive, nodefault};
	
__published:
	__property System::Classes::TNotifyEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property System::Classes::TNotifyEvent OnOpened = {read=FOnOpened, write=FOnOpened};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiFiDriParser : public TwclWiFiInformationElementParser
{
	typedef TwclWiFiInformationElementParser inherited;
	
private:
	Wcldriasd::TwclDriAsdParser* FAsdParser;
	unsigned __fastcall GetOui(const TwclWiFiInformationElement &Element);
	bool __fastcall IsDriIe(const TwclWiFiInformationElement &Element);
	int __fastcall ExtractDriElements(const TwclWiFiIeRawData Raw, /* out */ TwclWiFiInformationElements &Elements);
	
public:
	__fastcall TwclWiFiDriParser(void);
	__fastcall virtual ~TwclWiFiDriParser(void);
	int __fastcall ParseDriMessages(const TwclWiFiBss &Bss, System::Classes::TList* const Messages)/* overload */;
	int __fastcall ParseDriMessages(const TwclWiFiIeRawData Raw, System::Classes::TList* const Messages)/* overload */;
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wclwifi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLWIFI)
using namespace Wclwifi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclwifiHPP
