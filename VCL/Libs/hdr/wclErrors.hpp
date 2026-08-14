// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclErrors.pas' rev: 30.00 (Windows)

#ifndef WclerrorsHPP
#define WclerrorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.msxml.hpp>
#include <System.SysUtils.hpp>
#include <wclSync.hpp>
#include <Winapi.MSXMLIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclerrors
{
//-- forward type declarations -----------------------------------------------
struct TwclErrorDetails;
class DELPHICLASS TwclErrorInformation;
class DELPHICLASS wclException;
class DELPHICLASS wclEInvalidArgument;
class DELPHICLASS wclEOutOfMemory;
class DELPHICLASS wclEPowerEvents;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TwclErrorDetails
{
public:
	int Error;
	System::UnicodeString Framework;
	System::UnicodeString Category;
	System::UnicodeString Constant;
	System::UnicodeString Description;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclErrorInformation : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FComInitialized;
	Wclsync::TwclCriticalSection* FCS;
	_di_IXMLDOMDocument FDocument;
	_di_IXMLDOMElement FRootElement;
	_di_IXMLDOMNodeList FFrameworks;
	bool __fastcall GetFrameworksNodes(void);
	bool __fastcall GetRootElement(void);
	bool __fastcall LoadDocument(const System::UnicodeString FileName);
	bool __fastcall GetAttributeText(const _di_IXMLDOMNode Node, const System::UnicodeString AttributeName, /* out */ System::UnicodeString &Text);
	bool __fastcall ErrorFound(const _di_IXMLDOMNode Node, const int Error);
	bool __fastcall GetOpened(void);
	
public:
	__fastcall TwclErrorInformation(void);
	__fastcall virtual ~TwclErrorInformation(void);
	bool __fastcall Close(void);
	bool __fastcall Open(const System::UnicodeString FileName);
	bool __fastcall GetDetails(const int Error, TwclErrorDetails &Details);
	__property bool Opened = {read=GetOpened, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclException(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclException(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEInvalidArgument : public wclException
{
	typedef wclException inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEInvalidArgument(const System::UnicodeString Msg) : wclException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEInvalidArgument(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEInvalidArgument(NativeUInt Ident)/* overload */ : wclException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEInvalidArgument(System::PResStringRec ResStringRec)/* overload */ : wclException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEInvalidArgument(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEInvalidArgument(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEInvalidArgument(const System::UnicodeString Msg, int AHelpContext) : wclException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEInvalidArgument(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEInvalidArgument(NativeUInt Ident, int AHelpContext)/* overload */ : wclException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEInvalidArgument(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEInvalidArgument(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEInvalidArgument(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEInvalidArgument(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEOutOfMemory : public wclException
{
	typedef wclException inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEOutOfMemory(const System::UnicodeString Msg) : wclException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEOutOfMemory(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEOutOfMemory(NativeUInt Ident)/* overload */ : wclException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEOutOfMemory(System::PResStringRec ResStringRec)/* overload */ : wclException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEOutOfMemory(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEOutOfMemory(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEOutOfMemory(const System::UnicodeString Msg, int AHelpContext) : wclException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEOutOfMemory(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEOutOfMemory(NativeUInt Ident, int AHelpContext)/* overload */ : wclException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEOutOfMemory(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEOutOfMemory(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEOutOfMemory(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEOutOfMemory(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEPowerEvents : public wclException
{
	typedef wclException inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEPowerEvents(const System::UnicodeString Msg) : wclException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEPowerEvents(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEPowerEvents(NativeUInt Ident)/* overload */ : wclException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEPowerEvents(System::PResStringRec ResStringRec)/* overload */ : wclException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEPowerEvents(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEPowerEvents(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEPowerEvents(const System::UnicodeString Msg, int AHelpContext) : wclException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEPowerEvents(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEPowerEvents(NativeUInt Ident, int AHelpContext)/* overload */ : wclException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEPowerEvents(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEPowerEvents(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEPowerEvents(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEPowerEvents(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 WCL_E_SUCCESS = System::Int8(0x0);
static const int WCL_E_BASE = int(0x10000);
static const int WCL_E_INVALID_ARGUMENT = int(0x10000);
static const int WCL_E_OUT_OF_MEMORY = int(0x10001);
static const int WCL_E_MR_BASE = int(0x11000);
static const int WCL_E_MR_CLOSED = int(0x11000);
static const int WCL_E_MR_OPENED = int(0x11001);
static const int WCL_E_MR_NOT_OPENED = int(0x11002);
static const int WCL_E_MR_UNABLE_SYNCHRONIZE = int(0x11003);
static const int WCL_E_MR_UNABLE_REGISTER_SYNC_OBJ = int(0x11004);
static const int WCL_E_MR_UNABLE_CREATE_SYNC_OBJ = int(0x11005);
static const int WCL_E_MR_SYNC_OBJ_NOT_CREATED = int(0x11006);
static const int WCL_E_MR_INVALID_THREAD = int(0x11007);
static const int WCL_E_MR_UNABLE_CREATE_TERM_EVENT = int(0x11008);
static const int WCL_E_MR_INVALID_MESSAGE_PROCESSING_METHOD = int(0x11009);
static const int WCL_E_MB_BASE = int(0x12000);
static const int WCL_E_MB_RECEIVER_ALREADY_SUBSCRIBED = int(0x12000);
static const int WCL_E_MB_RECEIVER_NOT_SUBSCRIBED = int(0x12001);
static const int WCL_E_MB_CAN_NOT_INIT_HW_THREAD = int(0x12002);
static const int WCL_E_MB_CAN_NOT_START_HW_THREAD = int(0x12003);
static const int WCL_E_MB_UNABLE_CREATE_HW_OBJ = int(0x12004);
static const int WCL_E_MB_UNABLE_REGISTER_HW_NOTIFY = int(0x12005);
static const int WCL_E_MB_UNABLE_CREATE_MUTEX = int(0x12006);
static const int WCL_E_MB_NOT_CREATED = int(0x12007);
static const int WCL_E_MB_REF_COUNT_ERROR = int(0x12008);
static const int WCL_E_MB_RUNNING = int(0x12009);
static const int WCL_E_MB_INVALID_SYNC_METHOD = int(0x1200a);
static const int WCL_E_MB_WAIT_TIMEOUT = int(0x1200b);
static const int WCL_E_MB_WAIT_FAILED = int(0x1200c);
static const int WCL_E_MB_RECEIVER_NOT_FOUND = int(0x1200d);
static const int WCL_E_WINRT_BASE = int(0x13000);
static const int WCL_E_WINRT_UNABLE_CREATE_MUTEX = int(0x13000);
static const int WCL_E_WINRT_UNABLE_LOAD_CORE_DLL = int(0x13001);
static const int WCL_E_WINRT_UNABLE_LOAD_STRING_DLL = int(0x13002);
static const int WCL_E_WINRT_INIT_FAILED = int(0x13003);
static const int WCL_E_WINRT_UNABLE_CREATE_STRING = int(0x13004);
static const int WCL_E_WINRT_UNABLE_ACTIVATE_INSTANCE = int(0x13005);
static const int WCL_E_WINRT_UNABLE_CREATE_INTERFACE = int(0x13006);
static const int WCL_E_WINRT_ASYNC_OPERATION_FAILED = int(0x13007);
static const int WCL_E_WINRT_ASYNC_OPERATION_CANCELLED = int(0x13008);
static const int WCL_E_WINRT_ASYNC_OPERATION_ERROR = int(0x13009);
static const int WCL_E_WINRT_DETACH_BUFFER_FAILED = int(0x1300a);
static const int WCL_E_WINRT_ASYNC_OPERATION_TIMEOUT = int(0x1300b);
static const int WCL_E_WINUSB_BASE = int(0x14000);
static const int WCL_E_WINUSB_UNABLE_CREATE_MUTEX = int(0x14000);
static const int WCL_E_WINUSB_UNABLE_LOAD = int(0x14001);
static const int WCL_E_WINUSB_NOT_LOADED = int(0x14002);
static const int WCL_E_WINUSB_UNEXPECTED = int(0x14003);
static const int WCL_E_WINUSB_DEVICE_OPENED = int(0x14004);
static const int WCL_E_WINUSB_DEVICE_CLOSED = int(0x14005);
static const int WCL_E_WINUSB_DEVICE_NOT_OPENED = int(0x14006);
static const int WCL_E_WINUSB_OPEN_DEVICE_FAILED = int(0x14007);
static const int WCL_E_WINUSB_INIT_DEVICE_FAILED = int(0x14008);
static const int WCL_E_WINUSB_CONTROL_TRANSFER_FAILED = int(0x14009);
static const int WCL_E_WINUSB_READ_PIPE_FAILED = int(0x1400a);
static const int WCL_E_PEM_BASE = int(0x15000);
static const int WCL_E_PEM_OPENED = int(0x15000);
static const int WCL_E_PEM_CLOSED = int(0x15001);
static const int WCL_E_PEM_FEATURE_NOT_SUPPORTED = int(0x15002);
static const int WCL_E_PEM_GET_POWER_STATUS_FAILED = int(0x15003);
static const int WCL_E_PEM_CREATE_INIT_EVENT_FAILED = int(0x15004);
static const int WCL_E_PEM_CREATE_WND_THREAD_FAILED = int(0x15005);
static const int WCL_E_PEM_CREATE_WND_FAILED = int(0x15006);
static const int WCL_E_CFGMGR_BASE = int(0x16000);
static const int WCL_E_CFGMGR_LOAD_FAILED = int(0x16000);
static const int WCL_E_LAF_BASE = int(0x17000);
static const int WCL_E_LAF_NOT_FOUND = int(0x17000);
static const int WCL_E_LAF_OPEN_KEY_FAILED = int(0x17001);
static const int WCL_E_LAF_KEY_NOT_FOUND = int(0x17002);
static const int WCL_E_LAF_DLL_LOAD_FAILED = int(0x17003);
static const int WCL_E_LAF_FUNC_NOT_FOUND = int(0x17004);
static const int WCL_E_LAF_ACQUIRE_CONTEXT_FAILED = int(0x17005);
static const int WCL_E_LAF_CREATE_HASH_FAILED = int(0x17006);
static const int WCL_E_LAF_CRYPT_HASH_FAILED = int(0x17007);
static const int WCL_E_LAF_GET_CRYPTED_HASH_FAILED = int(0x17008);
static const int WCL_E_LAF_IDENTITY_NOT_FOUND = int(0x17009);
static const int WCL_E_LAF_IDENTITY_READ_FAILED = int(0x1700a);
static const int WCL_E_LAF_IDENTITY_INVALID = int(0x1700b);
static const int WCL_E_LAF_IDENTITY_EMPTY = int(0x1700c);
static const int WCL_E_LAF_IDENTITY_INVALID_FORMAT = int(0x1700d);
static const int WCL_E_LAF_UNLOCK_REQUEST_FAILED = int(0x1700e);
static const int WCL_E_LAF_GET_REQUEST_STATUS_FAILED = int(0x1700f);
static const int WCL_E_LAF_LOCKED = int(0x17010);
static const int WCL_E_LAF_UNAVAILABLE = int(0x17011);
static const int WCL_E_LAF_STATUS_UNKNOWN = int(0x17012);
static const int WCL_E_LAF_MANAGER_OPENED = int(0x17013);
static const int WCL_E_LAF_MANAGER_NOT_OPENED = int(0x17014);
static const int WCL_E_LAF_MANAGER_CLOSED = int(0x17015);
static const int WCL_E_LAF_MANAGER_CREATE_INIT_EVENT_FAILED = int(0x17016);
static const int WCL_E_LAF_MANAGER_CREATE_TERM_EVENT_FAILED = int(0x17017);
static const int WCL_E_LAF_MANAGER_START_THREAD_FAILED = int(0x17018);
static const int WCL_E_LAF_MANAGER_FEATURE_NOT_SUPPORTED = int(0x17019);
static const int WCL_E_LAF_MANAGER_GET_LAF_LIST_FAILED = int(0x1701a);
}	/* namespace Wclerrors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLERRORS)
using namespace Wclerrors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclerrorsHPP
