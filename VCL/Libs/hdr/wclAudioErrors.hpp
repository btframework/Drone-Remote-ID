// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclAudioErrors.pas' rev: 30.00 (Windows)

#ifndef WclaudioerrorsHPP
#define WclaudioerrorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <wclErrors.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclaudioerrors
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS wclEAudio;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEAudio : public Wclerrors::wclException
{
	typedef Wclerrors::wclException inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEAudio(const System::UnicodeString Msg) : Wclerrors::wclException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEAudio(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Wclerrors::wclException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEAudio(NativeUInt Ident)/* overload */ : Wclerrors::wclException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEAudio(System::PResStringRec ResStringRec)/* overload */ : Wclerrors::wclException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEAudio(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Wclerrors::wclException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEAudio(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Wclerrors::wclException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEAudio(const System::UnicodeString Msg, int AHelpContext) : Wclerrors::wclException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEAudio(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Wclerrors::wclException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEAudio(NativeUInt Ident, int AHelpContext)/* overload */ : Wclerrors::wclException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEAudio(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Wclerrors::wclException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEAudio(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Wclerrors::wclException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEAudio(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Wclerrors::wclException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEAudio(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int WCL_E_AUDIO_BASE = int(0x80000);
static const int WCL_E_AUDIO_COM_INIT_FAILED = int(0x80000);
static const int WCL_E_AUDIO_CREATE_ENUMERATOR_FAILED = int(0x80001);
static const int WCL_E_AUDIO_FEATURE_NOT_SUPPORTED = int(0x80002);
static const int WCL_E_AUDIO_CLOSED = int(0x80003);
static const int WCL_E_AUDIO_OPENED = int(0x80004);
static const int WCL_E_AUDIO_REGISTER_EVENT_FAILED = int(0x80005);
static const int WCL_E_AUDIO_ENDPOINT_NOT_FOUND = int(0x80006);
static const int WCL_E_AUDIO_GET_CHANNELS_COUNT_FAILED = int(0x80007);
static const int WCL_E_AUDIO_GET_HARDWARE_FEATURES_FAILED = int(0x80008);
static const int WCL_E_AUDIO_SWITCHER_BASE = int(0x81000);
static const int WCL_E_AUDIO_SWITCHER_NOT_OPENED = int(0x81000);
static const int WCL_E_AUDIO_SWITCHER_ENUM_ENDPOINTS_FAILED = int(0x81001);
static const int WCL_E_AUDIO_SWITCHER_GET_ENDPOIN_COUNT_FAILED = int(0x81002);
static const int WCL_E_AUDIO_SWITCHER_CREATE_CONFIGURATOR_FAILED = int(0x81003);
static const int WCL_E_AUDIO_SWITCHER_SET_DEFAULT_DEVICE_FAILED = int(0x81004);
static const int WCL_E_AUDIO_SWITCHER_DEVICE_NOT_FOUND = int(0x81005);
static const int WCL_E_AUDIO_SWITCHER_INVALID_DEVICE = int(0x81006);
static const int WCL_E_AUDIO_SWITCHER_DEVICE_CONNECTED = int(0x81007);
static const int WCL_E_AUDIO_SWITCHER_DEVICE_DISCONNECTED = int(0x81008);
static const int WCL_E_AUDIO_SWITCHER_CREATE_TOPOLOGY_FAILED = int(0x81009);
static const int WCL_E_AUDIO_SWITCHER_GET_CONNECTORS_COUNT_FAILED = int(0x8100a);
static const int WCL_E_AUDIO_SWITCHER_CONNECT_FAILED = int(0x8100b);
static const int WCL_E_AUDIO_SWITCHER_DISCONNECT_FAILED = int(0x8100c);
static const int WCL_E_AUDIO_SWITCHER_NO_CONNECTORS_FOUND = int(0x8100d);
static const int WCL_E_AUDIO_SWITCHER_GET_DEFAULT_DEVICE_FAILED = int(0x8100e);
static const int WCL_E_AUDIO_SWITCHER_GET_DEVICE_ID_FAILED = int(0x8100f);
static const int WCL_E_AUDIO_SWITCHER_DEFAULT_DEVICE_NOT_FOUND = int(0x81010);
static const int WCL_E_AUDIO_METER_BASE = int(0x82000);
static const int WCL_E_AUDIO_METER_GET_PEAK_VALUE_FAILED = int(0x82000);
static const int WCL_E_AUDIO_METER_CREATE_FAILED = int(0x82001);
static const int WCL_E_AUDIO_VOLUME_BASE = int(0x83000);
static const int WCL_E_AUDIO_VOLUME_CREATE_FAILED = int(0x83000);
static const int WCL_E_AUDIO_VOLUME_GET_VOLUME_FAILED = int(0x83001);
static const int WCL_E_AUDIO_VOLUME_SET_VOLUME_FAILED = int(0x83002);
static const int WCL_E_AUDIO_VOLUME_GET_MUTE_FAILED = int(0x83003);
static const int WCL_E_AUDIO_VOLUME_SET_MUTE_FAILED = int(0x83004);
static const int WCL_E_BT_AUDIO_BASE = int(0x84000);
static const int WCL_E_BT_AUDIO_FEATURE_NOT_SUPPORTED = int(0x84000);
static const int WCL_E_BT_AUDIO_WATCHER_BASE = int(0x84100);
static const int WCL_E_BT_AUDIO_WATCHER_STARTED = int(0x84100);
static const int WCL_E_BT_AUDIO_WATCHER_STOPPED = int(0x84101);
static const int WCL_E_BT_AUDIO_WATCHER_CREATE_INIT_EVENT_FAILED = int(0x84102);
static const int WCL_E_BT_AUDIO_WATCHER_CREATE_TERM_EVENT_FAILED = int(0x84103);
static const int WCL_E_BT_AUDIO_WATCHER_START_THREAD_FAILED = int(0x84104);
static const int WCL_E_BT_AUDIO_WATCHER_GET_SELECTOR_FAILED = int(0x84105);
static const int WCL_E_BT_AUDIO_WATCHER_CREATE_FAILED = int(0x84106);
static const int WCL_E_BT_AUDIO_WATCHER_SET_ADDED_EVENT_FAILED = int(0x84107);
static const int WCL_E_BT_AUDIO_WATCHER_SET_REMOVED_EVENT_FAILED = int(0x84108);
static const int WCL_E_BT_AUDIO_WATCHER_START_FAILED = int(0x84109);
static const int WCL_E_BT_AUDIO_RECEIVER_BASE = int(0x84200);
static const int WCL_E_BT_AUDIO_RECEIVER_CLOSED = int(0x84200);
static const int WCL_E_BT_AUDIO_RECEIVER_OPENED = int(0x84201);
static const int WCL_E_BT_AUDIO_RECEIVER_CREATE_INIT_EVENT_FAILED = int(0x84202);
static const int WCL_E_BT_AUDIO_RECEIVER_CREATE_TERM_EVENT_FAILED = int(0x84203);
static const int WCL_E_BT_AUDIO_RECEIVER_START_THREAD_FAILED = int(0x84204);
static const int WCL_E_BT_AUDIO_RECEIVER_CREATE_CONNECTION_FAILED = int(0x84205);
static const int WCL_E_BT_AUDIO_RECEIVER_SET_EVENT_HANDLER_FAILED = int(0x84206);
static const int WCL_E_BT_AUDIO_RECEIVER_ENABLE_FAILED = int(0x84207);
static const int WCL_E_BT_AUDIO_RECEIVER_DEVICE_CONNECTED = int(0x84208);
static const int WCL_E_BT_AUDIO_RECEIVER_START_CONNECT_FAILED = int(0x84209);
static const int WCL_E_BT_AUDIO_RECEIVER_START_TIMEOUT = int(0x8420a);
static const int WCL_E_BT_AUDIO_RECEIVER_START_DENIED = int(0x8420b);
static const int WCL_E_BT_AUDIO_RECEIVER_START_UNKNOWN_FAILED = int(0x8420c);
}	/* namespace Wclaudioerrors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLAUDIOERRORS)
using namespace Wclaudioerrors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclaudioerrorsHPP
