// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclWiFiErrors.pas' rev: 30.00 (Windows)

#ifndef WclwifierrorsHPP
#define WclwifierrorsHPP

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

namespace Wclwifierrors
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS wclEWiFi;
class DELPHICLASS wclEWiFiEvents;
class DELPHICLASS wclEWiFiSniffer;
class DELPHICLASS wclEWiFiDirect;
class DELPHICLASS wclEWiFiNlm;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEWiFi : public Wclerrors::wclException
{
	typedef Wclerrors::wclException inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEWiFi(const System::UnicodeString Msg) : Wclerrors::wclException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEWiFi(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Wclerrors::wclException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFi(NativeUInt Ident)/* overload */ : Wclerrors::wclException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFi(System::PResStringRec ResStringRec)/* overload */ : Wclerrors::wclException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFi(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Wclerrors::wclException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFi(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Wclerrors::wclException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEWiFi(const System::UnicodeString Msg, int AHelpContext) : Wclerrors::wclException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEWiFi(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Wclerrors::wclException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFi(NativeUInt Ident, int AHelpContext)/* overload */ : Wclerrors::wclException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFi(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Wclerrors::wclException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFi(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Wclerrors::wclException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFi(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Wclerrors::wclException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEWiFi(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEWiFiEvents : public wclEWiFi
{
	typedef wclEWiFi inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEWiFiEvents(const System::UnicodeString Msg) : wclEWiFi(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEWiFiEvents(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEWiFi(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFiEvents(NativeUInt Ident)/* overload */ : wclEWiFi(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFiEvents(System::PResStringRec ResStringRec)/* overload */ : wclEWiFi(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFiEvents(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEWiFi(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFiEvents(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEWiFi(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEWiFiEvents(const System::UnicodeString Msg, int AHelpContext) : wclEWiFi(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEWiFiEvents(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEWiFi(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFiEvents(NativeUInt Ident, int AHelpContext)/* overload */ : wclEWiFi(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFiEvents(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEWiFi(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFiEvents(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEWiFi(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFiEvents(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEWiFi(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEWiFiEvents(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEWiFiSniffer : public wclEWiFi
{
	typedef wclEWiFi inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEWiFiSniffer(const System::UnicodeString Msg) : wclEWiFi(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEWiFiSniffer(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEWiFi(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFiSniffer(NativeUInt Ident)/* overload */ : wclEWiFi(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFiSniffer(System::PResStringRec ResStringRec)/* overload */ : wclEWiFi(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFiSniffer(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEWiFi(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFiSniffer(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEWiFi(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEWiFiSniffer(const System::UnicodeString Msg, int AHelpContext) : wclEWiFi(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEWiFiSniffer(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEWiFi(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFiSniffer(NativeUInt Ident, int AHelpContext)/* overload */ : wclEWiFi(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFiSniffer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEWiFi(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFiSniffer(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEWiFi(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFiSniffer(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEWiFi(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEWiFiSniffer(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEWiFiDirect : public wclEWiFi
{
	typedef wclEWiFi inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEWiFiDirect(const System::UnicodeString Msg) : wclEWiFi(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEWiFiDirect(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEWiFi(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFiDirect(NativeUInt Ident)/* overload */ : wclEWiFi(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFiDirect(System::PResStringRec ResStringRec)/* overload */ : wclEWiFi(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFiDirect(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEWiFi(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFiDirect(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEWiFi(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEWiFiDirect(const System::UnicodeString Msg, int AHelpContext) : wclEWiFi(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEWiFiDirect(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEWiFi(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFiDirect(NativeUInt Ident, int AHelpContext)/* overload */ : wclEWiFi(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFiDirect(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEWiFi(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFiDirect(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEWiFi(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFiDirect(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEWiFi(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEWiFiDirect(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEWiFiNlm : public wclEWiFi
{
	typedef wclEWiFi inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEWiFiNlm(const System::UnicodeString Msg) : wclEWiFi(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEWiFiNlm(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEWiFi(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFiNlm(NativeUInt Ident)/* overload */ : wclEWiFi(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEWiFiNlm(System::PResStringRec ResStringRec)/* overload */ : wclEWiFi(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFiNlm(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEWiFi(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEWiFiNlm(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEWiFi(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEWiFiNlm(const System::UnicodeString Msg, int AHelpContext) : wclEWiFi(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEWiFiNlm(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEWiFi(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFiNlm(NativeUInt Ident, int AHelpContext)/* overload */ : wclEWiFi(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEWiFiNlm(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEWiFi(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFiNlm(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEWiFi(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEWiFiNlm(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEWiFi(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEWiFiNlm(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int WCL_E_WLAN_BASE = int(0x20000);
static const int WCL_E_WLAN_UNABLE_LOAD = int(0x20000);
static const int WCL_E_WLAN_NOT_LOADED = int(0x20001);
static const int WCL_E_WLAN_UNABLE_CREATE_MUTEX = int(0x20002);
static const int WCL_E_WIFI_BASE = int(0x21000);
static const int WCL_E_WIFI_OPENED = int(0x21000);
static const int WCL_E_WIFI_CLOSED = int(0x21001);
static const int WCL_E_WIFI_NOT_ACTIVE = int(0x21002);
static const int WCL_E_WIFI_FUNCTION_NOT_FOUND = int(0x21003);
static const int WCL_E_WIFI_ACCESS_DENIED = int(0x21004);
static const int WCL_E_WIFI_INVALID_CLIENT_HANDLE = int(0x21005);
static const int WCL_E_WIFI_NOT_ENOUGH_MEMORY = int(0x21006);
static const int WCL_E_WIFI_NOT_SUPPORTED = int(0x21007);
static const int WCL_E_WIFI_UNEXPECTED = int(0x21008);
static const int WCL_E_WIFI_INVALID_ARGUMENT = int(0x21009);
static const int WCL_E_WIFI_NOT_AVAILABLE = int(0x2100a);
static const int WCL_E_WIFI_TOO_MANY_SESSIONS = int(0x2100b);
static const int WCL_E_WIFI_INVALID_STATE = int(0x2100c);
static const int WCL_E_WIFI_RADIO_OFF = int(0x2100d);
static const int WCL_E_WIFI_RPC_SUBSYSTEM = int(0x2100e);
static const int WCL_E_WIFI_PHY_NOT_FOUND = int(0x2100f);
static const int WCL_E_WIFI_BAD_CONFIGURATION = int(0x21010);
static const int WCL_E_WIFI_NOT_FOUND = int(0x21011);
static const int WCL_E_WIFI_ALREADY_EXISTS = int(0x21012);
static const int WCL_E_WIFI_BAD_PROFILE = int(0x21013);
static const int WCL_E_WIFI_NO_MATCH = int(0x21014);
static const int WCL_E_WIFI_DATA_NOT_FOUND = int(0x21015);
static const int WCL_E_WIFI_CREATE_THREAD_FAILED = int(0x21016);
static const int WCL_E_WIFI_GET_THREAD_RESULT_FAILED = int(0x21017);
static const int WCL_E_WIFI_START_ASYNC_OPERATION_FAILED = int(0x21018);
static const int WCL_E_WIFI_WAIT_ASYNC_OPERATION_FAILED = int(0x21019);
static const int WCL_E_WIFI_GET_ASYNC_RESULT_FAILED = int(0x2101a);
static const int WCL_E_WIFI_GET_SIZE_FAILED = int(0x2101b);
static const int WCL_E_WIFI_CHANGE_STATE_FAILED = int(0x2101c);
static const int WCL_E_WIFI_FEATURE_NOT_SUPPORTED = int(0x2101d);
static const int WCL_E_WIFI_ONE_OF_MORE_BSS_IS_INVALID = int(0x2101e);
static const int WCL_E_WIFI_PATH_NOT_FOUND = int(0x2101f);
static const int WCL_E_WIFI_INVALID_DATA = int(0x21020);
static const int WCL_E_WIFI_BAD_ARGUMENTS = int(0x21021);
static const int WCL_E_WIFI_CANTOPEN = int(0x21022);
static const int WCL_E_WIFI_DATATYPE_MISMATCH = int(0x21023);
static const int WCL_E_WIFI_ACCESS_DENIED_BY_SYSTEM = int(0x21024);
static const int WCL_E_WIFI_ACCESS_DENIED_BY_USER = int(0x21025);
static const int WCL_E_WIFI_EAP_BASE = int(0x21100);
static const int WCL_E_WIFI_EAP_USER_ACCOUNT_OTHER_ERROR = int(0x21100);
static const int WCL_E_WIFI_EAP_CERT_STORE_INACCESSIBLE = int(0x21101);
static const int WCL_E_WIFI_EAP_HOST_METHOD_NOT_INSTALLED = int(0x21102);
static const int WCL_E_WIFI_EAP_HOST_QEC_INACCESSIBLE = int(0x21103);
static const int WCL_E_WIFI_EAP_HOST_IDENTITY_UNKNOWN = int(0x21104);
static const int WCL_E_WIFI_EAP_AUTHENTICATION_FAILED = int(0x21105);
static const int WCL_E_WIFI_EAP_HOST_NEGOTIATION_FAILED = int(0x21106);
static const int WCL_E_WIFI_EAP_HOST_METHOD_INVALID_PACKET = int(0x21107);
static const int WCL_E_WIFI_EAP_HOST_REMOTE_INVALID_PACKET = int(0x21108);
static const int WCL_E_WIFI_EAP_HOST_XML_MALFORMED = int(0x21109);
static const int WCL_E_WIFI_EAP_METHOD_CONFIG_DOES_NOT_SUPPORT_SSO = int(0x2110a);
static const int WCL_E_WIFI_EAP_HOST_METHOD_OPERATION_NOT_SUPPORTED = int(0x2110b);
static const int WCL_E_WIFI_EAP_USER_CERT_NOT_FOUND = int(0x2110c);
static const int WCL_E_WIFI_EAP_USER_CERT_INVALID = int(0x2110d);
static const int WCL_E_WIFI_EAP_USER_CERT_EXPIRED = int(0x2110e);
static const int WCL_E_WIFI_EAP_USER_CERT_REVOKED = int(0x2110f);
static const int WCL_E_WIFI_EAP_USER_CERT_OTHER_ERROR = int(0x21110);
static const int WCL_E_WIFI_EAP_USER_CERT_REJECTED = int(0x21111);
static const int WCL_E_WIFI_EAP_USER_CREDENTIALS_REJECTED = int(0x21112);
static const int WCL_E_WIFI_EAP_USER_NAME_PASSWORD_REJECTED = int(0x21113);
static const int WCL_E_WIFI_EAP_NO_SMART_CARD_READER = int(0x21114);
static const int WCL_E_WIFI_EAP_SERVER_CERT_INVALID = int(0x21115);
static const int WCL_E_WIFI_EAP_SERVER_CERT_EXPIRED = int(0x21116);
static const int WCL_E_WIFI_EAP_SERVER_CERT_REVOKED = int(0x21117);
static const int WCL_E_WIFI_EAP_SERVER_CERT_OTHER_ERROR = int(0x21118);
static const int WCL_E_WIFI_EAP_USER_ROOT_CERT_NOT_FOUND = int(0x21119);
static const int WCL_E_WIFI_EAP_USER_ROOT_CERT_INVALID = int(0x2111a);
static const int WCL_E_WIFI_EAP_USER_ROOT_CERT_EXPIRED = int(0x2111b);
static const int WCL_E_WIFI_EAP_SERVER_ROOT_CERT_NOT_FOUND = int(0x2111c);
static const int WCL_E_WIFI_RES_BASE = int(0x22000);
static const int WCL_E_WIFI_RES_UNKNOWN = int(0x22000);
static const int WCL_E_WIFI_RES_NETWORK_NOT_COMPATIBLE = int(0x22001);
static const int WCL_E_WIFI_RES_PROFILE_NOT_COMPATIBLE = int(0x22002);
static const int WCL_E_WIFI_RES_NO_AUTO_CONNECTION = int(0x22003);
static const int WCL_E_WIFI_RES_NOT_VISIBLE = int(0x22004);
static const int WCL_E_WIFI_RES_GP_DENIED = int(0x22005);
static const int WCL_E_WIFI_RES_USER_DENIED = int(0x22006);
static const int WCL_E_WIFI_RES_BSS_TYPE_NOT_ALLOWED = int(0x22007);
static const int WCL_E_WIFI_RES_IN_FAILED_LIST = int(0x22008);
static const int WCL_E_WIFI_RES_IN_BLOCKED_LIST = int(0x22009);
static const int WCL_E_WIFI_RES_SSID_LIST_TOO_LONG = int(0x2200a);
static const int WCL_E_WIFI_RES_CONNECT_CALL_FAIL = int(0x2200b);
static const int WCL_E_WIFI_RES_SCAN_CALL_FAIL = int(0x2200c);
static const int WCL_E_WIFI_RES_NETWORK_NOT_AVAILABLE = int(0x2200d);
static const int WCL_E_WIFI_RES_PROFILE_CHANGED_OR_DELETED = int(0x2200e);
static const int WCL_E_WIFI_RES_KEY_MISMATCH = int(0x2200f);
static const int WCL_E_WIFI_RES_USER_NOT_RESPOND = int(0x22010);
static const int WCL_E_WIFI_RES_AP_PROFILE_NOT_ALLOWED_FOR_CLIENT = int(0x22011);
static const int WCL_E_WIFI_RES_AP_PROFILE_NOT_ALLOWED = int(0x22012);
static const int WCL_E_WIFI_RES_INVALID_PROFILE_SCHEMA = int(0x22013);
static const int WCL_E_WIFI_RES_PROFILE_MISSING = int(0x22014);
static const int WCL_E_WIFI_RES_INVALID_PROFILE_NAME = int(0x22015);
static const int WCL_E_WIFI_RES_INVALID_PROFILE_TYPE = int(0x22016);
static const int WCL_E_WIFI_RES_INVALID_PHY_TYPE = int(0x22017);
static const int WCL_E_WIFI_RES_MSM_SECURITY_MISSING = int(0x22018);
static const int WCL_E_WIFI_RES_IHV_SECURITY_NOT_SUPPORTED = int(0x22019);
static const int WCL_E_WIFI_RES_IHV_OUI_MISMATCH = int(0x2201a);
static const int WCL_E_WIFI_RES_IHV_OUI_MISSING = int(0x2201b);
static const int WCL_E_WIFI_RES_IHV_SETTINGS_MISSING = int(0x2201c);
static const int WCL_E_WIFI_RES_IHV_CONNECTIVITY_NOT_SUPPORTED = int(0x2201d);
static const int WCL_E_WIFI_RES_CONFLICT_SECURITY = int(0x2201e);
static const int WCL_E_WIFI_RES_SECURITY_MISSING = int(0x2201f);
static const int WCL_E_WIFI_RES_INVALID_BSS_TYPE = int(0x22020);
static const int WCL_E_WIFI_RES_INVALID_ADHOC_CONNECTION_MODE = int(0x22021);
static const int WCL_E_WIFI_RES_NON_BROADCAST_SET_FOR_ADHOC = int(0x22022);
static const int WCL_E_WIFI_RES_AUTO_SWITCH_SET_FOR_ADHOC = int(0x22023);
static const int WCL_E_WIFI_RES_AUTO_SWITCH_SET_FOR_MANUAL_CONNECTION = int(0x22024);
static const int WCL_E_WIFI_RES_IHV_SECURITY_ONEX_MISSING = int(0x22025);
static const int WCL_E_WIFI_RES_PROFILE_SSID_INVALID = int(0x22026);
static const int WCL_E_WIFI_RES_TOO_MANY_SSID = int(0x22027);
static const int WCL_E_WIFI_RES_BAD_MAX_NUMBER_OF_CLIENTS_FOR_AP = int(0x22028);
static const int WCL_E_WIFI_RES_INVALID_CHANNEL = int(0x22029);
static const int WCL_E_WIFI_RES_OPERATION_MODE_NOT_SUPPORTED = int(0x2202a);
static const int WCL_E_WIFI_RES_AUTO_AP_PROFILE_NOT_ALLOWED = int(0x2202b);
static const int WCL_E_WIFI_RES_AUTO_CONNECTION_NOT_ALLOWED = int(0x2202c);
static const int WCL_E_WIFI_RES_UNSUPPORTED_SECURITY_SET_BY_OS = int(0x2202d);
static const int WCL_E_WIFI_RES_UNSUPPORTED_SECURITY_SET = int(0x2202e);
static const int WCL_E_WIFI_RES_BSS_TYPE_UNMATCH = int(0x2202f);
static const int WCL_E_WIFI_RES_PHY_TYPE_UNMATCH = int(0x22030);
static const int WCL_E_WIFI_RES_DATARATE_UNMATCH = int(0x22031);
static const int WCL_E_WIFI_RES_USER_CANCELLED = int(0x22032);
static const int WCL_E_WIFI_RES_ASSOCIATION_FAILURE = int(0x22033);
static const int WCL_E_WIFI_RES_ASSOCIATION_TIMEOUT = int(0x22034);
static const int WCL_E_WIFI_RES_PRE_SECURITY_FAILURE = int(0x22035);
static const int WCL_E_WIFI_RES_START_SECURITY_FAILURE = int(0x22036);
static const int WCL_E_WIFI_RES_SECURITY_FAILURE = int(0x22037);
static const int WCL_E_WIFI_RES_SECURITY_TIMEOUT = int(0x22038);
static const int WCL_E_WIFI_RES_ROAMING_FAILURE = int(0x22039);
static const int WCL_E_WIFI_RES_ROAMING_SECURITY_FAILURE = int(0x2203a);
static const int WCL_E_WIFI_RES_ADHOC_SECURITY_FAILURE = int(0x2203b);
static const int WCL_E_WIFI_RES_DRIVER_DISCONNECTED = int(0x2203c);
static const int WCL_E_WIFI_RES_DRIVER_OPERATION_FAILURE = int(0x2203d);
static const int WCL_E_WIFI_RES_IHV_NOT_AVAILABLE = int(0x2203e);
static const int WCL_E_WIFI_RES_IHV_NOT_RESPONDING = int(0x2203f);
static const int WCL_E_WIFI_RES_DISCONNECT_TIMEOUT = int(0x22040);
static const int WCL_E_WIFI_RES_INTERNAL_FAILURE = int(0x22041);
static const int WCL_E_WIFI_RES_UI_REQUEST_TIMEOUT = int(0x22042);
static const int WCL_E_WIFI_RES_TOO_MANY_SECURITY_ATTEMPTS = int(0x22043);
static const int WCL_E_WIFI_RES_AP_STARTING_FAILURE = int(0x22044);
static const int WCL_E_WIFI_RES_NO_VISIBLE_AP = int(0x22045);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_INVALID_KEY_INDEX = int(0x22046);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_PSK_PRESENT = int(0x22047);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_KEY_LENGTH = int(0x22048);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_PSK_LENGTH = int(0x22049);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_NO_AUTH_CIPHER_SPECIFIED = int(0x2204a);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_TOO_MANY_AUTH_CIPHER_SPECIFIED = int(0x2204b);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_DUPLICATE_AUTH_CIPHER = int(0x2204c);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_RAWDATA_INVALID = int(0x2204d);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_INVALID_AUTH_CIPHER = int(0x2204e);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_ONEX_DISABLED = int(0x2204f);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_ONEX_ENABLED = int(0x22050);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_INVALID_PMKCACHE_MODE = int(0x22051);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_INVALID_PMKCACHE_SIZE = int(0x22052);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_INVALID_PMKCACHE_TTL = int(0x22053);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_INVALID_PREAUTH_MODE = int(0x22054);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_INVALID_PREAUTH_THROTTLE = int(0x22055);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_PREAUTH_ONLY_ENABLED = int(0x22056);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_NETWORK = int(0x22057);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_NIC = int(0x22058);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_PROFILE = int(0x22059);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_DISCOVERY = int(0x2205a);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_PASSPHRASE_CHAR = int(0x2205b);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_KEYMATERIAL_CHAR = int(0x2205c);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_WRONG_KEYTYPE = int(0x2205d);
static const int WCL_E_WIFI_RES_MSMSEC_MIXED_CELL = int(0x2205e);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_AUTH_TIMERS_INVALID = int(0x2205f);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_INVALID_GKEY_INTV = int(0x22060);
static const int WCL_E_WIFI_RES_MSMSEC_TRANSITION_NETWORK = int(0x22061);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_KEY_UNMAPPED_CHAR = int(0x22062);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_PROFILE_AUTH = int(0x22063);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_PROFILE_CIPHER = int(0x22064);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_SAFE_MODE = int(0x22065);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_PROFILE_SAFE_MODE_NIC = int(0x22066);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_PROFILE_SAFE_MODE_NW = int(0x22067);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_UNSUPPORTED_AUTH = int(0x22068);
static const int WCL_E_WIFI_RES_MSMSEC_PROFILE_UNSUPPORTED_CIPHER = int(0x22069);
static const int WCL_E_WIFI_RES_MSMSEC_UI_REQUEST_FAILURE = int(0x2206a);
static const int WCL_E_WIFI_RES_MSMSEC_CAPABILITY_MFP_NW_NIC = int(0x2206b);
static const int WCL_E_WIFI_RES_MSMSEC_AUTH_START_TIMEOUT = int(0x2206c);
static const int WCL_E_WIFI_RES_MSMSEC_AUTH_SUCCESS_TIMEOUT = int(0x2206d);
static const int WCL_E_WIFI_RES_MSMSEC_KEY_START_TIMEOUT = int(0x2206e);
static const int WCL_E_WIFI_RES_MSMSEC_KEY_SUCCESS_TIMEOUT = int(0x2206f);
static const int WCL_E_WIFI_RES_MSMSEC_M3_MISSING_KEY_DATA = int(0x22070);
static const int WCL_E_WIFI_RES_MSMSEC_M3_MISSING_IE = int(0x22071);
static const int WCL_E_WIFI_RES_MSMSEC_M3_MISSING_GRP_KEY = int(0x22072);
static const int WCL_E_WIFI_RES_MSMSEC_PR_IE_MATCHING = int(0x22073);
static const int WCL_E_WIFI_RES_MSMSEC_SEC_IE_MATCHING = int(0x22074);
static const int WCL_E_WIFI_RES_MSMSEC_NO_PAIRWISE_KEY = int(0x22075);
static const int WCL_E_WIFI_RES_MSMSEC_G1_MISSING_KEY_DATA = int(0x22076);
static const int WCL_E_WIFI_RES_MSMSEC_G1_MISSING_GRP_KEY = int(0x22077);
static const int WCL_E_WIFI_RES_MSMSEC_PEER_INDICATED_INSECURE = int(0x22078);
static const int WCL_E_WIFI_RES_MSMSEC_NO_AUTHENTICATOR = int(0x22079);
static const int WCL_E_WIFI_RES_MSMSEC_NIC_FAILURE = int(0x2207a);
static const int WCL_E_WIFI_RES_MSMSEC_CANCELLED = int(0x2207b);
static const int WCL_E_WIFI_RES_MSMSEC_KEY_FORMAT = int(0x2207c);
static const int WCL_E_WIFI_RES_MSMSEC_DOWNGRADE_DETECTED = int(0x2207d);
static const int WCL_E_WIFI_RES_MSMSEC_PSK_MISMATCH_SUSPECTED = int(0x2207e);
static const int WCL_E_WIFI_RES_MSMSEC_FORCED_FAILURE = int(0x2207f);
static const int WCL_E_WIFI_RES_MSMSEC_M3_TOO_MANY_RSNIE = int(0x22080);
static const int WCL_E_WIFI_RES_MSMSEC_M2_MISSING_KEY_DATA = int(0x22081);
static const int WCL_E_WIFI_RES_MSMSEC_M2_MISSING_IE = int(0x22082);
static const int WCL_E_WIFI_RES_MSMSEC_AUTH_WCN_COMPLETED = int(0x22083);
static const int WCL_E_WIFI_RES_MSMSEC_M3_MISSING_MGMT_GRP_KEY = int(0x22084);
static const int WCL_E_WIFI_RES_MSMSEC_G1_MISSING_MGMT_GRP_KEY = int(0x22085);
static const int WCL_E_WIFI_RES_ONEX_UNABLE_TO_IDENTIFY_USER = int(0x22086);
static const int WCL_E_WIFI_RES_ONEX_IDENTITY_NOT_FOUND = int(0x22087);
static const int WCL_E_WIFI_RES_ONEX_UI_DISABLED = int(0x22088);
static const int WCL_E_WIFI_RES_ONEX_EAP_FAILURE_RECEIVED = int(0x22089);
static const int WCL_E_WIFI_RES_ONEX_AUTHENTICATOR_NO_LONGER_PRESENT = int(0x2208a);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_VERSION_NOT_SUPPORTED = int(0x2208b);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_INVALID_LENGTH = int(0x2208c);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_DISALLOWED_EAP_TYPE = int(0x2208d);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_INVALID_EAP_TYPE_OR_FLAG = int(0x2208e);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_INVALID_ONEX_FLAGS = int(0x2208f);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_INVALID_TIMER_VALUE = int(0x22090);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_INVALID_SUPPLICANT_MODE = int(0x22091);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_INVALID_AUTH_MODE = int(0x22092);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_INVALID_EAP_CONNECTION_PROPERTIES = int(0x22093);
static const int WCL_E_WIFI_RES_ONEX_UI_CANCELLED = int(0x22094);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_INVALID_EXPLICIT_CREDENTIALS = int(0x22095);
static const int WCL_E_WIFI_RES_ONEX_PROFILE_EXPIRED_EXPLICIT_CREDENTIALS = int(0x22096);
static const int WCL_E_WIFI_RES_ONEX_UI_NOT_PERMITTED = int(0x22097);
static const int WCL_E_WIFI_RES_UNDEFINED = int(0x22098);
static const int WCL_E_WIFI_ONEX_RES_BASE = int(0x23000);
static const int WCL_E_WIFI_ONEX_RES_PEER_INITIATED = int(0x23000);
static const int WCL_E_WIFI_ONEX_RES_MSM_INITIATED = int(0x23001);
static const int WCL_E_WIFI_ONEX_RES_HELD_STATE_TIMEOUT = int(0x23002);
static const int WCL_E_WIFI_ONEX_RES_AUTH_TIMEOUT = int(0x23003);
static const int WCL_E_WIFI_ONEX_RES_CONFIGURATION_CHANGED = int(0x23004);
static const int WCL_E_WIFI_ONEX_RES_USER_CHANGED = int(0x23005);
static const int WCL_E_WIFI_ONEX_RES_QUARANTINE_STATE_CHANGED = int(0x23006);
static const int WCL_E_WIFI_ONEX_RES_ALT_CREDS_TRIAL = int(0x23007);
static const int WCL_E_WIFI_ONEX_RES_INVALID = int(0x23008);
static const int WCL_E_WIFI_HN_RES_BASE = int(0x24000);
static const int WCL_E_WIFI_HN_RES_UNSPECIFIED = int(0x24000);
static const int WCL_E_WIFI_HN_RES_BAD_PARAMETER = int(0x24001);
static const int WCL_E_WIFI_HN_RES_SERVICE_SHUTTING_DOWN = int(0x24002);
static const int WCL_E_WIFI_HN_RES_INSUFFICIENT_RESOURCES = int(0x24003);
static const int WCL_E_WIFI_HN_RES_ELEVATION_REQUIRED = int(0x24004);
static const int WCL_E_WIFI_HN_RES_READ_ONLY = int(0x24005);
static const int WCL_E_WIFI_HN_RES_PERSISTENCE_FAILED = int(0x24006);
static const int WCL_E_WIFI_HN_RES_CRYPT_ERROR = int(0x24007);
static const int WCL_E_WIFI_HN_RES_IMPERSONATION = int(0x24008);
static const int WCL_E_WIFI_HN_RES_STOP_BEFORE_START = int(0x24009);
static const int WCL_E_WIFI_HN_RES_INTERFACE_AVAILABLE = int(0x2400a);
static const int WCL_E_WIFI_HN_RES_INTERFACE_UNAVAILABLE = int(0x2400b);
static const int WCL_E_WIFI_HN_RES_MINIPORT_STOPPED = int(0x2400c);
static const int WCL_E_WIFI_HN_RES_MINIPORT_STARTED = int(0x2400d);
static const int WCL_E_WIFI_HN_RES_INCOMPATIBLE_CONNECTION_STARTED = int(0x2400e);
static const int WCL_E_WIFI_HN_RES_INCOMPATIBLE_CONNECTION_STOPPED = int(0x2400f);
static const int WCL_E_WIFI_HN_RES_USER_ACTION = int(0x24010);
static const int WCL_E_WIFI_HN_RES_CLIENT_ABORT = int(0x24011);
static const int WCL_E_WIFI_HN_RES_AP_START_FAILED = int(0x24012);
static const int WCL_E_WIFI_HN_RES_PEER_ARRIVED = int(0x24013);
static const int WCL_E_WIFI_HN_RES_PEER_DEPARTED = int(0x24014);
static const int WCL_E_WIFI_HN_RES_PEER_TIMEOUT = int(0x24015);
static const int WCL_E_WIFI_HN_RES_GP_DENIED = int(0x24016);
static const int WCL_E_WIFI_HN_RES_SERVICE_UNAVAILABLE = int(0x24017);
static const int WCL_E_WIFI_HN_RES_DEVICE_CHANGE = int(0x24018);
static const int WCL_E_WIFI_HN_RES_PROPERTIES_CHANGE = int(0x24019);
static const int WCL_E_WIFI_HN_RES_VIRTUAL_STATION_BLOCKING_USE = int(0x2401a);
static const int WCL_E_WIFI_HN_RES_SERVICE_AVAILABLE_ON_VIRTUAL_STATION = int(0x2401b);
static const int WCL_E_WIFI_HN_BASE = int(0x24100);
static const int WCL_E_WIFI_HN_OPEN_IP_SETTINGS_FAILED = int(0x24100);
static const int WCL_E_WIFI_HN_READ_IP_FAILED = int(0x24101);
static const int WCL_E_WIFI_HN_FEATURE_NOT_SUPPORTED = int(0x24102);
static const int WCL_E_WIFI_HN_GET_IP_TABLE_FAILED = int(0x24103);
static const int WCL_E_WIFI_HN_PEER_NOT_FOUND = int(0x24104);
static const int WCL_E_WIFI_HN_STARTED = int(0x24105);
static const int WCL_E_WIFI_HN_PSD_IE_NOT_SUPPORTED = int(0x24106);
static const int WCL_E_WIFI_HN_ACCESS_DENIED_BY_SYSTEM = int(0x24107);
static const int WCL_E_WIFI_HN_ACCESS_DENIED_BY_USER = int(0x24108);
static const int WCL_E_NLM_BASE = int(0x25000);
static const int WCL_E_NLM_CLOSED = int(0x25000);
static const int WCL_E_NLM_OPENED = int(0x25001);
static const int WCL_E_NLM_COINITIALIZE_FAILED = int(0x25002);
static const int WCL_E_NLM_UNSUPPORTED = int(0x25003);
static const int WCL_E_NLM_EVENTS_HANDLER_SET = int(0x25004);
static const int WCL_E_NLM_EVENTS_HANDLER_NOT_SET = int(0x25005);
static const int WCL_E_NLM_UNABLE_FIND_CONNECTION_POINTS_CONTAINER = int(0x25006);
static const int WCL_E_NLM_UNABLE_FIND_CONNECTION_POINT = int(0x25007);
static const int WCL_E_NLM_NE_UNABLE_FIND_CONNECTION_POINTS_CONTAINER = int(0x25008);
static const int WCL_E_NLM_NE_UNABLE_FIND_CONNECTION_POINT = int(0x25009);
static const int WCL_E_NLM_NETWORK_NOT_FOUND = int(0x2500a);
static const int WCL_E_NLM_UNABLE_GET_CONNECTIVITY = int(0x2500b);
static const int WCL_E_NLM_UNABLE_GET_CONNECTED_PROPERTY = int(0x2500c);
static const int WCL_E_NLM_UNABLE_GET_DOMAIN_TYPE = int(0x2500d);
static const int WCL_E_NLM_UNABLE_GET_NETWORK_CATEGORY = int(0x2500e);
static const int WCL_E_NLM_UNABLE_GET_NETWORK_DESCRIPTION = int(0x2500f);
static const int WCL_E_NLM_UNABLE_GET_NETWORK_NAME = int(0x25010);
static const int WCL_E_NLM_UNABLE_GET_NETWORK_ID = int(0x25011);
static const int WCL_E_NLM_UNABLE_GET_NETWORK_CREATED_AND_CONNECTED_DATE_TIME = int(0x25012);
static const int WCL_E_NLM_UNABLE_GET_CONNECTION_ADAPTER_ID = int(0x25013);
static const int WCL_E_NLM_UNABLE_GET_CONNECTION_ID = int(0x25014);
static const int WCL_E_NLM_UNABLE_SET_NETWORK_CATEGORY = int(0x25015);
static const int WCL_E_NLM_UNABLE_SET_NETWORK_DESCRIPTION = int(0x25016);
static const int WCL_E_NLM_UNABLE_SET_NETWORK_NAME = int(0x25017);
static const int WCL_E_NLM_UNABLE_ENUMERATE_NETWORKS = int(0x25018);
static const int WCL_E_NLM_NETWORKS_NOT_FOUND = int(0x25019);
static const int WCL_E_NLM_CONNECTIONS_NOT_FOUND = int(0x2501a);
static const int WCL_E_NLM_UNABLE_ENUMERATE_CONNECTIONS = int(0x2501b);
static const int WCL_E_NLM_NETWORK_PROFILES_NOT_FOUND = int(0x2501c);
static const int WCL_E_NLM_ACCESS_DENIED = int(0x2501d);
static const int WCL_E_NLM_UNEXPECTED = int(0x2501e);
static const int WCL_E_NLM_UNABLE_GET_ADAPTERS_LIST = int(0x2501f);
static const int WCL_E_NLM_ADAPTER_NOT_FOUND = int(0x25020);
static const int WCL_E_WIFI_SNIFF_BASE = int(0x26000);
static const int WCL_E_WIFI_SNIFF_UNABLE_CREATE_MUTEX = int(0x26000);
static const int WCL_E_WIFI_SNIFF_UNABLE_LOAD_DLL = int(0x26001);
static const int WCL_E_WIFI_SNIFF_WRONG_REF_COUNTER = int(0x26002);
static const int WCL_E_WIFI_SNIFF_OPENED = int(0x26003);
static const int WCL_E_WIFI_SNIFF_CLOSED = int(0x26004);
static const int WCL_E_WIFI_SNIFF_UNABLE_CREATE_IFACE_MUTEX = int(0x26005);
static const int WCL_E_WIFI_SNIFF_IFACE_IN_USE = int(0x26006);
static const int WCL_E_WIFI_SNIFF_NOINTERFACE = int(0x26007);
static const int WCL_E_WIFI_SNIFF_ALREADY_EXIST = int(0x26008);
static const int WCL_E_WIFI_SNIFF_EMPTY = int(0x26009);
static const int WCL_E_WIFI_SNIFF_FILE_NOT_FOUND = int(0x2600a);
static const int WCL_E_WIFI_SNIFF_INVALID_STATE = int(0x2600b);
static const int WCL_E_WIFI_SNIFF_NOT_FOUND = int(0x2600c);
static const int WCL_E_WIFI_SNIFF_NOT_SUPPORTED = int(0x2600d);
static const int WCL_E_WIFI_SNIFF_PARAMETER_QUOTA_EXCEEDED = int(0x2600e);
static const int WCL_E_WIFI_SNIFF_RESOURCE_NOT_AVAILABLE = int(0x2600f);
static const int WCL_E_WIFI_SNIFF_API_VERSION_MISMATCHED = int(0x26010);
static const int WCL_E_WIFI_SNIFF_FILE_TOO_LARGE = int(0x26011);
static const int WCL_E_WIFI_SNIFF_FILE_TOO_SMALL = int(0x26012);
static const int WCL_E_WIFI_SNIFF_FRAME_CONTINUES_INTO_NEXT_FRAME = int(0x26013);
static const int WCL_E_WIFI_SNIFF_FRAME_RANGE_OUT_OF_BOUNDS = int(0x26014);
static const int WCL_E_WIFI_SNIFF_FRAME_TOO_BIG_FOR_FILE = int(0x26015);
static const int WCL_E_WIFI_SNIFF_INVALID_NETMON_CAP_FILE = int(0x26016);
static const int WCL_E_WIFI_SNIFF_UNSUPPORTED_FILE_TYPE = int(0x26017);
static const int WCL_E_WIFI_SNIFF_UNSUPPORTED_PCAP_DLT = int(0x26018);
static const int WCL_E_WIFI_SNIFF_WRONG_ENDIAN = int(0x26019);
static const int WCL_E_WIFI_SNIFF_WRONG_PCAP_VERSION = int(0x2601a);
static const int WCL_E_WIFI_SNIFF_CHANGED_MODE = int(0x2601b);
static const int WCL_E_WIFI_SNIFF_UNEXPECTED = int(0x2601c);
static const int WCL_E_WIFI_SNIFF_ADAPTER_NOT_FOUND = int(0x2601d);
static const int WCL_E_WIFI_DIRECT_BASE = int(0x27000);
static const int WCL_E_WIFI_DIRECT_RADIO_NOT_AVAILABLE = int(0x27000);
static const int WCL_E_WIFI_DIRECT_RESOURCE_IN_USE = int(0x27001);
static const int WCL_E_WIFI_DIRECT_UNKNOWN = int(0x27002);
static const int WCL_E_WIFI_DIRECT_NOT_SUPPORTED = int(0x27003);
static const int WCL_E_WIFI_DIRECT_PAIR_BASE = int(0x28000);
static const int WCL_E_WIFI_DIRECT_PAIR_NOT_READY = int(0x28000);
static const int WCL_E_WIFI_DIRECT_PAIR_NOT_PAIRED = int(0x28001);
static const int WCL_E_WIFI_DIRECT_PAIR_ALREADY_PAIRED = int(0x28002);
static const int WCL_E_WIFI_DIRECT_PAIR_REJECTED = int(0x28003);
static const int WCL_E_WIFI_DIRECT_PAIR_TOO_MANY_CONNECTTIONS = int(0x28004);
static const int WCL_E_WIFI_DIRECT_PAIR_HARDWARE_FAILURE = int(0x28005);
static const int WCL_E_WIFI_DIRECT_PAIR_TIMEOUT = int(0x28006);
static const int WCL_E_WIFI_DIRECT_PAIR_NOT_ALLOWED = int(0x28007);
static const int WCL_E_WIFI_DIRECT_PAIR_AUTHENTICATION_FAILURE = int(0x28008);
static const int WCL_E_WIFI_DIRECT_PAIR_NO_PROFILES = int(0x28009);
static const int WCL_E_WIFI_DIRECT_PAIR_PROTECTION_LEVEL = int(0x2800a);
static const int WCL_E_WIFI_DIRECT_PAIR_ACCESS_DENIED = int(0x2800b);
static const int WCL_E_WIFI_DIRECT_PAIR_INVALID_CEREMONY = int(0x2800c);
static const int WCL_E_WIFI_DIRECT_PAIR_CANCELLED = int(0x2800d);
static const int WCL_E_WIFI_DIRECT_PAIR_IN_PROGRESS = int(0x2800e);
static const int WCL_E_WIFI_DIRECT_PAIR_HANDLER_NOT_REGISTERED = int(0x2800f);
static const int WCL_E_WIFI_DIRECT_PAIR_REJECTED_BY_HANDLER = int(0x28010);
static const int WCL_E_WIFI_DIRECT_PAIR_HAS_ASSOCCIATION = int(0x28011);
static const int WCL_E_WIFI_DIRECT_PAIR_UNKNOWN = int(0x28012);
static const int WCL_E_WIFI_DIRECT_PAIR_FAILURE = int(0x28013);
static const int WCL_E_WIFI_DIRECT_DEVICE_BASE = int(0x29000);
static const int WCL_E_WIFI_DIRECT_DEVICE_CONNECTED = int(0x29000);
static const int WCL_E_WIFI_DIRECT_DEVICE_DISCONNECTED = int(0x29001);
static const int WCL_E_WIFI_DIRECT_DEVICE_CREATE_TERMINATION_EVENT_FAILED = int(0x29002);
static const int WCL_E_WIFI_DIRECT_DEVICE_START_THREAD_FAILED = int(0x29003);
static const int WCL_E_WIFI_DIRECT_DEVICE_CREATE_INFORMATION_FAILED = int(0x29004);
static const int WCL_E_WIFI_DIRECT_DEVICE_QUERY_ASYNC_INFO_FAILED = int(0x29005);
static const int WCL_E_WIFI_DIRECT_DEVICE_GET_INFORMATION_FAILED = int(0x29006);
static const int WCL_E_WIFI_DIRECT_DEVICE_EXTENDED_INFO_NOT_SUPPORTED = int(0x29007);
static const int WCL_E_WIFI_DIRECT_DEVICE_PAIRING_NOT_SUPPORTED = int(0x29008);
static const int WCL_E_WIFI_DIRECT_DEVICE_CUSTOM_PAIRING_NOT_SUPPORTED = int(0x29009);
static const int WCL_E_WIFI_DIRECT_DEVICE_CREATE_PAIRING_SYNC_EVENT_FAILED = int(0x2900a);
static const int WCL_E_WIFI_DIRECT_DEVICE_CONNECTION_TERMINATED_BT_USER = int(0x2900b);
static const int WCL_E_WIFI_DIRECT_DEVICE_WAIT_FAILED = int(0x2900c);
static const int WCL_E_WIFI_DIRECT_DEVICE_CREATE_PAIRING_MUTEX_FAILED = int(0x2900d);
static const int WCL_E_WIFI_DIRECT_DEVICE_SET_GO_FAILED = int(0x2900f);
static const int WCL_E_WIFI_DIRECT_DEVICE_GET_CONNECTION_PARAMETERS_FAILED = int(0x2900f);
static const int WCL_E_WIFI_DIRECT_DEVICE_SET_PAIRING_PROCEDURE_FAILED = int(0x29010);
static const int WCL_E_WIFI_DIRECT_DEVICE_GET_CUSTOM_PAIRING_FILED = int(0x29011);
static const int WCL_E_WIFI_DIRECT_DEVICE_SET_PAIRING_EVENT_HANDLER_FAILED = int(0x29012);
static const int WCL_E_WIFI_DIRECT_DEVICE_GET_PAIRING_SETTINGS_FILED = int(0x29013);
static const int WCL_E_WIFI_DIRECT_DEVICE_START_PAIRING_FAILED = int(0x29014);
static const int WCL_E_WIFI_DIRECT_DEVICE_GET_PAIRING_RESULT_FAILED = int(0x29015);
static const int WCL_E_WIFI_DIRECT_DEVICE_PAIRING_FAILED = int(0x29016);
static const int WCL_E_WIFI_DIRECT_DEVICE_CREATE_FAILED = int(0x29017);
static const int WCL_E_WIFI_DIRECT_DEVICE_CREATE_GET_RESULT_FAILED = int(0x29018);
static const int WCL_E_WIFI_DIRECT_DEVICE_CREATE_OBJECT_NOT_CREATED = int(0x29019);
static const int WCL_E_WIFI_DIRECT_DEVICE_SET_DISCONNECT_EVENT_HANDLER_FAILED = int(0x2901a);
static const int WCL_E_WIFI_DIRECT_DEVICE_GET_PAIRED_FAILED = int(0x2901b);
static const int WCL_E_WIFI_DIRECT_DEVICE_START_UNPAIR_FAILED = int(0x2901c);
static const int WCL_E_WIFI_DIRECT_DEVICE_CREATE_TIMEOUT = int(0x2901d);
static const int WCL_E_WIFI_DIRECT_DEVICE_START_CREATE_FAILED = int(0x2901e);
static const int WCL_E_WIFI_DIRECT_DEVICE_GET_ID_FAILED = int(0x2901f);
static const int WCL_E_WIFI_DIRECT_DEVICE_BUSY = int(0x29020);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_BASE = int(0x2a000);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_START_ABORTED = int(0x2a000);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_GET_ADVERTISEMENT = int(0x2a001);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_SET_GO = int(0x2a002);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_SET_DISCOVERABILITY_FAILED = int(0x2a003);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_GET_LEGACY_SETTINGS = int(0x2a004);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_CHANGE_LEGACY_MODE = int(0x2a005);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_SET_SSID = int(0x2a006);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_GET_CREDENTIAL = int(0x2a007);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_SET_PASSPHRASE = int(0x2a008);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_CREATE_ASYNC_EVENT = int(0x2a009);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_SET_PUBLISHER_EVENT = int(0x2a00a);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_START_PUBLISHER = int(0x2a00b);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_SET_LISTENER_HANDLER = int(0x2a00c);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_ACTIVE = int(0x2a00d);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_CREATE_THREAD_EVENT = int(0x2a00e);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_CREATE_WORKING_THREAD = int(0x2a00f);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_NOT_ACTIVE = int(0x2a010);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_UNABLE_SET_OPEN_AUTH_MODE = int(0x2a011);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_ALREADY_RUNNING = int(0x2a012);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_CREATE_MUTEX_FAILED = int(0x2a013);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_HOTSPOT_RUNNING = int(0x2a014);
static const int WCL_E_WIFI_DIRECT_ADVERTISER_INVALID_OS_BITS = int(0x2a015);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_BASE = int(0x2b000);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_ACTIVE = int(0x2b000);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_CREATE_EVENT_FAILED = int(0x2b001);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_CREATE_THREAD_FAILED = int(0x2b002);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_NOT_ACTIVE = int(0x2b003);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_CREATE_DEVICE_STATICS_FAILED = int(0x2b004);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_CREATE_DEVICE_STATICS2_FAILED = int(0x2b005);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_GET_DEVICE_SELECTOR_FAILED = int(0x2b006);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_CREATE_DEVICE_INFORMATION_FAILED = int(0x2b007);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_CREATE_FAILED = int(0x2b008);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_SET_ADDED_EVENT_FAILED = int(0x2b009);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_SET_COMPLETED_EVENT_FAILED = int(0x2b00a);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_START_FAILED = int(0x2b00b);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_CREATE_NOTIFICATION_EVENT_FAILED = int(0x2b00c);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_DISCOVERING_TERMINATED = int(0x2b00d);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_UNEXPECTED = int(0x2b00e);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_CREATE_INIT_EVENT_FAILED = int(0x2b00f);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_SET_STOPPED_EVENT_FAILED = int(0x2b010);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_START_GET_PAIRED_THREAD_FAILED = int(0x2b011);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_START_UNPAIR_THREAD_FAILED = int(0x2b012);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_START_NAME_RESOLVING_THREAD_FAILED = int(0x2b013);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_START_ENUM_PAIRED_DEVICES_THREAD_FAILED = int(0x2b014);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_ENUMERATE_DEVICES_FAILED = int(0x2b015);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_QUERY_ASYNC_INFO_FAILED = int(0x2b016);
static const int WCL_E_WIFI_DIRECT_DEVICE_WATCHER_GET_ENUM_RESULT_FAILED = int(0x2b017);
static const int WCL_E_WIFI_INTERFACE_BASE = int(0x2c000);
static const int WCL_E_WIFI_INTERFACE_NOT_CONNECTED = int(0x2c000);
static const int WCL_E_WIFI_INTERFACE_OPEN_IP_SETTINGS_FAILED = int(0x2c001);
static const int WCL_E_WIFI_INTERFACE_READ_IP_FAILED = int(0x2c002);
static const int WCL_E_WIFI_INTERFACE_SET_IP_FAILED = int(0x2c003);
static const int WCL_E_WIFI_INTERFACE_INVALID_IP = int(0x2c004);
static const int WCL_E_WIFI_INTERFACE_ADMIN_RIGHTS_REQUIRED = int(0x2c005);
static const int WCL_E_WIFI_INTERFACE_IP_NOT_CONFIGURED = int(0x2c006);
static const int WCL_E_WIFI_INTERFACE_VIRTUAL_ADAPTER_NOT_FOUND = int(0x2c007);
static const int WCL_E_WIFI_INTERFACE_FEATURE_NOT_SUPPORTED = int(0x2c008);
static const int WCL_E_WIFI_INTERFACE_KEY_OPEN_FAILED = int(0x2c009);
static const int WCL_E_WIFI_INTERFACE_NO_PARAMETERS = int(0x2c00a);
static const int WCL_E_WIFI_INTERFACE_PARAMETER_NOT_FOUND = int(0x2c00b);
static const int WCL_E_WIFI_INTERFACE_PARAMETER_READ_FAILED = int(0x2c00c);
static const int WCL_E_WIFI_INTERFACE_PARAMETER_FIND_VALUE_FAILED = int(0x2c00d);
static const int WCL_E_WIFI_INTERFACE_PARAMETER_READ_VALUE_FAILED = int(0x2c00e);
static const int WCL_E_WIFI_INTERFACE_INVALID_VALUE = int(0x2c00f);
static const int WCL_E_WIFI_INTERFACE_SET_VALUE_FAILED = int(0x2c010);
static const int WCL_E_WIFI_INTRFACE_NOT_FOUND = int(0x2c011);
static const int WCL_E_WIFI_INTRFACE_DISABLE_FAILED = int(0x2c012);
static const int WCL_E_WIFI_INTRFACE_ENABLE_FAILED = int(0x2c013);
static const int WCL_E_WIFI_NETCFG_BASE = int(0x2d000);
static const int WCL_E_WIFI_NETCFG_PREPARE_FAILED = int(0x2d000);
static const int WCL_E_WIFI_NETCFG_CREATE_FAILED = int(0x2d001);
static const int WCL_E_WIFI_NETCFG_LOCK_CREATE_FAILED = int(0x2d002);
static const int WCL_E_WIFI_NETCFG_LOCK_FAILED = int(0x2d003);
static const int WCL_E_WIFI_NETCFG_INIT_FAILED = int(0x2d004);
static const int WCL_E_WIFI_NETCFG_ENUM_INTERFACES_FAILED = int(0x2d005);
static const int WCL_E_WIFI_NETCFG_INTERFACE_NOT_FOUND = int(0x2d006);
static const int WCL_E_WIFI_NETCFG_PROTOCOL_NOT_FOUND = int(0x2d007);
static const int WCL_E_WIFI_NETCFG_SWITCH_PROTOCOL_FAILED = int(0x2d008);
static const int WCL_E_WIFI_NETCFG_APPLY_CHANGES_FAILED = int(0x2d009);
static const int WCL_E_WIFI_NETCFG_START_THREAD_FAILED = int(0x2d00a);
static const int WCL_E_WIFI_HOTSPOT_BASE = int(0x2e000);
static const int WCL_E_WIFI_HOTSPOT_ACTIVE = int(0x2e000);
static const int WCL_E_WIFI_HOTSPOT_NOT_ACTIVE = int(0x2e001);
static const int WCL_E_WIFI_HOTSPOT_CLOSED = int(0x2e002);
static const int WCL_E_WIFI_HOTSPOT_CREATE_INIT_EVENT_FAILED = int(0x2e003);
static const int WCL_E_WIFI_HOTSPOT_CREATE_TERM_EVENT_FAILED = int(0x2e004);
static const int WCL_E_WIFI_HOTSPOT_START_THREAD_FAILED = int(0x2e005);
static const int WCL_E_WIFI_HOTSPOT_CREATE_NET_INFO_FAILED = int(0x2e006);
static const int WCL_E_WIFI_HOTSPOT_GET_PROFILE_FAILED = int(0x2e007);
static const int WCL_E_WIFI_HOTSPOT_PROFILE_NOT_FOUND = int(0x2e008);
static const int WCL_E_WIFI_HOTSPOT_CREATE_MANAGER_FACTORY_FAILED = int(0x2e009);
static const int WCL_E_WIFI_HOTSPOT_CREATE_MANAGER_FAILED = int(0x2e00a);
static const int WCL_E_WIFI_HOTSPOT_GET_STATE_FAILED = int(0x2e00b);
static const int WCL_E_WIFI_HOTSPOT_STARTED = int(0x2e00c);
static const int WCL_E_WIFI_HOTSPOT_START_FAILED = int(0x2e00d);
static const int WCL_E_WIFI_HOTSPOT_QUERY_ASYNC_INFO_FAILED = int(0x2e00e);
static const int WCL_E_WIFI_HOTSPOT_GET_OPERATION_RESULT_FAILED = int(0x2e00f);
static const int WCL_E_WIFI_HOTSPOT_GET_OPERATION_STATUS_FAILED = int(0x2e010);
static const int WCL_E_WIFI_HOTSPOT_MOBILE_DEVICE_OFF = int(0x2e011);
static const int WCL_E_WIFI_HOTSPOT_WIFI_DEVICE_OFF = int(0x2e012);
static const int WCL_E_WIFI_HOTSPOT_CHECK_TIMEOUT = int(0x2e013);
static const int WCL_E_WIFI_HOTSPOT_CHECK_FAILURE = int(0x2e014);
static const int WCL_E_WIFI_HOTSPOT_OPERATION_IN_PROGRESS = int(0x2e015);
static const int WCL_E_WIFI_HOTSPOT_BLUETOOTH_DEVICE_OFF = int(0x2e016);
static const int WCL_E_WIFI_HOTSPOT_NETWORK_LIMITATION = int(0x2e017);
static const int WCL_E_WIFI_HOTSPOT_UNKNOWN = int(0x2e018);
static const int WCL_E_WIFI_HOTSPOT_STOPPED = int(0x2e019);
static const int WCL_E_WIFI_HOTSPOT_WIFI_HARDWARE_NOT_FOUND = int(0x2e01a);
static const int WCL_E_WIFI_HOTSPOT_GET_CONFIG_FAILED = int(0x2e01b);
static const int WCL_E_WIFI_HOTSPOT_GET_SSID_FAILED = int(0x2e01c);
static const int WCL_E_WIFI_HOTSPOT_SET_SSID_FAILED = int(0x2e01d);
static const int WCL_E_WIFI_HOTSPOT_SET_CONFIG_FAILED = int(0x2e01e);
static const int WCL_E_WIFI_HOTSPOT_GET_PASSPHRASE_FAILED = int(0x2e01f);
static const int WCL_E_WIFI_HOTSPOT_SET_PASSPHRASE_FAILED = int(0x2e020);
static const int WCL_E_WIFI_HOTSPOT_GET_MAX_CLIENTS_FAILED = int(0x2e021);
static const int WCL_E_WIFI_HOTSPOT_GET_CLIENTS_COUNT_FAILED = int(0x2e022);
static const int WCL_E_WIFI_HOTSPOT_GET_CLIENTS_FAILED = int(0x2e023);
static const int WCL_E_WIFI_HOTSPOT_GET_CLIENTS_LIST_SIZE_FAILED = int(0x2e024);
static const int WCL_E_WIFI_HOTSPOT_BAND_NOT_SUPPORTED = int(0x2e025);
static const int WCL_E_WIFI_HOTSPOT_SET_BAND_FAILED = int(0x2e026);
static const int WCL_E_WIFI_HOTSPOT_CHANGE_NO_CONNECTION_TIMEOUT_FAILED = int(0x2e027);
static const int WCL_E_WIFI_HOTSPOT_GET_NO_CONNECTION_TIMEOUT_FAILED = int(0x2e028);
extern DELPHI_PACKAGE bool __fastcall wclTestWiFiFrameworkState(void);
}	/* namespace Wclwifierrors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLWIFIERRORS)
using namespace Wclwifierrors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclwifierrorsHPP
