// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclAudio.pas' rev: 30.00 (Windows)

#ifndef WclaudioHPP
#define WclaudioHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <wclAudioApi.hpp>
#include <wclWinAPI.hpp>
#include <wclMessaging.hpp>
#include <Winapi.Windows.hpp>
#include <wclSync.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclaudio
{
//-- forward type declarations -----------------------------------------------
struct TwclAudioDevice;
class DELPHICLASS TwclCustomAudio;
class DELPHICLASS TwclCustomAudioEndpoint;
class DELPHICLASS TwclAudioSwitcher;
class DELPHICLASS TwclAudioMeter;
class DELPHICLASS TwclAudioVolume;
class DELPHICLASS TwclBluetoothAudioWatcher;
class DELPHICLASS TwclBluetoothAudioReceiver;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TwclAudioDeviceDataFlow : unsigned int { dfRender, dfCapture };

enum DECLSPEC_DENUM TwclAudioDeviceRole : unsigned int { drConsole, drMultimedia, drCommunications };

typedef System::Set<TwclAudioDeviceRole, TwclAudioDeviceRole::drConsole, TwclAudioDeviceRole::drCommunications> TwclAudioDeviceRoles;

enum DECLSPEC_DENUM TwclAudioDeviceState : unsigned int { asActive, asDisabled, asNotPresent, asUnplugged };

typedef System::Set<TwclAudioDeviceState, TwclAudioDeviceState::asActive, TwclAudioDeviceState::asUnplugged> TwclAudioDeviceStates;

enum DECLSPEC_DENUM TwclAudioHardwareFeature : unsigned int { hfVolume, hfMute, hfMeter };

typedef System::Set<TwclAudioHardwareFeature, TwclAudioHardwareFeature::hfVolume, TwclAudioHardwareFeature::hfMeter> TwclAudioHardwareFeatures;

struct DECLSPEC_DRECORD TwclAudioDevice
{
public:
	System::UnicodeString Id;
	System::UnicodeString FriendlyName;
	System::UnicodeString Description;
	TwclAudioDeviceDataFlow Flow;
	TwclAudioDeviceRoles Roles;
	TwclAudioDeviceState State;
	bool IsBluetooth;
	__int64 Mac;
	GUID Service;
};


typedef System::DynamicArray<TwclAudioDevice> TwclAudioDevices;

typedef System::DynamicArray<float> TwclAudioPeakValues;

enum DECLSPEC_DENUM TwclBluetoothAudioReceiverState : unsigned int { arClosed, arOpening, arListen, arConnecting, arConnected, arClosing };

typedef void __fastcall (__closure *TwclAudioDefaultDeviceChangedEvent)(System::TObject* Sender, const System::UnicodeString Id, const TwclAudioDeviceDataFlow Flow, const TwclAudioDeviceRole Role);

typedef void __fastcall (__closure *TwclAudioDeviceEvent)(System::TObject* Sender, const System::UnicodeString Id);

typedef void __fastcall (__closure *TwclAudioDeviceStateChangedEvent)(System::TObject* Sender, const System::UnicodeString Id, const TwclAudioDeviceState State);

typedef void __fastcall (__closure *TwclAudioVolumeChangedEvent)(System::TObject* Sender, const bool Muted, const float Volume, const TwclAudioPeakValues Volumes);

typedef void __fastcall (__closure *TwclBluetoothAudioDeviceAddedEvent)(System::TObject* Sender, const System::UnicodeString Id, const System::UnicodeString Name);

typedef void __fastcall (__closure *TwclBluetoothAudioDeviceRemovedEvent)(System::TObject* Sender, const System::UnicodeString Id);

class PASCALIMPLEMENTATION TwclCustomAudio : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Wclaudioapi::_di_IMMDeviceEnumerator FEnumerator;
	Wclaudioapi::_di_IMMNotificationClient FEventHandler;
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	System::Classes::TNotifyEvent FOnClosed;
	System::Classes::TNotifyEvent FOnOpened;
	bool __fastcall GetActive(void);
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	
protected:
	virtual int __fastcall InternalClose(void);
	virtual int __fastcall InternalOpen(void);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoClosed(void);
	virtual void __fastcall DoOpened(void);
	virtual int __fastcall Open(void);
	__property Wclaudioapi::_di_IMMDeviceEnumerator Enumerator = {read=FEnumerator};
	__property Wclmessaging::TwclMessageReceiver* Receiver = {read=FReceiver};
	
public:
	__fastcall virtual TwclCustomAudio(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclCustomAudio(void);
	virtual int __fastcall Close(void);
	__property bool Active = {read=GetActive, nodefault};
	
__published:
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
	__property System::Classes::TNotifyEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property System::Classes::TNotifyEvent OnOpened = {read=FOnOpened, write=FOnOpened};
};


class PASCALIMPLEMENTATION TwclCustomAudioEndpoint : public TwclCustomAudio
{
	typedef TwclCustomAudio inherited;
	
private:
	System::UnicodeString FId;
	System::Classes::TNotifyEvent FOnDisconnected;
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoDisconnected(void);
	
public:
	__fastcall virtual TwclCustomAudioEndpoint(System::Classes::TComponent* AOwner);
	virtual int __fastcall Close(void);
	HIDESBASE int __fastcall Open(const System::UnicodeString Id);
	virtual int __fastcall GetChannels(/* out */ unsigned &Count) = 0 ;
	virtual int __fastcall GetHardwareFeatures(/* out */ TwclAudioHardwareFeatures &Features) = 0 ;
	__property System::UnicodeString Id = {read=FId};
	
__published:
	__property System::Classes::TNotifyEvent OnDisconnected = {read=FOnDisconnected, write=FOnDisconnected};
public:
	/* TwclCustomAudio.Destroy */ inline __fastcall virtual ~TwclCustomAudioEndpoint(void) { }
	
};


class PASCALIMPLEMENTATION TwclAudioSwitcher : public TwclCustomAudio
{
	typedef TwclCustomAudio inherited;
	
private:
	TwclAudioDefaultDeviceChangedEvent FOnDefaultDeviceChanged;
	TwclAudioDeviceEvent FOnDeviceAdded;
	TwclAudioDeviceEvent FOnDeviceRemoved;
	TwclAudioDeviceStateChangedEvent FOnStateChanged;
	void __fastcall GetBluetoothDetails(TwclAudioDevice &Device);
	bool __fastcall GetDeviceProps(const Wclaudioapi::_di_IMMDevice MMDevice, /* out */ TwclAudioDevice &Device);
	TwclAudioDeviceRoles __fastcall GetRoles(const Wclaudioapi::EDataFlow Flow, const System::UnicodeString Id);
	int __fastcall EnumDevices(const TwclAudioDeviceStates States, TwclAudioDevices &Devices);
	int __fastcall CheckDeviceState(const System::UnicodeString Id, const bool Connect);
	int __fastcall ChangeDeviceState(const System::UnicodeString Id, const bool Connect);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoDefaultDeviceChanged(const System::UnicodeString Id, const TwclAudioDeviceDataFlow Flow, const TwclAudioDeviceRole Role);
	virtual void __fastcall DoDeviceAdded(const System::UnicodeString Id);
	virtual void __fastcall DoDeviceRemoved(const System::UnicodeString Id);
	virtual void __fastcall DoStateChanged(const System::UnicodeString Id, const TwclAudioDeviceState State);
	
public:
	__fastcall virtual TwclAudioSwitcher(System::Classes::TComponent* AOwner);
	virtual int __fastcall Open(void);
	int __fastcall Enum(const TwclAudioDeviceStates States, /* out */ TwclAudioDevices &Devices);
	int __fastcall GetDeviceDetails(const System::UnicodeString Id, /* out */ TwclAudioDevice &Device);
	int __fastcall GetDefault(const TwclAudioDeviceRole Role, const TwclAudioDeviceDataFlow Flow, /* out */ System::UnicodeString &Id);
	int __fastcall SetDefault(const TwclAudioDeviceRole Role, const System::UnicodeString Id);
	int __fastcall Connect(const System::UnicodeString Id)/* overload */;
	int __fastcall Connect(const __int64 Address)/* overload */;
	int __fastcall Disconnect(const System::UnicodeString Id)/* overload */;
	int __fastcall Disconnect(const __int64 Address)/* overload */;
	
__published:
	__property TwclAudioDefaultDeviceChangedEvent OnDefaultDeviceChanged = {read=FOnDefaultDeviceChanged, write=FOnDefaultDeviceChanged};
	__property TwclAudioDeviceEvent OnDeviceAdded = {read=FOnDeviceAdded, write=FOnDeviceAdded};
	__property TwclAudioDeviceEvent OnDeviceRemoved = {read=FOnDeviceRemoved, write=FOnDeviceRemoved};
	__property TwclAudioDeviceStateChangedEvent OnStateChanged = {read=FOnStateChanged, write=FOnStateChanged};
public:
	/* TwclCustomAudio.Destroy */ inline __fastcall virtual ~TwclAudioSwitcher(void) { }
	
};


class PASCALIMPLEMENTATION TwclAudioMeter : public TwclCustomAudioEndpoint
{
	typedef TwclCustomAudioEndpoint inherited;
	
private:
	Wclaudioapi::_di_IAudioMeterInformation FMeter;
	
protected:
	virtual int __fastcall InternalClose(void);
	virtual int __fastcall InternalOpen(void);
	
public:
	__fastcall virtual TwclAudioMeter(System::Classes::TComponent* AOwner);
	virtual int __fastcall GetChannels(/* out */ unsigned &Count);
	int __fastcall GetChannelsPeak(/* out */ TwclAudioPeakValues &Values);
	virtual int __fastcall GetHardwareFeatures(/* out */ TwclAudioHardwareFeatures &Features);
	int __fastcall GetPeak(/* out */ float &Value);
public:
	/* TwclCustomAudio.Destroy */ inline __fastcall virtual ~TwclAudioMeter(void) { }
	
};


class PASCALIMPLEMENTATION TwclAudioVolume : public TwclCustomAudioEndpoint
{
	typedef TwclCustomAudioEndpoint inherited;
	
private:
	GUID FContext;
	Wclaudioapi::_di_IAudioEndpointVolume FVolume;
	Wclaudioapi::_di_IAudioEndpointVolumeCallback FVolumeCallback;
	TwclAudioVolumeChangedEvent FOnChanged;
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual int __fastcall InternalClose(void);
	virtual int __fastcall InternalOpen(void);
	virtual void __fastcall DoChanged(const bool Muted, const float Volume, const TwclAudioPeakValues Volumes);
	
public:
	__fastcall virtual TwclAudioVolume(System::Classes::TComponent* AOwner);
	virtual int __fastcall GetChannels(/* out */ unsigned &Count);
	virtual int __fastcall GetHardwareFeatures(/* out */ TwclAudioHardwareFeatures &Features);
	int __fastcall GetChannelVolume(const unsigned Channel, /* out */ float &Volume);
	int __fastcall GetMute(/* out */ bool &Mute);
	int __fastcall GetVolume(/* out */ float &Volume);
	int __fastcall SetChannelVolume(const unsigned Channel, const float Value);
	int __fastcall SetMute(const bool Mute);
	int __fastcall SetVolume(const float Value);
	
__published:
	__property TwclAudioVolumeChangedEvent OnChanged = {read=FOnChanged, write=FOnChanged};
public:
	/* TwclCustomAudio.Destroy */ inline __fastcall virtual ~TwclAudioVolume(void) { }
	
};


class PASCALIMPLEMENTATION TwclBluetoothAudioWatcher : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	Wclsync::TwclManualResetEvent* FInitEvent;
	int FInitResult;
	Wclsync::TwclManualResetEvent* FTermEvent;
	Wclsync::TwclThread* FThread;
	TwclBluetoothAudioDeviceAddedEvent FOnDeviceAdded;
	TwclBluetoothAudioDeviceRemovedEvent FOnDeviceRemoved;
	System::Classes::TNotifyEvent FOnStarted;
	System::Classes::TNotifyEvent FOnStopped;
	bool __fastcall GetActive(void);
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	void __fastcall ThreadProc(void);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoDeviceAdded(const System::UnicodeString Id, const System::UnicodeString Name);
	virtual void __fastcall DoDeviceRemoved(const System::UnicodeString Id);
	virtual void __fastcall DoStarted(void);
	virtual void __fastcall DoStopped(void);
	
public:
	__fastcall virtual TwclBluetoothAudioWatcher(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclBluetoothAudioWatcher(void);
	int __fastcall Start(void);
	int __fastcall Stop(void);
	__property bool Active = {read=GetActive, nodefault};
	
__published:
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
	__property TwclBluetoothAudioDeviceAddedEvent OnDeviceAdded = {read=FOnDeviceAdded, write=FOnDeviceAdded};
	__property TwclBluetoothAudioDeviceRemovedEvent OnDeviceRemoved = {read=FOnDeviceRemoved, write=FOnDeviceRemoved};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
	__property System::Classes::TNotifyEvent OnStopped = {read=FOnStopped, write=FOnStopped};
};


class PASCALIMPLEMENTATION TwclBluetoothAudioReceiver : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString FId;
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	TwclBluetoothAudioReceiverState FState;
	Wclaudioapi::_di_IAudioPlaybackConnection FConnection;
	Wclwinapi::EventRegistrationToken FToken;
	Wclsync::TwclManualResetEvent* FInitEvent;
	int FInitResult;
	Wclsync::TwclManualResetEvent* FTermEvent;
	Wclsync::TwclThread* FThread;
	System::Classes::TNotifyEvent FOnClosed;
	System::Classes::TNotifyEvent FOnConnected;
	System::Classes::TNotifyEvent FOnDisconnected;
	System::Classes::TNotifyEvent FOnListen;
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	int __fastcall CreateConnection(void);
	int __fastcall AddEventHandler(void);
	void __fastcall RemoveEventHandler(void);
	void __fastcall DestroyConnection(void);
	void __fastcall ThreadProc(void);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoClosed(void);
	virtual void __fastcall DoConnected(void);
	virtual void __fastcall DoDisconnected(void);
	virtual void __fastcall DoListen(void);
	
public:
	__fastcall virtual TwclBluetoothAudioReceiver(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TwclBluetoothAudioReceiver(void);
	int __fastcall Close(void);
	int __fastcall Listen(const System::UnicodeString Id);
	int __fastcall Connect(void);
	__property System::UnicodeString Id = {read=FId};
	__property TwclBluetoothAudioReceiverState State = {read=FState, nodefault};
	
__published:
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, default=1};
	__property System::Classes::TNotifyEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property System::Classes::TNotifyEvent OnConnected = {read=FOnConnected, write=FOnConnected};
	__property System::Classes::TNotifyEvent OnDisconnected = {read=FOnDisconnected, write=FOnDisconnected};
	__property System::Classes::TNotifyEvent OnListen = {read=FOnListen, write=FOnListen};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wclaudio */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLAUDIO)
using namespace Wclaudio;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclaudioHPP
