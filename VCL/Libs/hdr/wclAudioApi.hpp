// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclAudioApi.pas' rev: 30.00 (Windows)

#ifndef WclaudioapiHPP
#define WclaudioapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.MMSystem.hpp>
#include <wclWinAPI.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclaudioapi
{
//-- forward type declarations -----------------------------------------------
struct KSIDENTIFIER;
struct AUDIO_VOLUME_NOTIFICATION_DATA;
struct AudioClientProperties_Win8;
struct AudioClientProperties;
struct AudioClient3ActivationParams;
struct AUDIO_EFFECT;
struct AMBISONICS_PARAMS;
__interface IPropertyStore;
typedef System::DelphiInterface<IPropertyStore> _di_IPropertyStore;
__interface IMMDevice;
typedef System::DelphiInterface<IMMDevice> _di_IMMDevice;
__interface IMMDeviceCollection;
typedef System::DelphiInterface<IMMDeviceCollection> _di_IMMDeviceCollection;
__interface IMMNotificationClient;
typedef System::DelphiInterface<IMMNotificationClient> _di_IMMNotificationClient;
__interface IMMDeviceEnumerator;
typedef System::DelphiInterface<IMMDeviceEnumerator> _di_IMMDeviceEnumerator;
__interface IMMEndpoint;
typedef System::DelphiInterface<IMMEndpoint> _di_IMMEndpoint;
__interface IMMDeviceActivator;
typedef System::DelphiInterface<IMMDeviceActivator> _di_IMMDeviceActivator;
__interface IActivateAudioInterfaceAsyncOperation;
typedef System::DelphiInterface<IActivateAudioInterfaceAsyncOperation> _di_IActivateAudioInterfaceAsyncOperation;
__interface IActivateAudioInterfaceCompletionHandler;
typedef System::DelphiInterface<IActivateAudioInterfaceCompletionHandler> _di_IActivateAudioInterfaceCompletionHandler;
__interface IPolicyConfig;
typedef System::DelphiInterface<IPolicyConfig> _di_IPolicyConfig;
__interface IPolicyConfigVista;
typedef System::DelphiInterface<IPolicyConfigVista> _di_IPolicyConfigVista;
__interface IConnector;
typedef System::DelphiInterface<IConnector> _di_IConnector;
__interface ISubunit;
typedef System::DelphiInterface<ISubunit> _di_ISubunit;
__interface IControlInterface;
typedef System::DelphiInterface<IControlInterface> _di_IControlInterface;
__interface IDeviceTopology;
typedef System::DelphiInterface<IDeviceTopology> _di_IDeviceTopology;
__interface IControlChangeNotify;
typedef System::DelphiInterface<IControlChangeNotify> _di_IControlChangeNotify;
__interface IPart;
typedef System::DelphiInterface<IPart> _di_IPart;
__interface IPartsList;
typedef System::DelphiInterface<IPartsList> _di_IPartsList;
__interface IKsControl;
typedef System::DelphiInterface<IKsControl> _di_IKsControl;
__interface IAudioEndpointVolumeCallback;
typedef System::DelphiInterface<IAudioEndpointVolumeCallback> _di_IAudioEndpointVolumeCallback;
__interface IAudioEndpointVolume;
typedef System::DelphiInterface<IAudioEndpointVolume> _di_IAudioEndpointVolume;
__interface IAudioEndpointVolumeEx;
typedef System::DelphiInterface<IAudioEndpointVolumeEx> _di_IAudioEndpointVolumeEx;
__interface IAudioMeterInformation;
typedef System::DelphiInterface<IAudioMeterInformation> _di_IAudioMeterInformation;
__interface IAudioClient;
typedef System::DelphiInterface<IAudioClient> _di_IAudioClient;
__interface IAudioClient2;
typedef System::DelphiInterface<IAudioClient2> _di_IAudioClient2;
__interface IAudioClient3;
typedef System::DelphiInterface<IAudioClient3> _di_IAudioClient3;
__interface IAudioRenderClient;
typedef System::DelphiInterface<IAudioRenderClient> _di_IAudioRenderClient;
__interface IAudioCaptureClient;
typedef System::DelphiInterface<IAudioCaptureClient> _di_IAudioCaptureClient;
__interface IAudioClock;
typedef System::DelphiInterface<IAudioClock> _di_IAudioClock;
__interface IAudioClock2;
typedef System::DelphiInterface<IAudioClock2> _di_IAudioClock2;
__interface IAudioClockAdjustment;
typedef System::DelphiInterface<IAudioClockAdjustment> _di_IAudioClockAdjustment;
__interface ISimpleAudioVolume;
typedef System::DelphiInterface<ISimpleAudioVolume> _di_ISimpleAudioVolume;
__interface IAudioClientDuckingControl;
typedef System::DelphiInterface<IAudioClientDuckingControl> _di_IAudioClientDuckingControl;
__interface IAudioViewManagerService;
typedef System::DelphiInterface<IAudioViewManagerService> _di_IAudioViewManagerService;
__interface IAudioEffectsChangedNotificationClient;
typedef System::DelphiInterface<IAudioEffectsChangedNotificationClient> _di_IAudioEffectsChangedNotificationClient;
__interface IAudioEffectsManager;
typedef System::DelphiInterface<IAudioEffectsManager> _di_IAudioEffectsManager;
__interface IAudioStreamVolume;
typedef System::DelphiInterface<IAudioStreamVolume> _di_IAudioStreamVolume;
__interface IAudioAmbisonicsControl;
typedef System::DelphiInterface<IAudioAmbisonicsControl> _di_IAudioAmbisonicsControl;
__interface IChannelAudioVolume;
typedef System::DelphiInterface<IChannelAudioVolume> _di_IChannelAudioVolume;
__interface IAcousticEchoCancellationControl;
typedef System::DelphiInterface<IAcousticEchoCancellationControl> _di_IAcousticEchoCancellationControl;
__interface IAudioSessionEvents;
typedef System::DelphiInterface<IAudioSessionEvents> _di_IAudioSessionEvents;
__interface IAudioSessionControl;
typedef System::DelphiInterface<IAudioSessionControl> _di_IAudioSessionControl;
__interface IAudioSessionControl2;
typedef System::DelphiInterface<IAudioSessionControl2> _di_IAudioSessionControl2;
__interface IAudioSessionEnumerator;
typedef System::DelphiInterface<IAudioSessionEnumerator> _di_IAudioSessionEnumerator;
__interface IAudioSessionNotification;
typedef System::DelphiInterface<IAudioSessionNotification> _di_IAudioSessionNotification;
__interface IAudioVolumeDuckNotification;
typedef System::DelphiInterface<IAudioVolumeDuckNotification> _di_IAudioVolumeDuckNotification;
__interface IAudioSessionManager;
typedef System::DelphiInterface<IAudioSessionManager> _di_IAudioSessionManager;
__interface IAudioSessionManager2;
typedef System::DelphiInterface<IAudioSessionManager2> _di_IAudioSessionManager2;
__interface IAudioPlaybackConnectionOpenResult;
typedef System::DelphiInterface<IAudioPlaybackConnectionOpenResult> _di_IAudioPlaybackConnectionOpenResult;
__interface IAudioPlaybackConnectionOpenAsyncOperationCompletedHandler;
typedef System::DelphiInterface<IAudioPlaybackConnectionOpenAsyncOperationCompletedHandler> _di_IAudioPlaybackConnectionOpenAsyncOperationCompletedHandler;
__interface IAudioPlaybackConnectionOpenAsyncOperation;
typedef System::DelphiInterface<IAudioPlaybackConnectionOpenAsyncOperation> _di_IAudioPlaybackConnectionOpenAsyncOperation;
__interface IAudioPlaybackConnectionEventHandler;
typedef System::DelphiInterface<IAudioPlaybackConnectionEventHandler> _di_IAudioPlaybackConnectionEventHandler;
__interface IAudioPlaybackConnection;
typedef System::DelphiInterface<IAudioPlaybackConnection> _di_IAudioPlaybackConnection;
__interface IAudioPlaybackConnectionStatics;
typedef System::DelphiInterface<IAudioPlaybackConnectionStatics> _di_IAudioPlaybackConnectionStatics;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM EDataFlow : unsigned int { eRender, eCapture, eAll };

enum DECLSPEC_DENUM ERole : unsigned int { eConsole, eMultimedia, eCommunications };

enum DECLSPEC_DENUM ConnectorType : unsigned int { Unknown_Connector, Physical_Internal, Physical_External, Software_IO, Software_Fixed, Network };

enum DECLSPEC_DENUM DataFlow : unsigned int { _In, _Out };

enum DECLSPEC_DENUM PartType : unsigned int { Connector, Subunit };

enum DECLSPEC_DENUM KSPROPERTY_BTAUDIO : unsigned int { KSPROPERTY_ONESHOT_RECONNECT, KSPROPERTY_ONESHOT_DISCONNECT };

enum DECLSPEC_DENUM AUDCLNT_SHAREMODE : unsigned int { AUDCLNT_SHAREMODE_SHARED, AUDCLNT_SHAREMODE_EXCLUSIVE };

enum DECLSPEC_DENUM AUDIO_STREAM_CATEGORY : unsigned int { AudioCategory_Other, AudioCategory_ForegroundOnlyMedia, AudioCategory_BackgroundCapableMedia, AudioCategory_Communications, AudioCategory_Alerts, AudioCategory_SoundEffects, AudioCategory_GameEffects, AudioCategory_GameMedia, AudioCategory_GameChat, AudioCategory_Speech, AudioCategory_Movie, AudioCategory_Media, AudioCategory_FarFieldSpeech, AudioCategory_UniformSpeech, AudioCategory_VoiceTyping };

enum DECLSPEC_DENUM AudioSessionState : unsigned int { AudioSessionStateInactive, AudioSessionStateActive, AudioSessionStateExpired };

enum DECLSPEC_DENUM AudioSessionDisconnectReason : unsigned int { DisconnectReasonDeviceRemoval, DisconnectReasonServerShutdown, DisconnectReasonFormatChanged, DisconnectReasonSessionLogoff, DisconnectReasonSessionDisconnected, DisconnectReasonExclusiveModeOverride };

enum DECLSPEC_DENUM AUDCLNT_BUFFERFLAGS : unsigned int { AUDCLNT_BUFFERFLAGS_DATA_DISCONTINUITY = 0x1, AUDCLNT_BUFFERFLAGS_SILENT, AUDCLNT_BUFFERFLAGS_TIMESTAMP_ERROR = 0x4 };

enum DECLSPEC_DENUM AUDCLNT_STREAMOPTIONS : unsigned int { AUDCLNT_STREAMOPTIONS_NONE, AUDCLNT_STREAMOPTIONS_RAW, AUDCLNT_STREAMOPTIONS_MATCH_FORMAT, AUDCLNT_STREAMOPTIONS_AMBISONICS = 0x4 };

enum DECLSPEC_DENUM AUDIO_DUCKING_OPTIONS : unsigned int { AUDIO_DUCKING_OPTIONS_DEFAULT, AUDIO_DUCKING_OPTIONS_DO_NOT_DUCK_OTHER_STREAMS };

enum DECLSPEC_DENUM AUDIO_EFFECT_STATE : unsigned int { AUDIO_EFFECT_STATE_OFF, AUDIO_EFFECT_STATE_ON };

enum DECLSPEC_DENUM AMBISONICS_TYPE : unsigned int { AMBISONICS_TYPE_FULL3D };

enum DECLSPEC_DENUM AMBISONICS_CHANNEL_ORDERING : unsigned int { AMBISONICS_CHANNEL_ORDERING_ACN };

enum DECLSPEC_DENUM AMBISONICS_NORMALIZATION : unsigned int { AMBISONICS_NORMALIZATION_SN3D, AMBISONICS_NORMALIZATION_N3D };

typedef KSIDENTIFIER *PKSIDENTIFIER;

#pragma pack(push,1)
struct DECLSPEC_DRECORD KSIDENTIFIER
{
public:
	GUID _Set;
	unsigned Id;
	unsigned Flags;
	__int64 Alignment;
};
#pragma pack(pop)


typedef KSIDENTIFIER *PKSPROPERTY;

typedef KSIDENTIFIER KSPROPERTY;

typedef KSIDENTIFIER *PKSMETHOD;

typedef KSIDENTIFIER KSMETHOD;

typedef KSIDENTIFIER *PKSEVENT;

typedef KSIDENTIFIER KSEVENT;

typedef AUDIO_VOLUME_NOTIFICATION_DATA *PAUDIO_VOLUME_NOTIFICATION_DATA;

struct DECLSPEC_DRECORD AUDIO_VOLUME_NOTIFICATION_DATA
{
public:
	GUID guidEventContext;
	System::LongBool bMuted;
	float fMasterVolume;
	unsigned nChannels;
	System::StaticArray<float, 1> afChannelVolumes;
};


struct DECLSPEC_DRECORD AudioClientProperties_Win8
{
public:
	unsigned cbSize;
	System::LongBool bIsOffload;
	AUDIO_STREAM_CATEGORY eCategory;
};


typedef AudioClientProperties *PAudioClientProperties;

struct DECLSPEC_DRECORD AudioClientProperties
{
public:
	unsigned cbSize;
	System::LongBool bIsOffload;
	AUDIO_STREAM_CATEGORY eCategory;
	AUDCLNT_STREAMOPTIONS Options;
};


typedef __int64 *PREFERENCE_TIME;

typedef __int64 REFERENCE_TIME;

struct DECLSPEC_DRECORD AudioClient3ActivationParams
{
public:
	GUID tracingContextId;
};


typedef AUDIO_EFFECT *PAUDIO_EFFECT;

struct DECLSPEC_DRECORD AUDIO_EFFECT
{
public:
	GUID id;
	System::LongBool canSetState;
	AUDIO_EFFECT_STATE state;
};


typedef AMBISONICS_PARAMS *PAMBISONICS_PARAMS;

struct DECLSPEC_DRECORD AMBISONICS_PARAMS
{
public:
	unsigned u32Size;
	unsigned u32Version;
	AMBISONICS_TYPE u32Type;
	AMBISONICS_CHANNEL_ORDERING u32ChannelOrdering;
	AMBISONICS_NORMALIZATION u32Normalization;
	unsigned u32Order;
	unsigned u32NumChannels;
	unsigned *pu32ChannelMap;
};


__interface  INTERFACE_UUID("{886D8EEB-8CF2-4446-8D02-CDBA1DBDCF99}") IPropertyStore  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCount(/* out */ unsigned &cProps) = 0 ;
	virtual HRESULT __stdcall GetAt(unsigned iProp, /* out */ Wclwinapi::DEVPROPKEY &pkey) = 0 ;
	virtual HRESULT __stdcall GetValue(Wclwinapi::PDEVPROPKEY key, /* out */ tagPROPVARIANT &pv) = 0 ;
	virtual HRESULT __stdcall SetValue(Wclwinapi::PDEVPROPKEY key, Winapi::Activex::PPropVariant propvar) = 0 ;
	virtual HRESULT __stdcall Commit(void) = 0 ;
};

__interface  INTERFACE_UUID("{D666063F-1587-4E43-81F1-B948E807363F}") IMMDevice  : public System::IInterface 
{
	virtual HRESULT __stdcall Activate(const GUID &iid, unsigned dwClsCtx, Winapi::Activex::PPropVariant pActivationParams, /* out */ void *ppInterface) = 0 ;
	virtual HRESULT __stdcall OpenPropertyStore(unsigned stgmAccess, /* out */ _di_IPropertyStore &ppProperties) = 0 ;
	virtual HRESULT __stdcall GetId(/* out */ System::WideChar * &ppstrId) = 0 ;
	virtual HRESULT __stdcall GetState(/* out */ unsigned &pdwState) = 0 ;
};

__interface  INTERFACE_UUID("{0BD7A1BE-7A1A-44DB-8397-CC5392387B5E}") IMMDeviceCollection  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCount(/* out */ unsigned &pcDevices) = 0 ;
	virtual HRESULT __stdcall Item(unsigned nDevice, /* out */ _di_IMMDevice &ppDevice) = 0 ;
};

__interface  INTERFACE_UUID("{7991EEC9-7E89-4D85-8390-6C703CEC60C0}") IMMNotificationClient  : public System::IInterface 
{
	virtual HRESULT __stdcall OnDeviceStateChanged(System::WideChar * pwstrDeviceId, unsigned dwNewState) = 0 ;
	virtual HRESULT __stdcall OnDeviceAdded(System::WideChar * pwstrDeviceId) = 0 ;
	virtual HRESULT __stdcall OnDeviceRemoved(System::WideChar * pwstrDeviceId) = 0 ;
	virtual HRESULT __stdcall OnDefaultDeviceChanged(EDataFlow flow, ERole role, System::WideChar * pwstrDefaultDeviceId) = 0 ;
	virtual HRESULT __stdcall OnPropertyValueChanged(System::WideChar * pwstrDeviceId, const Wclwinapi::DEVPROPKEY key) = 0 ;
};

__interface  INTERFACE_UUID("{A95664D2-9614-4F35-A746-DE8DB63617E6}") IMMDeviceEnumerator  : public System::IInterface 
{
	virtual HRESULT __stdcall EnumAudioEndpoints(EDataFlow dataFlow, unsigned dwStateMask, /* out */ _di_IMMDeviceCollection &ppDevices) = 0 ;
	virtual HRESULT __stdcall GetDefaultAudioEndpoint(EDataFlow dataFlow, ERole role, /* out */ _di_IMMDevice &ppEndpoint) = 0 ;
	virtual HRESULT __stdcall GetDevice(System::WideChar * pwstrId, /* out */ _di_IMMDevice &ppDevice) = 0 ;
	virtual HRESULT __stdcall RegisterEndpointNotificationCallback(_di_IMMNotificationClient pClient) = 0 ;
	virtual HRESULT __stdcall UnregisterEndpointNotificationCallback(_di_IMMNotificationClient pClient) = 0 ;
};

__interface  INTERFACE_UUID("{1BE09788-6894-4089-8586-9A2A6C265AC5}") IMMEndpoint  : public System::IInterface 
{
	virtual HRESULT __stdcall GetDataFlow(/* out */ EDataFlow &pDataFlow) = 0 ;
};

__interface  INTERFACE_UUID("{3B0D0EA4-D0A9-4B0E-935B-09516746FAC0}") IMMDeviceActivator  : public System::IInterface 
{
	virtual HRESULT __stdcall Activate(System::PGUID iid, _di_IMMDevice pDevice, Winapi::Activex::PPropVariant pActivationParams, /* out */ void *ppInterface) = 0 ;
};

__interface  INTERFACE_UUID("{72A22D78-CDE4-431D-B8CC-843A71199B6D}") IActivateAudioInterfaceAsyncOperation  : public System::IInterface 
{
	virtual HRESULT __stdcall GetActivateResult(/* out */ HRESULT &activateResult, /* out */ System::_di_IInterface &activatedInterface) = 0 ;
};

__interface  INTERFACE_UUID("{41D949AB-9862-444A-80F6-C261334DA5EB}") IActivateAudioInterfaceCompletionHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall ActivateCompleted(_di_IActivateAudioInterfaceAsyncOperation activateOperation) = 0 ;
};

__interface  INTERFACE_UUID("{F8679F50-850A-41CF-9C72-430F290290C8}") IPolicyConfig  : public System::IInterface 
{
	virtual HRESULT __stdcall GetMixFormat(System::WideChar * arg1, /* out */ Winapi::Mmsystem::PWaveFormatEx &arg2) = 0 ;
	virtual HRESULT __stdcall GetDeviceFormat(System::WideChar * arg1, int arg2, /* out */ Winapi::Mmsystem::PWaveFormatEx &arg3) = 0 ;
	virtual HRESULT __stdcall ResetDeviceFormat(System::WideChar * arg1) = 0 ;
	virtual HRESULT __stdcall SetDeviceFormat(System::WideChar * arg1, Winapi::Mmsystem::PWaveFormatEx arg2, Winapi::Mmsystem::PWaveFormatEx arg3) = 0 ;
	virtual HRESULT __stdcall GetProcessingPeriod(System::WideChar * arg1, int arg2, /* out */ __int64 &arg3, /* out */ __int64 &agr4) = 0 ;
	virtual HRESULT __stdcall SetProcessingPeriod(System::WideChar * arg1, __int64 arg2) = 0 ;
	virtual HRESULT __stdcall GetShareMode(System::WideChar * arg1, void * agr2) = 0 ;
	virtual HRESULT __stdcall SetShareMode(System::WideChar * arg1, void * arg2) = 0 ;
	virtual HRESULT __stdcall GetPropertyValue(System::WideChar * arg1, Wclwinapi::PDEVPROPKEY arg2, /* out */ tagPROPVARIANT &arg3) = 0 ;
	virtual HRESULT __stdcall SetPropertyValue(System::WideChar * arg1, Wclwinapi::PDEVPROPKEY arg2, Winapi::Activex::PPropVariant arg3) = 0 ;
	virtual HRESULT __stdcall SetDefaultEndpoint(System::WideChar * wszDeviceId, ERole eRole) = 0 ;
	virtual HRESULT __stdcall SetEndpointVisibility(System::WideChar * arg1, int arg2) = 0 ;
};

__interface  INTERFACE_UUID("{568B9108-44BF-40B4-9006-86AFE5B5A620}") IPolicyConfigVista  : public System::IInterface 
{
	virtual HRESULT __stdcall GetMixFormat(System::WideChar * arg1, /* out */ Winapi::Mmsystem::PWaveFormatEx &arg2) = 0 ;
	virtual HRESULT __stdcall GetDeviceFormat(System::WideChar * arg1, int arg2, /* out */ Winapi::Mmsystem::PWaveFormatEx &arg3) = 0 ;
	virtual HRESULT __stdcall SetDeviceFormat(System::WideChar * arg1, Winapi::Mmsystem::PWaveFormatEx arg2, Winapi::Mmsystem::PWaveFormatEx arg3) = 0 ;
	virtual HRESULT __stdcall GetProcessingPeriod(System::WideChar * arg1, int arg2, /* out */ __int64 &arg3, /* out */ __int64 &agr4) = 0 ;
	virtual HRESULT __stdcall SetProcessingPeriod(System::WideChar * arg1, __int64 arg2) = 0 ;
	virtual HRESULT __stdcall GetShareMode(System::WideChar * arg1, void * agr2) = 0 ;
	virtual HRESULT __stdcall SetShareMode(System::WideChar * arg1, void * arg2) = 0 ;
	virtual HRESULT __stdcall GetPropertyValue(System::WideChar * arg1, Wclwinapi::PDEVPROPKEY arg2, /* out */ tagPROPVARIANT &arg3) = 0 ;
	virtual HRESULT __stdcall SetPropertyValue(System::WideChar * arg1, Wclwinapi::PDEVPROPKEY arg2, Winapi::Activex::PPropVariant arg3) = 0 ;
	virtual HRESULT __stdcall SetDefaultEndpoint(System::WideChar * wszDeviceId, ERole eRole) = 0 ;
	virtual HRESULT __stdcall SetEndpointVisibility(System::WideChar * arg1, int arg2) = 0 ;
};

__interface  INTERFACE_UUID("{9C2C4058-23F5-41DE-877A-DF3AF236A09E}") IConnector  : public System::IInterface 
{
	virtual HRESULT __stdcall GetType(/* out */ ConnectorType &pType) = 0 ;
	virtual HRESULT __stdcall GetDataFlow(/* out */ DataFlow &pFlow) = 0 ;
	virtual HRESULT __stdcall ConnectTo(_di_IConnector pConnectTo) = 0 ;
	virtual HRESULT __stdcall Disconnect(void) = 0 ;
	virtual HRESULT __stdcall IsConnected(/* out */ System::LongBool &pbConnected) = 0 ;
	virtual HRESULT __stdcall GetConnectedTo(/* out */ _di_IConnector &ppConTo) = 0 ;
	virtual HRESULT __stdcall GetConnectorIdConnectedTo(/* out */ System::WideChar * &ppwstrConnectorId) = 0 ;
	virtual HRESULT __stdcall GetDeviceIdConnectedTo(/* out */ System::WideChar * &ppwstrDeviceId) = 0 ;
};

__interface  INTERFACE_UUID("{82149A85-DBA6-4487-86BB-EA8F7FEFCC71}") ISubunit  : public System::IInterface 
{
	
};

__interface  INTERFACE_UUID("{45D37C3F-5140-444A-AE24-400789F3CBF3}") IControlInterface  : public System::IInterface 
{
	virtual HRESULT __stdcall GetName(/* out */ System::WideChar * &ppwstrName) = 0 ;
	virtual HRESULT __stdcall GetIID(/* out */ GUID &pIID) = 0 ;
};

__interface  INTERFACE_UUID("{2A07407E-6497-4A18-9787-32F79BD0D98F}") IDeviceTopology  : public System::IInterface 
{
	virtual HRESULT __stdcall GetConnectorCount(/* out */ unsigned &pCount) = 0 ;
	virtual HRESULT __stdcall GetConnector(unsigned nIndex, /* out */ _di_IConnector &ppConnector) = 0 ;
	virtual HRESULT __stdcall GetSubunitCount(/* out */ unsigned &pCount) = 0 ;
	virtual HRESULT __stdcall GetSubunit(unsigned nIndex, /* out */ _di_ISubunit &ppSubunit) = 0 ;
	virtual HRESULT __stdcall GetPartById(unsigned nId, /* out */ _di_IPart &ppPart) = 0 ;
	virtual HRESULT __stdcall GetDeviceId(/* out */ System::WideChar * &ppwstrDeviceId) = 0 ;
	virtual HRESULT __stdcall GetSignalPath(_di_IPart pIPartFrom, _di_IPart pIPartTo, System::LongBool bRejectMixedPaths, /* out */ _di_IPartsList &ppParts) = 0 ;
};

__interface  INTERFACE_UUID("{A09513ED-C709-4D21-BD7B-5F34C47F3947}") IControlChangeNotify  : public System::IInterface 
{
	virtual HRESULT __stdcall OnNotify(unsigned dwSenderProcessId, System::PGUID pguidEventContext) = 0 ;
};

__interface  INTERFACE_UUID("{AE2DE0E4-5BCA-4F2D-AA46-5D13F8FDB3A9}") IPart  : public System::IInterface 
{
	virtual HRESULT __stdcall GetName(/* out */ System::WideChar * &ppwstrName) = 0 ;
	virtual HRESULT __stdcall GetLocalId(/* out */ unsigned &pnId) = 0 ;
	virtual HRESULT __stdcall GetGlobalId(/* out */ System::WideChar * &ppwstrGlobalId) = 0 ;
	virtual HRESULT __stdcall GetPartType(/* out */ PartType &pPartType) = 0 ;
	virtual HRESULT __stdcall GetSubType(/* out */ GUID &pSubType) = 0 ;
	virtual HRESULT __stdcall GetControlInterfaceCount(/* out */ unsigned &pCount) = 0 ;
	virtual HRESULT __stdcall GetControlInterface(unsigned nIndex, /* out */ _di_IControlInterface &ppInterfaceDesc) = 0 ;
	virtual HRESULT __stdcall EnumPartsIncoming(/* out */ _di_IPartsList &ppParts) = 0 ;
	virtual HRESULT __stdcall EnumPartsOutgoing(/* out */ _di_IPartsList &ppParts) = 0 ;
	virtual HRESULT __stdcall GetTopologyObject(/* out */ _di_IDeviceTopology &ppTopology) = 0 ;
	virtual HRESULT __stdcall Activate(unsigned dwClsContext, System::PGUID refiid, /* out */ void *ppvObject) = 0 ;
	virtual HRESULT __stdcall RegisterControlChangeCallback(System::PGUID riid, _di_IControlChangeNotify pNotify) = 0 ;
	virtual HRESULT __stdcall UnregisterControlChangeCallback(_di_IControlChangeNotify pNotify) = 0 ;
};

__interface  INTERFACE_UUID("{6DAA848C-5EB0-45CC-AEA5-998A2CDA1FFB}") IPartsList  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCount(/* out */ unsigned &pCount) = 0 ;
	virtual HRESULT __stdcall GetPart(unsigned nIndex, /* out */ _di_IPart &ppPart) = 0 ;
};

__interface  INTERFACE_UUID("{28F54685-06FD-11D2-B27A-00A0C9223196}") IKsControl  : public System::IInterface 
{
	virtual HRESULT __stdcall KsProperty(PKSPROPERTY _Property, unsigned PropertyLength, void * PropertyData, unsigned DataLength, /* out */ unsigned &BytesReturned) = 0 ;
	virtual HRESULT __stdcall KsMethod(PKSMETHOD Method, unsigned MethodLength, void * MethodData, unsigned DataLength, /* out */ unsigned &BytesReturned) = 0 ;
	virtual HRESULT __stdcall KsEvent(PKSEVENT Event, unsigned EventLength, void * EventData, unsigned DataLength, /* out */ unsigned &BytesReturned) = 0 ;
};

__interface  INTERFACE_UUID("{657804FA-D6AD-4496-8A60-352752AF4F89}") IAudioEndpointVolumeCallback  : public System::IInterface 
{
	virtual HRESULT __stdcall OnNotify(PAUDIO_VOLUME_NOTIFICATION_DATA pNotify) = 0 ;
};

__interface  INTERFACE_UUID("{5CDF2C82-841E-4546-9722-0CF74078229A}") IAudioEndpointVolume  : public System::IInterface 
{
	virtual HRESULT __stdcall RegisterControlChangeNotify(_di_IAudioEndpointVolumeCallback pNotify) = 0 ;
	virtual HRESULT __stdcall UnregisterControlChangeNotify(_di_IAudioEndpointVolumeCallback pNotify) = 0 ;
	virtual HRESULT __stdcall GetChannelCount(/* out */ unsigned &pnChannelCount) = 0 ;
	virtual HRESULT __stdcall SetMasterVolumeLevel(float fLevelDB, System::PGUID pguidEventContext) = 0 ;
	virtual HRESULT __stdcall SetMasterVolumeLevelScalar(float fLevel, System::PGUID pguidEventContext) = 0 ;
	virtual HRESULT __stdcall GetMasterVolumeLevel(/* out */ float &pfLevelDB) = 0 ;
	virtual HRESULT __stdcall GetMasterVolumeLevelScalar(/* out */ float &pfLevel) = 0 ;
	virtual HRESULT __stdcall SetChannelVolumeLevel(unsigned nChannel, float fLevelDB, System::PGUID pguidEventContext) = 0 ;
	virtual HRESULT __stdcall SetChannelVolumeLevelScalar(unsigned nChannel, float fLevel, System::PGUID pguidEventContext) = 0 ;
	virtual HRESULT __stdcall GetChannelVolumeLevel(unsigned nChannel, /* out */ float &pfLevelDB) = 0 ;
	virtual HRESULT __stdcall GetChannelVolumeLevelScalar(unsigned nChannel, /* out */ float &pfLevel) = 0 ;
	virtual HRESULT __stdcall SetMute(int bMute, System::PGUID pguidEventContext) = 0 ;
	virtual HRESULT __stdcall GetMute(/* out */ System::LongBool &pbMute) = 0 ;
	virtual HRESULT __stdcall GetVolumeStepInfo(/* out */ unsigned &pnStep, /* out */ unsigned &pnStepCount) = 0 ;
	virtual HRESULT __stdcall VolumeStepUp(System::PGUID pguidEventContext) = 0 ;
	virtual HRESULT __stdcall VolumeStepDown(System::PGUID pguidEventContext) = 0 ;
	virtual HRESULT __stdcall QueryHardwareSupport(/* out */ unsigned &pdwHardwareSupportMask) = 0 ;
	virtual HRESULT __stdcall GetVolumeRange(/* out */ float &pflVolumeMindB, /* out */ float &pflVolumeMaxdB, /* out */ float &pflVolumeIncrementdB) = 0 ;
};

__interface  INTERFACE_UUID("{66E11784-F695-4F28-A505-A7080081A78F}") IAudioEndpointVolumeEx  : public IAudioEndpointVolume 
{
	virtual HRESULT __stdcall GetVolumeRangeChannel(unsigned iChannel, /* out */ float &pflVolumeMindB, /* out */ float &pflVolumeMaxdB, /* out */ float &pflVolumeIncrementdB) = 0 ;
};

__interface  INTERFACE_UUID("{C02216F6-8C67-4B5B-9D00-D008E73E0064}") IAudioMeterInformation  : public System::IInterface 
{
	virtual HRESULT __stdcall GetPeakValue(/* out */ float &pfPeak) = 0 ;
	virtual HRESULT __stdcall GetMeteringChannelCount(/* out */ unsigned &pnChannelCount) = 0 ;
	virtual HRESULT __stdcall GetChannelsPeakValues(unsigned u32ChannelCount, PFLOAT afPeakValues) = 0 ;
	virtual HRESULT __stdcall QueryHardwareSupport(/* out */ unsigned &pdwHardwareSupportMask) = 0 ;
};

__interface  INTERFACE_UUID("{1CB9AD4C-DBFA-4C32-B178-C2F568A703B2}") IAudioClient  : public System::IInterface 
{
	virtual HRESULT __stdcall Initialize(AUDCLNT_SHAREMODE ShareMode, unsigned StreamFlags, __int64 hnsBufferDuration, __int64 hnsPeriodicity, Winapi::Mmsystem::PWaveFormatEx pFormat, System::PGUID AudioSessionGuid) = 0 ;
	virtual HRESULT __stdcall GetBufferSize(/* out */ unsigned &pNumBufferFrames) = 0 ;
	virtual HRESULT __stdcall GetStreamLatency(/* out */ __int64 &phnsLatency) = 0 ;
	virtual HRESULT __stdcall GetCurrentPadding(/* out */ unsigned &pNumPaddingFrames) = 0 ;
	virtual HRESULT __stdcall IsFormatSupported(AUDCLNT_SHAREMODE ShareMode, Winapi::Mmsystem::PWaveFormatEx pFormat, /* out */ Winapi::Mmsystem::PWaveFormatEx &ppClosestMatch) = 0 ;
	virtual HRESULT __stdcall GetMixFormat(/* out */ Winapi::Mmsystem::PWaveFormatEx &ppDeviceFormat) = 0 ;
	virtual HRESULT __stdcall GetDevicePeriod(/* out */ __int64 &phnsDefaultDevicePeriod, /* out */ __int64 &phnsMinimumDevicePeriod) = 0 ;
	virtual HRESULT __stdcall Start(void) = 0 ;
	virtual HRESULT __stdcall Stop(void) = 0 ;
	virtual HRESULT __stdcall Reset(void) = 0 ;
	virtual HRESULT __stdcall SetEventHandle(NativeUInt eventHandle) = 0 ;
	virtual HRESULT __stdcall GetService(System::PGUID riid, /* out */ void *ppInterface) = 0 ;
};

__interface  INTERFACE_UUID("{726778CD-F60A-4EDA-82DE-E47610CD78AA}") IAudioClient2  : public IAudioClient 
{
	virtual HRESULT __stdcall IsOffloadCapable(AUDIO_STREAM_CATEGORY Category, /* out */ System::LongBool &pbOffloadCapable) = 0 ;
	virtual HRESULT __stdcall SetClientProperties(PAudioClientProperties pProperties) = 0 ;
	virtual HRESULT __stdcall GetBufferSizeLimits(Winapi::Mmsystem::PWaveFormatEx pFormat, System::LongBool bEventDriven, /* out */ __int64 &phnsMinBufferDuration, /* out */ __int64 &phnsMaxBufferDuration) = 0 ;
};

__interface  INTERFACE_UUID("{7ED4EE07-8E67-4CD4-8C1A-2B7A5987AD42}") IAudioClient3  : public IAudioClient2 
{
	virtual HRESULT __stdcall GetSharedModeEnginePeriod(Winapi::Mmsystem::PWaveFormatEx pFormat, /* out */ unsigned &pDefaultPeriodInFrames, /* out */ unsigned &pFundamentalPeriodInFrames, /* out */ unsigned &pMinPeriodInFrames, /* out */ unsigned &pMaxPeriodInFrames) = 0 ;
	virtual HRESULT __stdcall GetCurrentSharedModeEnginePeriod(/* out */ Winapi::Mmsystem::PWaveFormatEx &ppFormat, /* out */ unsigned &pCurrentPeriodInFrames) = 0 ;
	virtual HRESULT __stdcall InitializeSharedAudioStream(unsigned StreamFlags, unsigned PeriodInFrames, Winapi::Mmsystem::PWaveFormatEx pFormat, System::PGUID AudioSessionGuid) = 0 ;
};

__interface  INTERFACE_UUID("{F294ACFC-3146-4483-A7BF-ADDCA7C260E2}") IAudioRenderClient  : public System::IInterface 
{
	virtual HRESULT __stdcall GetBuffer(unsigned NumFramesRequested, /* out */ System::PByte &ppData) = 0 ;
	virtual HRESULT __stdcall ReleaseBuffer(unsigned NumFramesWritten, unsigned dwFlags) = 0 ;
};

__interface  INTERFACE_UUID("{C8ADBD64-E71E-48A0-A4DE-185C395CD317}") IAudioCaptureClient  : public System::IInterface 
{
	virtual HRESULT __stdcall GetBuffer(/* out */ System::PByte &ppData, /* out */ unsigned &pNumFramesToRead, /* out */ unsigned &pdwFlags, /* out */ unsigned __int64 &pu64DevicePosition, /* out */ unsigned __int64 &pu64QPCPosition) = 0 ;
	virtual HRESULT __stdcall ReleaseBuffer(unsigned NumFramesRead) = 0 ;
	virtual HRESULT __stdcall GetNextPacketSize(/* out */ unsigned &pNumFramesInNextPacket) = 0 ;
};

__interface  INTERFACE_UUID("{CD63314F-3FBA-4A1B-812C-EF96358728E7}") IAudioClock  : public System::IInterface 
{
	virtual HRESULT __stdcall GetFrequency(/* out */ unsigned __int64 &pu64Frequency) = 0 ;
	virtual HRESULT __stdcall GetPosition(/* out */ unsigned __int64 &pu64Position, /* out */ unsigned __int64 &pu64QPCPosition) = 0 ;
	virtual HRESULT __stdcall GetCharacteristics(/* out */ unsigned &pdwCharacteristics) = 0 ;
};

__interface  INTERFACE_UUID("{6F49FF73-6727-49AC-A008-D98CF5E70048}") IAudioClock2  : public System::IInterface 
{
	virtual HRESULT __stdcall GetDevicePosition(/* out */ unsigned __int64 &DevicePosition, /* out */ unsigned __int64 &QPCPosition) = 0 ;
};

__interface  INTERFACE_UUID("{F6E4C0A0-46D9-4FB8-BE21-57A3EF2B626C}") IAudioClockAdjustment  : public System::IInterface 
{
	virtual HRESULT __stdcall SetSampleRate(float flSampleRate) = 0 ;
};

__interface  INTERFACE_UUID("{87CE5498-68D6-44E5-9215-6DA47EF883D8}") ISimpleAudioVolume  : public System::IInterface 
{
	virtual HRESULT __stdcall SetMasterVolume(float fLevel, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall GetMasterVolume(/* out */ float &pfLevel) = 0 ;
	virtual HRESULT __stdcall SetMute(System::LongBool bMute, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall GetMute(/* out */ System::LongBool &pbMute) = 0 ;
};

__interface  INTERFACE_UUID("{C789D381-A28C-4168-B28F-D3A837924DC3}") IAudioClientDuckingControl  : public System::IInterface 
{
	virtual HRESULT __stdcall SetDuckingOptionsForCurrentStream(AUDIO_DUCKING_OPTIONS options) = 0 ;
};

__interface  INTERFACE_UUID("{A7A7EF10-1F49-45E0-AD35-612057CC8F74}") IAudioViewManagerService  : public System::IInterface 
{
	virtual HRESULT __stdcall SetAudioStreamWindow(HWND hwnd) = 0 ;
};

__interface  INTERFACE_UUID("{A5DED44F-3C5D-4B2B-BD1E-5DC1EE20BBF6}") IAudioEffectsChangedNotificationClient  : public System::IInterface 
{
	virtual HRESULT __stdcall OnAudioEffectsChanged(void) = 0 ;
};

__interface  INTERFACE_UUID("{4460B3AE-4B44-4527-8676-7548A8ACD260}") IAudioEffectsManager  : public System::IInterface 
{
	virtual HRESULT __stdcall RegisterAudioEffectsChangedNotificationCallback(_di_IAudioEffectsChangedNotificationClient client) = 0 ;
	virtual HRESULT __stdcall UnregisterAudioEffectsChangedNotificationCallback(_di_IAudioEffectsChangedNotificationClient client) = 0 ;
	virtual HRESULT __stdcall GetAudioEffects(/* out */ PAUDIO_EFFECT &effects, /* out */ unsigned &numEffects) = 0 ;
	virtual HRESULT __stdcall SetAudioEffectState(const GUID effectId, AUDIO_EFFECT_STATE state) = 0 ;
};

__interface  INTERFACE_UUID("{93014887-242D-4068-8A15-CF5E93B90FE3}") IAudioStreamVolume  : public System::IInterface 
{
	virtual HRESULT __stdcall GetChannelCount(/* out */ unsigned &pdwCount) = 0 ;
	virtual HRESULT __stdcall SetChannelVolume(unsigned dwIndex, float fLevel) = 0 ;
	virtual HRESULT __stdcall GetChannelVolume(unsigned dwIndex, /* out */ float &pfLevel) = 0 ;
	virtual HRESULT __stdcall SetAllVolumes(unsigned dwCount, PFLOAT pfVolumes) = 0 ;
	virtual HRESULT __stdcall GetAllVolumes(unsigned dwCount, PFLOAT pfVolumes) = 0 ;
};

__interface  INTERFACE_UUID("{28724C91-DF35-4856-9F76-D6A26413F3DF}") IAudioAmbisonicsControl  : public System::IInterface 
{
	virtual HRESULT __stdcall SetData(PAMBISONICS_PARAMS pAmbisonicsParams, unsigned cbAmbisonicsParams) = 0 ;
	virtual HRESULT __stdcall SetHeadTracking(System::LongBool bEnableHeadTracking) = 0 ;
	virtual HRESULT __stdcall GetHeadTracking(/* out */ System::LongBool &pbEnableHeadTracking) = 0 ;
	virtual HRESULT __stdcall SetRotation(float X, float Y, float Z, float W) = 0 ;
};

__interface  INTERFACE_UUID("{1C158861-B533-4B30-B1CF-E853E51C59B8}") IChannelAudioVolume  : public System::IInterface 
{
	virtual HRESULT __stdcall GetChannelCount(/* out */ unsigned &pdwCount) = 0 ;
	virtual HRESULT __stdcall SetChannelVolume(unsigned dwIndex, float fLevel, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall GetChannelVolume(unsigned dwIndex, /* out */ float &pfLevel) = 0 ;
	virtual HRESULT __stdcall SetAllVolumes(unsigned dwCount, PFLOAT pfVolumes, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall GetAllVolumes(unsigned dwCount, PFLOAT pfVolumes) = 0 ;
};

__interface  INTERFACE_UUID("{F4AE25B5-AAA3-437D-B6B3-DBBE2D0E9549}") IAcousticEchoCancellationControl  : public System::IInterface 
{
	virtual HRESULT __stdcall SetEchoCancellationRenderEndpoint(System::WideChar * endpointId) = 0 ;
};

__interface  INTERFACE_UUID("{24918ACC-64B3-37C1-8CA9-74A66E9957A8}") IAudioSessionEvents  : public System::IInterface 
{
	virtual HRESULT __stdcall OnDisplayNameChanged(System::WideChar * NewDisplayName, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall OnIconPathChanged(System::WideChar * NewIconPath, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall OnSimpleVolumeChanged(float NewVolume, System::LongBool NewMute, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall OnChannelVolumeChanged(unsigned ChannelCount, PFLOAT NewChannelVolumeArray, unsigned ChangedChannel, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall OnGroupingParamChanged(System::PGUID NewGroupingParam, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall OnStateChanged(AudioSessionState NewState) = 0 ;
	virtual HRESULT __stdcall OnSessionDisconnected(AudioSessionDisconnectReason DisconnectReason) = 0 ;
};

__interface  INTERFACE_UUID("{F4B1A599-7266-4319-A8CA-E70ACB11E8CD}") IAudioSessionControl  : public System::IInterface 
{
	virtual HRESULT __stdcall GetState(/* out */ AudioSessionState &pRetVal) = 0 ;
	virtual HRESULT __stdcall GetDisplayName(/* out */ System::WideChar * &pRetVal) = 0 ;
	virtual HRESULT __stdcall SetDisplayName(System::WideChar * Value, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall GetIconPath(/* out */ System::WideChar * &pRetVal) = 0 ;
	virtual HRESULT __stdcall SetIconPath(System::WideChar * Value, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall GetGroupingParam(/* out */ GUID &pRetVal) = 0 ;
	virtual HRESULT __stdcall SetGroupingParam(System::PGUID _Override, System::PGUID EventContext) = 0 ;
	virtual HRESULT __stdcall RegisterAudioSessionNotification(_di_IAudioSessionEvents NewNotifications) = 0 ;
	virtual HRESULT __stdcall UnregisterAudioSessionNotification(_di_IAudioSessionEvents NewNotifications) = 0 ;
};

__interface  INTERFACE_UUID("{BFB7FF88-7239-4FC9-8FA2-07C950BE9C6D}") IAudioSessionControl2  : public IAudioSessionControl 
{
	virtual HRESULT __stdcall GetSessionIdentifier(/* out */ System::WideChar * &pRetVal) = 0 ;
	virtual HRESULT __stdcall GetSessionInstanceIdentifier(/* out */ System::WideChar * &pRetVal) = 0 ;
	virtual HRESULT __stdcall GetProcessId(/* out */ unsigned &pRetVal) = 0 ;
	virtual HRESULT __stdcall IsSystemSoundsSession(void) = 0 ;
	virtual HRESULT __stdcall SetDuckingPreference(System::LongBool optOut) = 0 ;
};

__interface  INTERFACE_UUID("{E2F5BB11-0570-40CA-ACDD-3AA01277DEE8}") IAudioSessionEnumerator  : public System::IInterface 
{
	virtual HRESULT __stdcall GetCount(/* out */ int &SessionCount) = 0 ;
	virtual HRESULT __stdcall GetSession(int SessionCount, /* out */ _di_IAudioSessionControl &Session) = 0 ;
};

__interface  INTERFACE_UUID("{641DD20B-4D41-49CC-ABA3-174B9477BB08}") IAudioSessionNotification  : public System::IInterface 
{
	virtual HRESULT __stdcall OnSessionCreated(_di_IAudioSessionControl NewSession) = 0 ;
};

__interface  INTERFACE_UUID("{C3B284D4-6D39-4359-B3CF-B56DDB3BB39C}") IAudioVolumeDuckNotification  : public System::IInterface 
{
	virtual HRESULT __stdcall OnVolumeDuckNotification(System::WideChar * sessionID, unsigned countCommunicationSessions) = 0 ;
	virtual HRESULT __stdcall OnVolumeUnduckNotification(System::WideChar * sessionID) = 0 ;
};

__interface  INTERFACE_UUID("{BFA971F1-4D5E-40BB-935E-967039BFBEE4}") IAudioSessionManager  : public System::IInterface 
{
	virtual HRESULT __stdcall GetAudioSessionControl(System::PGUID AudioSessionGuid, unsigned StreamFlags, /* out */ _di_IAudioSessionControl &SessionControl) = 0 ;
	virtual HRESULT __stdcall GetSimpleAudioVolume(System::PGUID AudioSessionGuid, unsigned StreamFlags, /* out */ _di_ISimpleAudioVolume &AudioVolume) = 0 ;
};

__interface  INTERFACE_UUID("{77AA99A0-1BD6-484F-8BC7-2C654C9A9B6F}") IAudioSessionManager2  : public IAudioSessionManager 
{
	virtual HRESULT __stdcall GetSessionEnumerator(/* out */ _di_IAudioSessionEnumerator &SessionEnum) = 0 ;
	virtual HRESULT __stdcall RegisterSessionNotification(_di_IAudioSessionNotification SessionNotification) = 0 ;
	virtual HRESULT __stdcall UnregisterSessionNotification(_di_IAudioSessionNotification SessionNotification) = 0 ;
	virtual HRESULT __stdcall RegisterDuckNotification(System::WideChar * sessionID, _di_IAudioVolumeDuckNotification duckNotification) = 0 ;
	virtual HRESULT __stdcall UnregisterDuckNotification(_di_IAudioVolumeDuckNotification duckNotification) = 0 ;
};

enum DECLSPEC_DENUM AudioPlaybackConnectionState : unsigned int { AudioPlaybackConnectionState_Closed, AudioPlaybackConnectionState_Opened };

enum DECLSPEC_DENUM AudioPlaybackConnectionOpenResultStatus : unsigned int { AudioPlaybackConnectionOpenResultStatus_Success, AudioPlaybackConnectionOpenResultStatus_RequestTimedOut, AudioPlaybackConnectionOpenResultStatus_DeniedBySystem, AudioPlaybackConnectionOpenResultStatus_UnknownFailure };

__interface  INTERFACE_UUID("{4E656AEF-39F9-5FC9-A519-A5BBFD9FE921}") IAudioPlaybackConnectionOpenResult  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall get_Status(/* out */ AudioPlaybackConnectionOpenResultStatus &value) = 0 ;
	virtual HRESULT __stdcall get_ExtendedError(/* out */ HRESULT &value) = 0 ;
};

__interface  INTERFACE_UUID("{56DDB54D-EB8D-5FFB-A54B-8FAF918C8031}") IAudioPlaybackConnectionOpenAsyncOperationCompletedHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IAudioPlaybackConnectionOpenAsyncOperation asyncInfo, Wclwinapi::AsyncStatus asyncStatus) = 0 ;
};

__interface  INTERFACE_UUID("{F5245F8A-3DD1-56B2-829B-9888251D689C}") IAudioPlaybackConnectionOpenAsyncOperation  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall put_Completed(_di_IAudioPlaybackConnectionOpenAsyncOperationCompletedHandler handler) = 0 ;
	virtual HRESULT __stdcall get_Completed(/* out */ _di_IAudioPlaybackConnectionOpenAsyncOperationCompletedHandler &result) = 0 ;
	virtual HRESULT __stdcall GetResults(/* out */ _di_IAudioPlaybackConnectionOpenResult &result) = 0 ;
};

__interface  INTERFACE_UUID("{0E389B05-31A6-58F1-9EA4-0C1E4D70A7B8}") IAudioPlaybackConnectionEventHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall Invoke(_di_IAudioPlaybackConnection sender, Wclwinapi::_di_IInspectable args) = 0 ;
};

__interface  INTERFACE_UUID("{1A4C1DEA-CAFC-50E7-8718-EA3F81CBFA51}") IAudioPlaybackConnection  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall Start(void) = 0 ;
	virtual HRESULT __stdcall StartAsync(/* out */ Wclwinapi::_di_IAsyncAction &operation) = 0 ;
	virtual HRESULT __stdcall get_DeviceId(/* out */ void * &value) = 0 ;
	virtual HRESULT __stdcall get_State(/* out */ AudioPlaybackConnectionState &value) = 0 ;
	virtual HRESULT __stdcall Open(/* out */ _di_IAudioPlaybackConnectionOpenResult &result) = 0 ;
	virtual HRESULT __stdcall OpenAsync(/* out */ _di_IAudioPlaybackConnectionOpenAsyncOperation &operation) = 0 ;
	virtual HRESULT __stdcall add_StateChanged(_di_IAudioPlaybackConnectionEventHandler handler, /* out */ Wclwinapi::EventRegistrationToken &token) = 0 ;
	virtual HRESULT __stdcall remove_StateChanged(const Wclwinapi::EventRegistrationToken token) = 0 ;
};

__interface  INTERFACE_UUID("{E60963A2-69E6-5FFC-9E13-824A85213DAF}") IAudioPlaybackConnectionStatics  : public Wclwinapi::IInspectable 
{
	virtual HRESULT __stdcall GetDeviceSelector(/* out */ void * &result) = 0 ;
	virtual HRESULT __stdcall TryCreateFromId(void * id, /* out */ _di_IAudioPlaybackConnection &result) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID CLSID_MMDeviceEnumerator;
extern DELPHI_PACKAGE GUID CLSID_PolicyConfigClient;
extern DELPHI_PACKAGE GUID CLSID_PolicyConfigVistaClient;
extern DELPHI_PACKAGE GUID KSPROPSETID_BtAudio;
static const System::Int8 DEVICE_STATE_ACTIVE = System::Int8(0x1);
static const System::Int8 DEVICE_STATE_DISABLED = System::Int8(0x2);
static const System::Int8 DEVICE_STATE_NOTPRESENT = System::Int8(0x4);
static const System::Int8 DEVICE_STATE_UNPLUGGED = System::Int8(0x8);
static const System::Int8 DEVICE_STATEMASK_ALL = System::Int8(0xf);
static const System::Int8 KSMETHOD_TYPE_NONE = System::Int8(0x0);
static const System::Int8 KSMETHOD_TYPE_READ = System::Int8(0x1);
static const System::Int8 KSMETHOD_TYPE_WRITE = System::Int8(0x2);
static const System::Int8 KSMETHOD_TYPE_MODIFY = System::Int8(0x3);
static const System::Int8 KSMETHOD_TYPE_SOURCE = System::Int8(0x4);
static const System::Int8 KSMETHOD_TYPE_SEND = System::Int8(0x1);
static const System::Word KSMETHOD_TYPE_SETSUPPORT = System::Word(0x100);
static const System::Word KSMETHOD_TYPE_BASICSUPPORT = System::Word(0x200);
static const int KSMETHOD_TYPE_TOPOLOGY = int(0x10000000);
static const System::Int8 KSPROPERTY_TYPE_GET = System::Int8(0x1);
static const System::Int8 KSPROPERTY_TYPE_SET = System::Int8(0x2);
static const System::Int8 KSPROPERTY_TYPE_GETPAYLOADSIZE = System::Int8(0x4);
static const System::Word KSPROPERTY_TYPE_SETSUPPORT = System::Word(0x100);
static const System::Word KSPROPERTY_TYPE_BASICSUPPORT = System::Word(0x200);
static const System::Word KSPROPERTY_TYPE_RELATIONS = System::Word(0x400);
static const System::Word KSPROPERTY_TYPE_SERIALIZESET = System::Word(0x800);
static const System::Word KSPROPERTY_TYPE_UNSERIALIZESET = System::Word(0x1000);
static const System::Word KSPROPERTY_TYPE_SERIALIZERAW = System::Word(0x2000);
static const System::Word KSPROPERTY_TYPE_UNSERIALIZERAW = System::Word(0x4000);
static const System::Word KSPROPERTY_TYPE_SERIALIZESIZE = System::Word(0x8000);
static const int KSPROPERTY_TYPE_DEFAULTVALUES = int(0x10000);
static const int KSPROPERTY_TYPE_TOPOLOGY = int(0x10000000);
static const int KSPROPERTY_TYPE_HIGHPRIORITY = int(0x8000000);
static const int KSPROPERTY_TYPE_FSFILTERSCOPE = int(0x40000000);
static const unsigned KSPROPERTY_TYPE_COPYPAYLOAD = unsigned(0x80000000);
static const System::Int8 ENDPOINT_HARDWARE_SUPPORT_VOLUME = System::Int8(0x1);
static const System::Int8 ENDPOINT_HARDWARE_SUPPORT_MUTE = System::Int8(0x2);
static const System::Int8 ENDPOINT_HARDWARE_SUPPORT_METER = System::Int8(0x4);
static const int AUDCLNT_STREAMFLAGS_CROSSPROCESS = int(0x10000);
static const int AUDCLNT_STREAMFLAGS_LOOPBACK = int(0x20000);
static const int AUDCLNT_STREAMFLAGS_EVENTCALLBACK = int(0x40000);
static const int AUDCLNT_STREAMFLAGS_NOPERSIST = int(0x80000);
static const int AUDCLNT_STREAMFLAGS_RATEADJUST = int(0x100000);
static const int AUDCLNT_STREAMFLAGS_SRC_DEFAULT_QUALITY = int(0x8000000);
static const unsigned AUDCLNT_STREAMFLAGS_AUTOCONVERTPCM = unsigned(0x80000000);
static const int AUDCLNT_SESSIONFLAGS_EXPIREWHENUNOWNED = int(0x10000000);
static const int AUDCLNT_SESSIONFLAGS_DISPLAY_HIDE = int(0x20000000);
static const int AUDCLNT_SESSIONFLAGS_DISPLAY_HIDEWHENEXPIRED = int(0x40000000);
static const System::Int8 AMBISONICS_PARAM_VERSION_1 = System::Int8(0x1);
static const int AUDCLNT_S_BUFFER_EMPTY = int(0x8890001);
static const int AUDCLNT_S_THREAD_ALREADY_REGISTERED = int(0x8890002);
static const int AUDCLNT_S_POSITION_STALLED = int(0x8890003);
static const int AUDCLNT_E_NOT_INITIALIZED = int(-2004287487);
static const int AUDCLNT_E_ALREADY_INITIALIZED = int(-2004287486);
static const int AUDCLNT_E_WRONG_ENDPOINT_TYPE = int(-2004287485);
static const int AUDCLNT_E_DEVICE_INVALIDATED = int(-2004287484);
static const int AUDCLNT_E_NOT_STOPPED = int(-2004287483);
static const int AUDCLNT_E_BUFFER_TOO_LARGE = int(-2004287482);
static const int AUDCLNT_E_OUT_OF_ORDER = int(-2004287481);
static const int AUDCLNT_E_UNSUPPORTED_FORMAT = int(-2004287480);
static const int AUDCLNT_E_INVALID_SIZE = int(-2004287479);
static const int AUDCLNT_E_DEVICE_IN_USE = int(-2004287478);
static const int AUDCLNT_E_BUFFER_OPERATION_PENDING = int(-2004287477);
static const int AUDCLNT_E_THREAD_NOT_REGISTERED = int(-2004287476);
static const int AUDCLNT_E_EXCLUSIVE_MODE_NOT_ALLOWED = int(-2004287474);
static const int AUDCLNT_E_ENDPOINT_CREATE_FAILED = int(-2004287473);
static const int AUDCLNT_E_SERVICE_NOT_RUNNING = int(-2004287472);
static const int AUDCLNT_E_EVENTHANDLE_NOT_EXPECTED = int(-2004287471);
static const int AUDCLNT_E_EXCLUSIVE_MODE_ONLY = int(-2004287470);
static const int AUDCLNT_E_BUFDURATION_PERIOD_NOT_EQUAL = int(-2004287469);
static const int AUDCLNT_E_EVENTHANDLE_NOT_SET = int(-2004287468);
static const int AUDCLNT_E_INCORRECT_BUFFER_SIZE = int(-2004287467);
static const int AUDCLNT_E_BUFFER_SIZE_ERROR = int(-2004287466);
static const int AUDCLNT_E_CPUUSAGE_EXCEEDED = int(-2004287465);
static const int AUDCLNT_E_BUFFER_ERROR = int(-2004287464);
static const int AUDCLNT_E_BUFFER_SIZE_NOT_ALIGNED = int(-2004287463);
static const int AUDCLNT_E_INVALID_DEVICE_PERIOD = int(-2004287456);
static const int AUDCLNT_E_INVALID_STREAM_FLAG = int(-2004287455);
static const int AUDCLNT_E_ENDPOINT_OFFLOAD_NOT_CAPABLE = int(-2004287454);
static const int AUDCLNT_E_OUT_OF_OFFLOAD_RESOURCES = int(-2004287453);
static const int AUDCLNT_E_OFFLOAD_MODE_ONLY = int(-2004287452);
static const int AUDCLNT_E_NONOFFLOAD_MODE_ONLY = int(-2004287451);
static const int AUDCLNT_E_RESOURCES_INVALIDATED = int(-2004287450);
static const int AUDCLNT_E_RAW_MODE_UNSUPPORTED = int(-2004287449);
static const int AUDCLNT_E_ENGINE_PERIODICITY_LOCKED = int(-2004287448);
static const int AUDCLNT_E_ENGINE_FORMAT_LOCKED = int(-2004287447);
static const int AUDCLNT_E_HEADTRACKING_ENABLED = int(-2004287440);
static const int AUDCLNT_E_HEADTRACKING_UNSUPPORTED = int(-2004287424);
static const int AUDCLNT_E_EFFECT_NOT_AVAILABLE = int(-2004287423);
static const int AUDCLNT_E_EFFECT_STATE_READ_ONLY = int(-2004287422);
#define AudioPlaybackConnectionName L"Windows.Media.Audio.AudioPlaybackConnection"
}	/* namespace Wclaudioapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLAUDIOAPI)
using namespace Wclaudioapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclaudioapiHPP
