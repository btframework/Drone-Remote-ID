// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclConnectionErrors.pas' rev: 30.00 (Windows)

#ifndef WclconnectionerrorsHPP
#define WclconnectionerrorsHPP

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

namespace Wclconnectionerrors
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS wclEConnection;
class DELPHICLASS wclEClientConnection;
class DELPHICLASS wclEClientActive;
class DELPHICLASS wclEServerConnection;
class DELPHICLASS wclEServerActive;
class DELPHICLASS wclEServerClientConnection;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEConnection : public Wclerrors::wclException
{
	typedef Wclerrors::wclException inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEConnection(const System::UnicodeString Msg) : Wclerrors::wclException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEConnection(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Wclerrors::wclException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEConnection(NativeUInt Ident)/* overload */ : Wclerrors::wclException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEConnection(System::PResStringRec ResStringRec)/* overload */ : Wclerrors::wclException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEConnection(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Wclerrors::wclException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEConnection(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Wclerrors::wclException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEConnection(const System::UnicodeString Msg, int AHelpContext) : Wclerrors::wclException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEConnection(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Wclerrors::wclException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEConnection(NativeUInt Ident, int AHelpContext)/* overload */ : Wclerrors::wclException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEConnection(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Wclerrors::wclException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEConnection(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Wclerrors::wclException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEConnection(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Wclerrors::wclException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEConnection(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEClientConnection : public wclEConnection
{
	typedef wclEConnection inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEClientConnection(const System::UnicodeString Msg) : wclEConnection(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEClientConnection(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEConnection(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEClientConnection(NativeUInt Ident)/* overload */ : wclEConnection(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEClientConnection(System::PResStringRec ResStringRec)/* overload */ : wclEConnection(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEClientConnection(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEConnection(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEClientConnection(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEConnection(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEClientConnection(const System::UnicodeString Msg, int AHelpContext) : wclEConnection(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEClientConnection(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEConnection(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEClientConnection(NativeUInt Ident, int AHelpContext)/* overload */ : wclEConnection(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEClientConnection(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEConnection(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEClientConnection(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEConnection(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEClientConnection(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEConnection(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEClientConnection(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEClientActive : public wclEClientConnection
{
	typedef wclEClientConnection inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEClientActive(const System::UnicodeString Msg) : wclEClientConnection(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEClientActive(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEClientConnection(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEClientActive(NativeUInt Ident)/* overload */ : wclEClientConnection(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEClientActive(System::PResStringRec ResStringRec)/* overload */ : wclEClientConnection(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEClientActive(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEClientConnection(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEClientActive(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEClientConnection(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEClientActive(const System::UnicodeString Msg, int AHelpContext) : wclEClientConnection(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEClientActive(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEClientConnection(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEClientActive(NativeUInt Ident, int AHelpContext)/* overload */ : wclEClientConnection(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEClientActive(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEClientConnection(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEClientActive(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEClientConnection(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEClientActive(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEClientConnection(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEClientActive(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEServerConnection : public wclEConnection
{
	typedef wclEConnection inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEServerConnection(const System::UnicodeString Msg) : wclEConnection(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEServerConnection(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEConnection(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEServerConnection(NativeUInt Ident)/* overload */ : wclEConnection(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEServerConnection(System::PResStringRec ResStringRec)/* overload */ : wclEConnection(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEServerConnection(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEConnection(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEServerConnection(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEConnection(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEServerConnection(const System::UnicodeString Msg, int AHelpContext) : wclEConnection(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEServerConnection(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEConnection(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEServerConnection(NativeUInt Ident, int AHelpContext)/* overload */ : wclEConnection(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEServerConnection(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEConnection(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEServerConnection(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEConnection(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEServerConnection(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEConnection(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEServerConnection(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEServerActive : public wclEServerConnection
{
	typedef wclEServerConnection inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEServerActive(const System::UnicodeString Msg) : wclEServerConnection(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEServerActive(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEServerConnection(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEServerActive(NativeUInt Ident)/* overload */ : wclEServerConnection(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEServerActive(System::PResStringRec ResStringRec)/* overload */ : wclEServerConnection(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEServerActive(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEServerConnection(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEServerActive(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEServerConnection(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEServerActive(const System::UnicodeString Msg, int AHelpContext) : wclEServerConnection(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEServerActive(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEServerConnection(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEServerActive(NativeUInt Ident, int AHelpContext)/* overload */ : wclEServerConnection(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEServerActive(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEServerConnection(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEServerActive(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEServerConnection(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEServerActive(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEServerConnection(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEServerActive(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEServerClientConnection : public wclEServerConnection
{
	typedef wclEServerConnection inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEServerClientConnection(const System::UnicodeString Msg) : wclEServerConnection(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEServerClientConnection(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEServerConnection(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEServerClientConnection(NativeUInt Ident)/* overload */ : wclEServerConnection(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEServerClientConnection(System::PResStringRec ResStringRec)/* overload */ : wclEServerConnection(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEServerClientConnection(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEServerConnection(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEServerClientConnection(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEServerConnection(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEServerClientConnection(const System::UnicodeString Msg, int AHelpContext) : wclEServerConnection(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEServerClientConnection(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEServerConnection(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEServerClientConnection(NativeUInt Ident, int AHelpContext)/* overload */ : wclEServerConnection(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEServerClientConnection(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEServerConnection(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEServerClientConnection(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEServerConnection(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEServerClientConnection(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEServerConnection(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEServerClientConnection(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int WCL_E_CONNECTION_BASE = int(0x30000);
static const int WCL_E_CONNECTION_ACTIVE = int(0x30000);
static const int WCL_E_CONNECTION_NOT_ACTIVE = int(0x30001);
static const int WCL_E_CONNECTION_UNABLE_CREATE_TERMINATE_EVENT = int(0x30002);
static const int WCL_E_CONNECTION_UNABLE_CREATE_CONNECTION_COMPLETE_EVENT = int(0x30003);
static const int WCL_E_CONNECTION_UNABLE_START_COMMUNICATION = int(0x30004);
static const int WCL_E_CONNECTION_TERMINATED = int(0x30005);
static const int WCL_E_CONNECTION_TERMINATED_BY_USER = int(0x30006);
static const int WCL_E_CONNECTION_UNABLE_CREATE_INIT_EVENT = int(0x30007);
static const int WCL_E_CONNECTION_CLOSED = int(0x30008);
static const int WCL_E_CONNECTION_UNEXPECTED = int(0x30009);
static const int WCL_E_CONNECTION_UNABLE_CREATE_OR_INIT_CLIENT = int(0x3000a);
static const int WCL_E_CONNECTION_UNABLE_FIND_CLIENT_CLASS = int(0x3000b);
static const int WCL_E_OBEX_BASE = int(0x31000);
static const int WCL_E_OBEX_NOT_CONNECTED = int(0x31000);
static const int WCL_E_OBEX_CONNECTED = int(0x31001);
static const int WCL_E_OBEX_OPERATION_IN_PROGRESS = int(0x31002);
static const int WCL_E_OBEX_CONTINUE = int(0x31003);
static const int WCL_E_OBEX_CREATED = int(0x31004);
static const int WCL_E_OBEX_ACCEPTED = int(0x31005);
static const int WCL_E_OBEX_NON_AUTHORITATIVE = int(0x31006);
static const int WCL_E_OBEX_NO_CONTENT = int(0x31007);
static const int WCL_E_OBEX_RESET_CONTENT = int(0x31008);
static const int WCL_E_OBEX_PARTIAL_CONTENT = int(0x31009);
static const int WCL_E_OBEX_MULTIPLE_CHOICES = int(0x3100a);
static const int WCL_E_OBEX_MOVED_PERMANENTLY = int(0x3100b);
static const int WCL_E_OBEX_MOVED_TEMPORARY = int(0x3100c);
static const int WCL_E_OBEX_SEE_OTHER = int(0x3100d);
static const int WCL_E_OBEX_NOT_MODIFIED = int(0x3100e);
static const int WCL_E_OBEX_USE_PROXY = int(0x3100f);
static const int WCL_E_OBEX_BAD_REQUEST = int(0x31010);
static const int WCL_E_OBEX_UNAUTHORIZED = int(0x31011);
static const int WCL_E_OBEX_PAYMENT_REQUIRED = int(0x31012);
static const int WCL_E_OBEX_FORBIDDEN = int(0x31013);
static const int WCL_E_OBEX_NOT_FOUND = int(0x31014);
static const int WCL_E_OBEX_METHOD_NOT_ALLOWED = int(0x31015);
static const int WCL_E_OBEX_NOT_ACCEPTABLE = int(0x31016);
static const int WCL_E_OBEX_PROXY_AUTH_REQUIRED = int(0x31017);
static const int WCL_E_OBEX_REQUEST_TIMEOUT = int(0x31018);
static const int WCL_E_OBEX_CONFLICT = int(0x31019);
static const int WCL_E_OBEX_GONE = int(0x3101a);
static const int WCL_E_OBEX_LENGTH_REQUIRED = int(0x3101b);
static const int WCL_E_OBEX_PRECONDITION_FAILED = int(0x3101c);
static const int WCL_E_OBEX_REQUEST_TOO_LARGE = int(0x3101d);
static const int WCL_E_OBEX_URL_TOO_LARGE = int(0x3101e);
static const int WCL_E_OBEX_UNSUPPORTED_MEDIA_TYPE = int(0x3101f);
static const int WCL_E_OBEX_INTERNAL = int(0x31020);
static const int WCL_E_OBEX_NOT_IMPLEMENTED = int(0x31021);
static const int WCL_E_OBEX_BAD_GATEWAY = int(0x31022);
static const int WCL_E_OBEX_SERVICE_UNAVAILABLE = int(0x31023);
static const int WCL_E_OBEX_GATEWAY_TIMEOUT = int(0x31024);
static const int WCL_E_OBEX_HTTP_VERSION_NOT_SUPPORTED = int(0x31025);
static const int WCL_E_OBEX_DATABASE_FULL = int(0x31026);
static const int WCL_E_OBEX_DATABASE_LOCKED = int(0x31027);
static const int WCL_E_OBEX_OPERATION_TERMINATED_BY_DISCONNECT = int(0x31028);
static const int WCL_E_OBEX_OPERATION_TERMINATED_BY_USER = int(0x31029);
static const int WCL_E_OBEX_INVALID_OPERATION_SEQUENCE = int(0x3102a);
static const int WCL_E_OBEX_DISCONNECTED = int(0x3102b);
static const int WCL_E_OBEX_UNEXPECTED = int(0x3102c);
static const int WCL_E_OBEX_CREATE_CONNECTION_ID_MUTEX_FAILED = int(0x3102d);
static const int WCL_E_OBEX_MAX_CONNECTION_ID = int(0x3102e);
static const int WCL_E_OBEX_INVALID_STATE = int(0x3102f);
static const int WCL_E_OBEX_INVALID_DIR_LIST = int(0x31030);
static const int WCL_E_OBEX_INVALID_DIR_FORMAT = int(0x31031);
static const int WCL_E_OBEX_COM_INIT_FAILED = int(0x31032);
static const int WCL_E_OBEX_XML_NOT_AVAILABLE = int(0x31033);
}	/* namespace Wclconnectionerrors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLCONNECTIONERRORS)
using namespace Wclconnectionerrors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclconnectionerrorsHPP
