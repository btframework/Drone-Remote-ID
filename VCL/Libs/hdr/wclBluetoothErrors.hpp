// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclBluetoothErrors.pas' rev: 30.00 (Windows)

#ifndef WclbluetootherrorsHPP
#define WclbluetootherrorsHPP

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

namespace Wclbluetootherrors
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS wclEBluetooth;
class DELPHICLASS wclEBluetoothManager;
class DELPHICLASS wclEBluetoothClient;
class DELPHICLASS wclEBluetoothServer;
class DELPHICLASS wclEGattClient;
class DELPHICLASS wclEGattServer;
class DELPHICLASS wclEBluetoothLeBeacon;
class DELPHICLASS wclEBluetoothLeSniffer;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEBluetooth : public Wclerrors::wclException
{
	typedef Wclerrors::wclException inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEBluetooth(const System::UnicodeString Msg) : Wclerrors::wclException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEBluetooth(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : Wclerrors::wclException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetooth(NativeUInt Ident)/* overload */ : Wclerrors::wclException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetooth(System::PResStringRec ResStringRec)/* overload */ : Wclerrors::wclException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetooth(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : Wclerrors::wclException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetooth(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : Wclerrors::wclException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEBluetooth(const System::UnicodeString Msg, int AHelpContext) : Wclerrors::wclException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEBluetooth(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : Wclerrors::wclException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetooth(NativeUInt Ident, int AHelpContext)/* overload */ : Wclerrors::wclException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetooth(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Wclerrors::wclException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetooth(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Wclerrors::wclException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetooth(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : Wclerrors::wclException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEBluetooth(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEBluetoothManager : public wclEBluetooth
{
	typedef wclEBluetooth inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEBluetoothManager(const System::UnicodeString Msg) : wclEBluetooth(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEBluetoothManager(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEBluetooth(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothManager(NativeUInt Ident)/* overload */ : wclEBluetooth(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothManager(System::PResStringRec ResStringRec)/* overload */ : wclEBluetooth(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothManager(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothManager(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEBluetoothManager(const System::UnicodeString Msg, int AHelpContext) : wclEBluetooth(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEBluetoothManager(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEBluetooth(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothManager(NativeUInt Ident, int AHelpContext)/* overload */ : wclEBluetooth(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothManager(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothManager(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothManager(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEBluetoothManager(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEBluetoothClient : public wclEBluetooth
{
	typedef wclEBluetooth inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEBluetoothClient(const System::UnicodeString Msg) : wclEBluetooth(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEBluetoothClient(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEBluetooth(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothClient(NativeUInt Ident)/* overload */ : wclEBluetooth(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothClient(System::PResStringRec ResStringRec)/* overload */ : wclEBluetooth(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothClient(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothClient(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEBluetoothClient(const System::UnicodeString Msg, int AHelpContext) : wclEBluetooth(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEBluetoothClient(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEBluetooth(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothClient(NativeUInt Ident, int AHelpContext)/* overload */ : wclEBluetooth(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothClient(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothClient(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothClient(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEBluetoothClient(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEBluetoothServer : public wclEBluetooth
{
	typedef wclEBluetooth inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEBluetoothServer(const System::UnicodeString Msg) : wclEBluetooth(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEBluetoothServer(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEBluetooth(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothServer(NativeUInt Ident)/* overload */ : wclEBluetooth(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothServer(System::PResStringRec ResStringRec)/* overload */ : wclEBluetooth(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothServer(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothServer(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEBluetoothServer(const System::UnicodeString Msg, int AHelpContext) : wclEBluetooth(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEBluetoothServer(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEBluetooth(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothServer(NativeUInt Ident, int AHelpContext)/* overload */ : wclEBluetooth(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothServer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothServer(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothServer(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEBluetoothServer(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEGattClient : public wclEBluetoothClient
{
	typedef wclEBluetoothClient inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEGattClient(const System::UnicodeString Msg) : wclEBluetoothClient(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEGattClient(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEBluetoothClient(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEGattClient(NativeUInt Ident)/* overload */ : wclEBluetoothClient(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEGattClient(System::PResStringRec ResStringRec)/* overload */ : wclEBluetoothClient(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEGattClient(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetoothClient(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEGattClient(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetoothClient(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEGattClient(const System::UnicodeString Msg, int AHelpContext) : wclEBluetoothClient(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEGattClient(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEBluetoothClient(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEGattClient(NativeUInt Ident, int AHelpContext)/* overload */ : wclEBluetoothClient(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEGattClient(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEBluetoothClient(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEGattClient(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetoothClient(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEGattClient(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetoothClient(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEGattClient(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEGattServer : public wclEBluetoothServer
{
	typedef wclEBluetoothServer inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEGattServer(const System::UnicodeString Msg) : wclEBluetoothServer(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEGattServer(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEBluetoothServer(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEGattServer(NativeUInt Ident)/* overload */ : wclEBluetoothServer(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEGattServer(System::PResStringRec ResStringRec)/* overload */ : wclEBluetoothServer(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEGattServer(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetoothServer(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEGattServer(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetoothServer(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEGattServer(const System::UnicodeString Msg, int AHelpContext) : wclEBluetoothServer(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEGattServer(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEBluetoothServer(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEGattServer(NativeUInt Ident, int AHelpContext)/* overload */ : wclEBluetoothServer(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEGattServer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEBluetoothServer(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEGattServer(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetoothServer(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEGattServer(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetoothServer(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEGattServer(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEBluetoothLeBeacon : public wclEBluetooth
{
	typedef wclEBluetooth inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEBluetoothLeBeacon(const System::UnicodeString Msg) : wclEBluetooth(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEBluetoothLeBeacon(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEBluetooth(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothLeBeacon(NativeUInt Ident)/* overload */ : wclEBluetooth(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothLeBeacon(System::PResStringRec ResStringRec)/* overload */ : wclEBluetooth(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothLeBeacon(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothLeBeacon(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEBluetoothLeBeacon(const System::UnicodeString Msg, int AHelpContext) : wclEBluetooth(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEBluetoothLeBeacon(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEBluetooth(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothLeBeacon(NativeUInt Ident, int AHelpContext)/* overload */ : wclEBluetooth(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothLeBeacon(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothLeBeacon(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothLeBeacon(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEBluetoothLeBeacon(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION wclEBluetoothLeSniffer : public wclEBluetooth
{
	typedef wclEBluetooth inherited;
	
public:
	/* Exception.Create */ inline __fastcall wclEBluetoothLeSniffer(const System::UnicodeString Msg) : wclEBluetooth(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall wclEBluetoothLeSniffer(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : wclEBluetooth(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothLeSniffer(NativeUInt Ident)/* overload */ : wclEBluetooth(Ident) { }
	/* Exception.CreateRes */ inline __fastcall wclEBluetoothLeSniffer(System::PResStringRec ResStringRec)/* overload */ : wclEBluetooth(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothLeSniffer(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall wclEBluetoothLeSniffer(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall wclEBluetoothLeSniffer(const System::UnicodeString Msg, int AHelpContext) : wclEBluetooth(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall wclEBluetoothLeSniffer(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : wclEBluetooth(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothLeSniffer(NativeUInt Ident, int AHelpContext)/* overload */ : wclEBluetooth(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall wclEBluetoothLeSniffer(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothLeSniffer(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall wclEBluetoothLeSniffer(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : wclEBluetooth(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~wclEBluetoothLeSniffer(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int WCL_E_BLUETOOTH_BASE = int(0x50000);
static const int WCL_E_BLUETOOTH_MANAGER_CLOSED = int(0x50000);
static const int WCL_E_BLUETOOTH_MANAGER_OPENED = int(0x50001);
static const int WCL_E_BLUETOOTH_MANAGER_OPEN_FAILED = int(0x50002);
static const int WCL_E_BLUETOOTH_MANAGER_EXISTS = int(0x50003);
static const int WCL_E_BLUETOOTH_DRIVER_NOT_AVAILABLE = int(0x50004);
static const int WCL_E_BLUETOOTH_HARDWARE_NOT_AVAILABLE = int(0x50005);
static const int WCL_E_BLUETOOTH_API_NOT_LOADED = int(0x50006);
static const int WCL_E_BLUETOOTH_API_INITIALIZATION_FAILED = int(0x50007);
static const int WCL_E_BLUETOOTH_API_NOT_FOUND = int(0x50008);
static const int WCL_E_BLUETOOTH_API_NOT_INITIALIZED = int(0x50009);
static const int WCL_E_BLUETOOTH_WRONG_DRIVER_VERSION = int(0x5000a);
static const int WCL_E_BLUETOOTH_RADIO_OPENED = int(0x5000b);
static const int WCL_E_BLUETOOTH_RADIO_CLOSED = int(0x5000c);
static const int WCL_E_BLUETOOTH_RADIO_REMOVED = int(0x5000d);
static const int WCL_E_BLUETOOTH_RADIO_INSTANCE_INIT_FAILED = int(0x5000e);
static const int WCL_E_BLUETOOTH_RADIO_INSTANCE_EXISTS = int(0x5000f);
static const int WCL_E_BLUETOOTH_RADIO_UNAVAILABLE = int(0x50010);
static const int WCL_E_BLUETOOTH_UNABLE_CHANGE_CONNECTABLE_STATE = int(0x50011);
static const int WCL_E_BLUETOOTH_UNABLE_CHANGE_DISCOVERABLE_STATE = int(0x50012);
static const int WCL_E_BLUETOOTH_UNABLE_CHANGE_NAME = int(0x50013);
static const int WCL_E_BLUETOOTH_FEATURE_NOT_SUPPORTED = int(0x50014);
static const int WCL_E_BLUETOOTH_UNEXPECTED = int(0x50015);
static const int WCL_E_BLUETOOTH_LINK_UNEXPECTED = int(0x50016);
static const int WCL_E_BLUETOOTH_OPERATION_FAILED = int(0x50017);
static const int WCL_E_BLUETOOTH_OPERATION_CONFLICT = int(0x50018);
static const int WCL_E_BLUETOOTH_NO_MORE_CONNECTION_ALLOWED = int(0x50019);
static const int WCL_E_BLUETOOTH_OBJECT_EXISTS = int(0x5001a);
static const int WCL_E_BLUETOOTH_OBJECT_IN_USE = int(0x5001b);
static const int WCL_E_BLUETOOTH_DISCOVERING_RUNNING = int(0x5001c);
static const int WCL_E_BLUETOOTH_DISCOVERING_NOT_RUNNING = int(0x5001d);
static const int WCL_E_BLUETOOTH_DISCOVERING_TERMINATED = int(0x5001e);
static const int WCL_E_BLUETOOTH_CANCELLED_BY_USER = int(0x5001f);
static const int WCL_E_BLUETOOTH_TIMEOUT = int(0x50020);
static const int WCL_E_BLUETOOTH_CONNECTION_TERMINATED_BY_USER = int(0x50021);
static const int WCL_E_BLUETOOTH_PENDING = int(0x50022);
static const int WCL_E_BLUETOOTH_CONNECTION_FAILED = int(0x50023);
static const int WCL_E_BLUETOOTH_DEVICE_NOT_FOUND = int(0x50024);
static const int WCL_E_BLUETOOTH_PAIRING = int(0x50025);
static const int WCL_E_BLUETOOTH_UNABLE_START_PAIRING = int(0x50026);
static const int WCL_E_BLUETOOTH_ALREADY_PAIRED = int(0x50027);
static const int WCL_E_BLUETOOTH_DEVICE_NOT_PAIRED = int(0x50028);
static const int WCL_E_BLUETOOTH_ACCESS_DENIED = int(0x50029);
static const int WCL_E_BLUETOOTH_AUTHENTICATION_FAILED = int(0x5002a);
static const int WCL_E_BLUETOOTH_REJECTED = int(0x5002b);
static const int WCL_E_BLUETOOTH_UNABLE_GET_READ_BUFFER = int(0x5002c);
static const int WCL_E_BLUETOOTH_UNABLE_GET_WRITE_BUFFER = int(0x5002d);
static const int WCL_E_BLUETOOTH_UNABLE_SET_READ_BUFFER = int(0x5002e);
static const int WCL_E_BLUETOOTH_UNABLE_SET_WRITE_BUFFER = int(0x5002f);
static const int WCL_E_BLUETOOTH_CLIENT_CONNECTED = int(0x50030);
static const int WCL_E_BLUETOOTH_CLIENT_NOT_CONNECTED = int(0x50031);
static const int WCL_E_BLUETOOTH_L2CAP_DISCONNECTED = int(0x50032);
static const int WCL_E_BLUETOOTH_INVALID_DEVICE_TYPE = int(0x50033);
static const int WCL_E_BLUETOOTH_CHANNEL_IN_USE = int(0x50034);
static const int WCL_E_BLUETOOTH_SERVICE_NOT_VALID = int(0x50035);
static const int WCL_E_BLUETOOTH_SERVICE_NOT_FOUND = int(0x50036);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_SOCKET = int(0x50037);
static const int WCL_E_BLUETOOTH_UNABLE_SET_CLIENT_SECURITY = int(0x50038);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_EVENT = int(0x50039);
static const int WCL_E_BLUETOOTH_UNABLE_SET_EVENT = int(0x5003a);
static const int WCL_E_BLUETOOTH_UNABLE_LOCK_CONNECT_MUTEX = int(0x5003b);
static const int WCL_E_BLUETOOTH_UNABLE_INIT_OVERLAPPED_OPERATION = int(0x5003c);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_DISCONNECT_EVENT = int(0x5003d);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_CONNECT_EVENT = int(0x5003e);
static const int WCL_E_BLUETOOTH_UNABLE_LOCK_SDP_MUTEX = int(0x5003f);
static const int WCL_E_BLUETOOTH_RFCOMM_SESSION_DISCONNECTED = int(0x50040);
static const int WCL_E_BLUETOOTH_RFCOMM_DOWN = int(0x50041);
static const int WCL_E_BLUETOOTH_RFCOMM_DISCONNECTED = int(0x50042);
static const int WCL_E_BLUETOOTH_UNABLE_TO_RESOLVE_ADDRESS = int(0x50043);
static const int WCL_E_BLUETOOTH_UNABLE_ADD_SDP_RECORD = int(0x50044);
static const int WCL_E_BLUETOOTH_UNABLE_SET_SERVER_SECURITY = int(0x50045);
static const int WCL_E_BLUETOOTH_LOCAL_SERVICE_ACTIVE = int(0x50046);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_SERVER = int(0x50047);
static const int WCL_E_BLUETOOTH_UNABLE_ENUMERATE_LOCAL_SERVICES = int(0x50048);
static const int WCL_E_BLUETOOTH_UNABLE_STOP_LOCAL_SERVER = int(0x50049);
static const int WCL_E_BLUETOOTH_UNABLE_TO_UPDATE_LOCAL_SERVER = int(0x5004a);
static const int WCL_E_BLUETOOTH_SETUP_COM_FAILED = int(0x5004b);
static const int WCL_E_BLUETOOTH_UNABLE_OPEN_CLIENT_COM = int(0x5004c);
static const int WCL_E_BLUETOOTH_UNABLE_OPEN_SERVER_COM = int(0x5004d);
static const int WCL_E_BLUETOOTH_WRITE_FAILED = int(0x5004e);
static const int WCL_E_BLUETOOTH_READ_FAILED = int(0x5004f);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_WND = int(0x50050);
static const int WCL_E_BLUETOOTH_UNABLE_REGISTER_MESSAGE = int(0x50051);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_SYNC_EVENT = int(0x50052);
static const int WCL_E_BLUETOOTH_SDP_TRANSACTION = int(0x50053);
static const int WCL_E_BLUETOOTH_UNABLE_START_SDP_THREAD = int(0x50054);
static const int WCL_E_BLUETOOTH_UNABLE_START_CONNECT_THREAD = int(0x50055);
static const int WCL_E_BLUETOOTH_UNABLE_START_LISTEN_THREAD = int(0x50056);
static const int WCL_E_BLUETOOTH_DISCOVERING_FAILED = int(0x50057);
static const int WCL_E_BLUETOOTH_READ_REMOTE_NAME_FAILED = int(0x50058);
static const int WCL_E_BLUETOOTH_DESTROY_COM_FAILED = int(0x50059);
static const int WCL_E_BLUETOOTH_CONNECT_COM_FAILED = int(0x5005a);
static const int WCL_E_BLUETOOTH_DISCONNECT_COM_FAILED = int(0x5005b);
static const int WCL_E_BLUETOOTH_UNABLE_TO_SWITCH_ON_OR_OFF = int(0x5005c);
static const int WCL_E_BLUETOOTH_CANNOT_ASSIGN_PSM = int(0x5005d);
static const int WCL_E_BLUETOOTH_GETLOCALINFO_FAILED = int(0x5005e);
static const int WCL_E_BLUETOOTH_DISCONNECT_SDP_FAILED = int(0x5005f);
static const int WCL_E_BLUETOOTH_UNABLE_REGISTER_COM_NOTIFICATION = int(0x50060);
static const int WCL_E_BLUETOOTH_SETLOCALINFO_FAILED = int(0x50061);
static const int WCL_E_BLUETOOTH_UNABLE_TO_GET_CONNECTED_DEVICES = int(0x50062);
static const int WCL_E_BLUETOOTH_UNABLE_CONNECT = int(0x50063);
static const int WCL_E_BLUETOOTH_CONNECT_PSM = int(0x50064);
static const int WCL_E_BLUETOOTH_SDP_PARSE_ERROR = int(0x50065);
static const int WCL_E_BLUETOOTH_UNABLE_READ_RSSI = int(0x50066);
static const int WCL_E_BLUETOOTH_UNABLE_CHANGE_PAIRING_MODE = int(0x50067);
static const int WCL_E_BLUETOOTH_SDP_ERROR = int(0x50068);
static const int WCL_E_BLUETOOTH_UNABLE_START_THREAD = int(0x50069);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_INIT_EVENT = int(0x5006a);
static const int WCL_E_BLUETOOTH_UNABLE_START_INIT_THREAD = int(0x5006b);
static const int WCL_E_BLUETOOTH_VCOM_NOT_FOUND = int(0x5006c);
static const int WCL_E_BLUETOOTH_VCOM_EXISTS = int(0x5006d);
static const int WCL_E_BLUETOOTH_CREATE_DEVICE_STATICS_FAILED = int(0x5006e);
static const int WCL_E_BLUETOOTH_START_ASYNC_OPERATION_FAILED = int(0x5006f);
static const int WCL_E_BLUETOOTH_SET_ASYNC_OPERATION_EVENT_HANDLER_FAILED = int(0x50070);
static const int WCL_E_BLUETOOTH_CREATE_DEVICE_FAILED = int(0x50071);
static const int WCL_E_BLUETOOTH_GET_ASYNC_OPERATION_RESULT_FAILED = int(0x50072);
static const int WCL_E_BLUETOOTH_GET_DEVICE_ID_FAILED = int(0x50073);
static const int WCL_E_BLUETOOTH_GET_DEVICE_PROPERTIES_FAILED = int(0x50074);
static const int WCL_E_BLUETOOTH_START_RSSI_THREAD_FAILED = int(0x50075);
static const int WCL_E_BLUETOOTH_AUTHENTICATION_DEVICE_IGNORED = int(0x50076);
static const int WCL_E_BLUETOOTH_INCOMPATIBLE_OS_BITS = int(0x50077);
static const int WCL_E_BLUETOOTH_GET_RADIOS_LIST_FAILED = int(0x50078);
static const int WCL_E_BLUETOOTH_GET_RADIOS_COUNT_FAILED = int(0x50079);
static const int WCL_E_BLUETOOTH_GET_BLUETOOTH_RADIO_FAILED = int(0x5007a);
static const int WCL_E_BLUETOOTH_UNABLE_CHANGE_RADIO_STATE = int(0x5007b);
static const int WCL_E_BLUETOOTH_UNSUPPORTED_BY_HARDWARE = int(0x5007c);
static const int WCL_E_BLUETOOTH_RADIO_CLOSING = int(0x5007d);
static const int WCL_E_BLUETOOTH_START_GET_DEV_NAME_THREAD_FAILED = int(0x5007e);
static const int WCL_E_BLUETOOTH_INVALID_PAIRING_METHOD = int(0x5007f);
static const int WCL_E_BLUETOOTH_NO_SYSTEM_RESOURCES = int(0x50080);
static const int WCL_E_BLUETOOTH_CREATE_REG_CHANGE_TERMINATION_EVENT_FAILED = int(0x50081);
static const int WCL_E_BLUETOOTH_CREATE_REG_CHANGE_RESULT_EVENT_FAILED = int(0x50082);
static const int WCL_E_BLUETOOTH_START_REG_CHANGE_THREAD_FAILED = int(0x50083);
static const int WCL_E_BLUETOOTH_REGISTER_AUTHENTICATION_CALLBACK_FAILED = int(0x50084);
static const int WCL_E_BLUETOOTH_FAILED_TO_OPEN_AUTH_AGENT_REG_KEY = int(0x50085);
static const int WCL_E_BLUETOOTH_CREATE_REG_CHANGES_NOTIFICATION_EVENT_FAILED = int(0x50086);
static const int WCL_E_BLUETOOTH_UNABLE_SET_REGISTRY_CHANGES_NOTIFICATIONS = int(0x50087);
static const int WCL_E_BLUETOOTH_UNABLE_TO_DISABLE_AUTHENTICATION_AGENT = int(0x50088);
static const int WCL_E_BLUETOOTH_PAIRED_BY_OTHER = int(0x50089);
static const int WCL_E_BLUETOOTH_DEVICE_ALREADY_INSTALLED = int(0x5008a);
static const int WCL_E_BLUETOOTH_DEVICE_NOT_CONNECTED = int(0x5008b);
static const int WCL_E_BLUETOOTH_DEVICE_NOT_INSTALLED = int(0x5008c);
static const int WCL_E_BLUETOOTH_ENUM_CONNECTION_FAILED = int(0x5008d);
static const int WCL_E_BLUETOOTH_WAIT_FAILED = int(0x5008e);
static const int WCL_E_BLUETOOTH_ADMIN_RIGHTS_REQUIRED = int(0x5008f);
static const int WCL_E_BLUETOOTH_DISCOVERING_TIMEOUT_TOO_HIGH = int(0x50090);
static const int WCL_E_BLUETOOTH_DISCOVERING_TIMEOUT_TOO_LOW = int(0x50091);
static const int WCL_E_BLUETOOTH_GET_REMOTE_ADDRESS_TYPE_FAILED = int(0x50092);
static const int WCL_E_BLUETOOTH_UNKNOWN_DEVICE_TYPE = int(0x50093);
static const int WCL_E_BLUETOOTH_START_WINRT_THREAD_FAILED = int(0x50094);
static const int WCL_E_BLUETOOTH_CREATE_WATCHER_FACTORY_FAILED = int(0x50095);
static const int WCL_E_BLUETOOTH_CREATE_FILTER_FAILED = int(0x50096);
static const int WCL_E_BLUETOOTH_CREATE_WATCHER_FAILED = int(0x50097);
static const int WCL_E_BLUETOOTH_CREATE_COMPLETION_EVENT_FAILED = int(0x50098);
static const int WCL_E_BLUETOOTH_SET_ADDED_HANDLER_FAILED = int(0x50099);
static const int WCL_E_BLUETOOTH_SET_UPDATED_HANDLER_FAILED = int(0x5009a);
static const int WCL_E_BLUETOOTH_SET_REMOVED_HANDLER_FAILED = int(0x5009b);
static const int WCL_E_BLUETOOTH_SET_COMPLETED_HANDLER_FAILED = int(0x5009c);
static const int WCL_E_BLUETOOTH_WATCHER_START_FAILED = int(0x5009d);
static const int WCL_E_BLUETOOTH_UNABLE_TO_CREATE_WRITE_EVENT = int(0x5009e);
static const int WCL_E_BLUETOOTH_DISCOVERING_CANCELED = int(0x5009f);
static const int WCL_E_BLUETOOTH_CREATE_STOPPED_EVENT_FAILED = int(0x500a0);
static const int WCL_E_BLUETOOTH_SET_EVENT_HANDLER_FAILED = int(0x500a1);
static const int WCL_E_BLUETOOTH_UNABLE_REGISTER_CONNECT_MESSAGE = int(0x500a2);
static const int WCL_E_BLUETOOTH_UNABLE_REGISTER_DISCONNECT_MESSAGE = int(0x500a3);
static const int WCL_E_BLUETOOTH_UNABLE_REGISTER_DATA_MESSAGE = int(0x500a4);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_DATA_EVENT = int(0x500a5);
static const int WCL_E_BLUETOOTH_UNABLE_CREATE_PAIRING_TIMEOUT_EVENT = int(0x500a6);
static const int WCL_E_BLUETOOTH_HARDWARE_FAILED = int(0x500a7);
static const int WCL_E_BLUETOOTH_CLASSIC_RADIO_UNAVAILABLE = int(0x500a8);
static const int WCL_E_BLUETOOTH_PAIRING_HANDLED_BY_SYSTEM = int(0x500a9);
static const int WCL_E_BLUETOOTH_RADIO_INSTANCE_NOT_FOUND = int(0x500aa);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_FAILED = int(0x500ab);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_INVALID_DRIVER = int(0x500ac);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_INVALID_PATH = int(0x500ad);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_ACCESS_DENIED = int(0x500ae);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_DEVICE_NOT_FOUND = int(0x500af);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_IN_USE = int(0x500b0);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_INVALID_PARAM = int(0x500b1);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_INVALID_NAME = int(0x500b2);
static const int WCL_E_BLUETOOTH_OPEN_RADIO_COUNT_LIMIT = int(0x500b3);
static const int WCL_E_BLUETOOTH_DRIVER_BUSY = int(0x500b4);
static const int WCL_E_BLUETOOTH_LE_BASE = int(0x51000);
static const int WCL_E_BLUETOOTH_LE_INVALID_HANDLE = int(0x51000);
static const int WCL_E_BLUETOOTH_LE_READ_NOT_PERMITTED = int(0x51001);
static const int WCL_E_BLUETOOTH_LE_WRITE_NOT_PERMITTED = int(0x51002);
static const int WCL_E_BLUETOOTH_LE_INVALID_PDU = int(0x51003);
static const int WCL_E_BLUETOOTH_LE_INSUFFICIENT_AUTHENTICATION = int(0x51004);
static const int WCL_E_BLUETOOTH_LE_REQUEST_NOT_SUPPORTED = int(0x51005);
static const int WCL_E_BLUETOOTH_LE_INVALID_OFFSET = int(0x51006);
static const int WCL_E_BLUETOOTH_LE_INSUFFICIENT_AUTHORIZATION = int(0x51007);
static const int WCL_E_BLUETOOTH_LE_PREPARE_QUEUE_FULL = int(0x51008);
static const int WCL_E_BLUETOOTH_LE_ATTRIBUTE_NOT_FOUND = int(0x51009);
static const int WCL_E_BLUETOOTH_LE_ATTRIBUTE_NOT_LONG = int(0x5100a);
static const int WCL_E_BLUETOOTH_LE_INSUFFICIENT_ENCRYPTION_KEYSIZE = int(0x5100b);
static const int WCL_E_BLUETOOTH_LE_INVALID_ATTRIBUTE_VALUE_LENGTH = int(0x5100c);
static const int WCL_E_BLUETOOTH_LE_INSUFFICIENT_ENCRYPTION = int(0x5100d);
static const int WCL_E_BLUETOOTH_LE_UNSUPPORTED_GROUP_TYPE = int(0x5100e);
static const int WCL_E_BLUETOOTH_LE_INSUFFICIENT_RESOURCES = int(0x5100f);
static const int WCL_E_BLUETOOTH_LE_SMP_FAILED = int(0x51010);
static const int WCL_E_BLUETOOTH_LE_TASK_CANCEL = int(0x51011);
static const int WCL_E_BLUETOOTH_LE_CONNECT_FAILED = int(0x51012);
static const int WCL_E_BLUETOOTH_LE_TIMEOUT = int(0x51013);
static const int WCL_E_BLUETOOTH_LE_WRONG_CONFIGURATION = int(0x51014);
static const int WCL_E_BLUETOOTH_LE_PROCEDURE_IN_PROGRESS = int(0x51015);
static const int WCL_E_BLUETOOTH_LE_OUT_OF_RANGE = int(0x51016);
static const int WCL_E_BLUETOOTH_LE_ACCESS_DENIED = int(0x51017);
static const int WCL_E_BLUETOOTH_LE_SUBSCRIPTION_ACTIVE = int(0x51018);
static const int WCL_E_BLUETOOTH_LE_ALREADY_SUBSCRIBED = int(0x51019);
static const int WCL_E_BLUETOOTH_LE_NOT_SUBSCRIBED = int(0x5101a);
static const int WCL_E_BLUETOOTH_LE_UNLIKELY = int(0x5101b);
static const int WCL_E_BLUETOOTH_LE_REMOTE_DEVICE_DISCONNECTS = int(0x5101c);
static const int WCL_E_BLUETOOTH_LE_INAVLID_USER_BUFFER = int(0x5101d);
static const int WCL_E_BLUETOOTH_LE_INCONSISTENT_DATA = int(0x5101e);
static const int WCL_E_BLUETOOTH_LE_COMMUNICATION_FAILED = int(0x5101f);
static const int WCL_E_BLUETOOTH_LE_CHARACTERISTIC_NOT_READABLE = int(0x51020);
static const int WCL_E_BLUETOOTH_LE_CREATE_WATCHER_FAILED = int(0x51021);
static const int WCL_E_BLUETOOTH_LE_SET_SCANNING_MODE_FAILED = int(0x51022);
static const int WCL_E_BLUETOOTH_LE_START_WATCHER_FAILED = int(0x51023);
static const int WCL_E_BLUETOOTH_LE_START_WINRT_THREAD_FAILED = int(0x51024);
static const int WCL_E_BLUETOOTH_LE_SET_EVENT_HANDLER_FAILED = int(0x51025);
static const int WCL_E_BLUETOOTH_LE_CREATE_DEVICE_STATICS_FAILED = int(0x51026);
static const int WCL_E_BLUETOOTH_LE_CREATE_DEVICE_FAILED = int(0x51027);
static const int WCL_E_BLUETOOTH_LE_START_ASYNC_OPERATION_FAILED = int(0x51028);
static const int WCL_E_BLUETOOTH_LE_SET_ASYNC_OPERATION_EVENT_HANDLER_FAILED = int(0x51029);
static const int WCL_E_BLUETOOTH_LE_GET_ASYNC_OPERATION_RESULT_FAILED = int(0x5102a);
static const int WCL_E_BLUETOOTH_LE_CREATE_DEVICE2_FAILED = int(0x5102b);
static const int WCL_E_BLUETOOTH_LE_GET_DEVICE_INFORMATION_FAILED = int(0x5102c);
static const int WCL_E_BLUETOOTH_LE_GET_DEVICE_INFORMATION2_FAILED = int(0x5102d);
static const int WCL_E_BLUETOOTH_LE_GET_DEVICE_INFORMATION_PAIRING_FAILED = int(0x5102e);
static const int WCL_E_BLUETOOTH_LE_GET_DEVICE_INFORMATION_PAIRING2_FAILED = int(0x5102f);
static const int WCL_E_BLUETOOTH_LE_GET_DEVICE_INFORMATION_CUSTOM_PAIRING_FAILED = int(0x51030);
static const int WCL_E_BLUETOOTH_LE_BEACON_MONITORING_RUNNING = int(0x51031);
static const int WCL_E_BLUETOOTH_LE_BEACON_MONITORING_NOT_RUNNING = int(0x51032);
static const int WCL_E_BLUETOOTH_LE_ADVERTISING_RUNNING = int(0x51033);
static const int WCL_E_BLUETOOTH_LE_ADVERTISING_NOT_RUNNING = int(0x51034);
static const int WCL_E_BLUETOOTH_LE_ADVERTISING_UNBALE_CREATE_INIT_EVENT = int(0x51035);
static const int WCL_E_BLUETOOTH_LE_ADVERTISING_UNBALE_CREATE_TERMINATE_EVENT = int(0x51036);
static const int WCL_E_BLUETOOTH_LE_ADVERTISING_UNBALE_START_THREAD = int(0x51037);
static const int WCL_E_BLUETOOTH_LE_WRITE_VALUE_TOO_LONG = int(0x51038);
static const int WCL_E_BLUETOOTH_LE_UNABLE_GET_ADVERTISER = int(0x51039);
static const int WCL_E_BLUETOOTH_LE_SUBSCRIBE_FAILED = int(0x5103a);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_NO_SUBSCRIBED_CLIENTS = int(0x5103b);
static const int WCL_E_BLUETOOTH_LE_CREATE_CONNECTION_COMPLETION_EVENT_FAILED = int(0x5103c);
static const int WCL_E_BLUETOOTH_LE_CREATE_DISCOVERING_THREAD_FAILED = int(0x5103d);
static const int WCL_E_BLUETOOTH_LE_EDDYSTONE_URL_TOO_SHORT = int(0x5103e);
static const int WCL_E_BLUETOOTH_LE_EDDYSTONE_URL_SCHEME_INVALID = int(0x5103f);
static const int WCL_E_BLUETOOTH_LE_EDDYSTONE_URL_TOO_LONG = int(0x51040);
static const int WCL_E_BLUETOOTH_LE_ASYNC_PAIR_FAILED = int(0x51041);
static const int WCL_E_BLUETOOTH_LE_ASYNC_PAIR_ERROR = int(0x51042);
static const int WCL_E_BLUETOOTH_LE_MANUAL_PAIRING_REQUIRED = int(0x51043);
static const int WCL_E_BLUETOOTH_LE_AUTH_NOT_READY_TO_PAIR = int(0x51044);
static const int WCL_E_BLUETOOTH_LE_AUTH_NOT_PAIRED = int(0x51045);
static const int WCL_E_BLUETOOTH_LE_AUTH_CONNECTION_REJECTED = int(0x51046);
static const int WCL_E_BLUETOOTH_LE_AUTH_TOO_MANY_CONNECTIONS = int(0x51047);
static const int WCL_E_BLUETOOTH_LE_AUTH_HARDWARE_FAILURE = int(0x51048);
static const int WCL_E_BLUETOOTH_LE_AUTH_TIMEOUT = int(0x51049);
static const int WCL_E_BLUETOOTH_LE_AUTH_NOT_ALLOWED = int(0x5104a);
static const int WCL_E_BLUETOOTH_LE_AUTH_FAILURE = int(0x5104b);
static const int WCL_E_BLUETOOTH_LE_AUTH_NO_SUPPORTED_PROFILE = int(0x5104c);
static const int WCL_E_BLUETOOTH_LE_AUTH_PROTECTION_LEVEL_COULD_NOT_BE_MET = int(0x5104d);
static const int WCL_E_BLUETOOTH_LE_AUTH_ACCESS_DENIED = int(0x5104e);
static const int WCL_E_BLUETOOTH_LE_AUTH_INVALID_CEREMONY_DATA = int(0x5104f);
static const int WCL_E_BLUETOOTH_LE_AUTH_PAIRING_CANCELED = int(0x51050);
static const int WCL_E_BLUETOOTH_LE_AUTH_OPERATION_ALREADY_IN_POROGRESS = int(0x51051);
static const int WCL_E_BLUETOOTH_LE_AUTH_REQUIRED_HANDLER_NOT_REGISTERED = int(0x51052);
static const int WCL_E_BLUETOOTH_LE_AUTH_REJECTED_BY_HANDLER = int(0x51053);
static const int WCL_E_BLUETOOTH_LE_AUTH_REMOTE_DEVICE_HAS_ASSOCIATION = int(0x51054);
static const int WCL_E_BLUETOOTH_LE_AUTH_FAILED = int(0x51055);
static const int WCL_E_BLUETOOTH_LE_SET_PROTECTION_LEVEL_FAILED = int(0x51056);
static const int WCL_E_BLUETOOTH_LE_CHARACTERISTIC_NOT_WRITABLE = int(0x51057);
static const int WCL_E_BLUETOOTH_LE_DEVICE_NOT_DISCOVERED = int(0x51058);
static const int WCL_E_BLUETOOTH_LE_ALREADY_PAIRED = int(0x51059);
static const int WCL_E_BLUETOOTH_LE_UNSUPPORTED_BY_HARDWARE = int(0x5105a);
static const int WCL_E_BLUETOOTH_LE_CREATE_DISCOVERING_EVENT_FAILED = int(0x5105b);
static const int WCL_E_BLUETOOTH_LE_DEVICE_NOT_FOUND = int(0x5105c);
static const int WCL_E_BLUETOOTH_LE_GET_DEVICE_ID_FAILED = int(0x5105d);
static const int WCL_E_BLUETOOTH_LE_GET_DEVICE_PROPERTIES_FAILED = int(0x5105e);
static const int WCL_E_BLUETOOTH_LE_FEATURE_NOT_SUPPORTED = int(0x5105f);
static const int WCL_E_BLUETOOTH_LE_UNABLE_READ_RSSI = int(0x51060);
static const int WCL_E_BLUETOOTH_LE_START_RSSI_THREAD_FAILED = int(0x51061);
static const int WCL_E_BLUETOOTH_LE_APPLICATION = int(0x51062);
static const int WCL_E_BLUETOOTH_LE_AUTH_REPEATED_ATTEMPTS = int(0x51063);
static const int WCL_E_BLUETOOTH_LE_AUTH_OOB_NOT_AVAILABLE = int(0x51064);
static const int WCL_E_BLUETOOTH_LE_GET_ROOT_SERVICE_FAILED = int(0x51065);
static const int WCL_E_BLUETOOTH_LE_GET_SERVICE_HANDLE_FAILED = int(0x51066);
static const int WCL_E_BLUETOOTH_LE_GET_CHARACTERISTIC_HANDLE_FAILED = int(0x51067);
static const int WCL_E_BLUETOOTH_LE_GET_DESCRIPTOR_HANDLE_FAILED = int(0x51068);
static const int WCL_E_BLUETOOTH_LE_GET_DESCRIPTOR_UUID_FAILED = int(0x51069);
static const int WCL_E_BLUETOOTH_LE_GET_PRESENTATION_FORMATS_FAILED = int(0x5106a);
static const int WCL_E_BLUETOOTH_LE_GET_PRESENTATION_FORMATS_LIST_SIZE_FAILED = int(0x5106b);
static const int WCL_E_BLUETOOTH_LE_GET_PRESENTATION_FORMAT_FAILED = int(0x5106c);
static const int WCL_E_BLUETOOTH_LE_GET_PRESENTATION_FORMAT_TYPE_FAILED = int(0x5106d);
static const int WCL_E_BLUETOOTH_LE_GET_PRESENTATION_FORMAT_EXPONENT_FAILED = int(0x5106e);
static const int WCL_E_BLUETOOTH_LE_GET_PRESENTATION_FORMAT_UNIT_FAILED = int(0x5106f);
static const int WCL_E_BLUETOOTH_LE_GET_PRESENTATION_FORMAT_NAMESPACE_FAILED = int(0x51070);
static const int WCL_E_BLUETOOTH_LE_GET_PRESENTATION_FORMAT_DESCRIPTION_FAILED = int(0x51071);
static const int WCL_E_BLUETOOTH_LE_GET_DESCRIPTOR_VALUE_SIZE_FAILED = int(0x51072);
static const int WCL_E_BLUETOOTH_LE_GET_DESCRIPTOR_VALUE_RAW_DATA_FAILED = int(0x51073);
static const int WCL_E_BLUETOOTH_LE_GET_DESCRIPTOR_VALUE_DATA_FAILED = int(0x51074);
static const int WCL_E_BLUETOOTH_LE_GET_CHARACTERISTIC_UUID_FAILED = int(0x51075);
static const int WCL_E_BLUETOOTH_LE_GET_CHARACTERISTIC_PROPETIES_FAILED = int(0x51076);
static const int WCL_E_BLUETOOTH_LE_GET_DESCRIPTOR_VALUE_DATA_BUFFER_FAILED = int(0x51077);
static const int WCL_E_BLUETOOTH_LE_GET_CHARACTERISTIC_VALUE_DATA_BUFFER_FAILED = int(0x51078);
static const int WCL_E_BLUETOOTH_LE_GET_CHARACTERISTIC_VALUE_SIZE_FAILED = int(0x51079);
static const int WCL_E_BLUETOOTH_LE_GET_CHARACTERISITC_VALUE_RAW_DATA_FAILED = int(0x5107a);
static const int WCL_E_BLUETOOTH_LE_GET_CHARACTERISITC_VALUE_DATA_FAILED = int(0x5107b);
static const int WCL_E_BLUETOOTH_LE_GET_DESCRIPTORS_LIST_SIZE_FAILED = int(0x5107c);
static const int WCL_E_BLUETOOTH_LE_GET_SERVICE_UUID_FAILED = int(0x5107d);
static const int WCL_E_BLUETOOTH_LE_GET_CHARACTERISITCS_LIST_SIZE_FAILED = int(0x5107e);
static const int WCL_E_BLUETOOTH_LE_GET_SERVICES_LIST_SIZE_FAILED = int(0x5107f);
static const int WCL_E_BLUETOOTH_LE_START_GET_DEV_CONNECTED_STATUS_THREAD_FAILED = int(0x51080);
static const int WCL_E_BLUETOOTH_LE_CONNECTION_ESTABLISHING_FAILED = int(0x51081);
static const int WCL_E_BLUETOOTH_LE_GET_CONNECTED_STATUS_FAILED = int(0x51082);
static const int WCL_E_BLUETOOTH_LE_START_GET_DEV_PAIRED_STATUS_THREAD_FAILED = int(0x51083);
static const int WCL_E_BLUETOOTH_LE_MIC_FAILED = int(0x51084);
static const int WCL_E_BLUETOOTH_LE_GET_DEVICE_PAIRED_FAILED = int(0x51085);
static const int WCL_E_BLUETOOTH_LE_PROTOCOL_ERROR = int(0x51086);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CHARACTERISTIC_ADDED = int(0x51087);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CHARACTERISTIC_REMOVED = int(0x51088);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SERVICE_ADDED = int(0x51089);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SERVICE_REMOVED = int(0x5108a);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_RUNNING = int(0x5108b);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_NOT_RUNNING = int(0x5108c);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_INIT_EVENT_FAILED = int(0x5108d);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_TERM_EVENT_FAILED = int(0x5108e);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_THREAD_FAILED = int(0x5108f);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_GET_SERVICE_FAILED = int(0x51090);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_PARAMS_FAILED = int(0x51091);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_READ_PROTECTION_FAILED = int(0x51092);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_WRITE_PROTECTION_FAILED = int(0x51093);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_PROPERTIES_FAILED = int(0x51094);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_CHARACTERISTIC_FAILED = int(0x51095);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_INVALID_CHARACTERISTIC = int(0x51096);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_ADV_PARAMS_FAILED = int(0x51097);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_PERIPHERAL_MODE_NOT_SUPPORTED = int(0x51098);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_START_FAILED = int(0x51099);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_SERVICE_FAILED = int(0x5109a);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_INVALID_SERVICE = int(0x5109b);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_NOT_INITIALIZED = int(0x5109c);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_INITIALIZED = int(0x5109d);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_WRITE_EVENT_HANDLER_FAILED = int(0x5109e);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_READ_EVENT_HANDLER_FAILED = int(0x5109f);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_CLIENTS_CHANGED_EVENT_HANDLER_FAILED = int(0x510a0);
static const int WCL_E_BLUETOOTH_LE_UNSUBSCRIBE_FAILED = int(0x510a1);
static const int WCL_E_BLUETOOTH_LE_INVALID_CONNECTION_PARAMETERS_VALUE = int(0x510a2);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CHARACTERISTIC_NOT_NOTIFIABLE = int(0x510a3);
static const int WCL_E_BLUETOOTH_LE_DIRECT_ADVERTISING_TIMEOUT = int(0x510a4);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_MUTEX_FAILED = int(0x510a5);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_OTHER_INSTANCE_RUNNING = int(0x510a6);
static const int WCL_E_BLUETOOTH_LE_CLIENT_NOT_CONNECTED = int(0x510a7);
static const int WCL_E_BLUETOOTH_LE_UNEXPECTED = int(0x510a8);
static const int WCL_E_BLUETOOTH_LE_SET_SCAN_PARAMS_FAILED = int(0x510a9);
static const int WCL_E_BLUETOOTH_LE_WRITE_WITHOUT_RESPONSE_NOT_SUPPORTED = int(0x510aa);
static const int WCL_E_BLUETOOTH_LE_CREATE_SCAN_PARAMS_SET_EVENT_FAILED = int(0x510ab);
static const int WCL_E_BLUETOOTH_LE_SET_ADV_PARAMS_FAILED = int(0x510ac);
static const int WCL_E_BLUETOOTH_LE_WRONG_CONNECTION_INTERVAL = int(0x510ad);
static const int WCL_E_BLUETOOTH_LE_GET_CONNECTION_PHY_VALUE_FAILED = int(0x510ae);
static const int WCL_E_BLUETOOTH_LE_OPEN_PROCESS_TOKEN_FAILED = int(0x510af);
static const int WCL_E_BLUETOOTH_LE_LOOKUP_PRIVILEGE_FAILED = int(0x510b0);
static const int WCL_E_BLUETOOTH_LE_ADJUST_PRIVILEGE_FAILED = int(0x510b1);
static const int WCL_E_BLUETOOTH_LE_ALLOCATE_SID_FAILED = int(0x510b2);
static const int WCL_E_BLUETOOTH_LE_TAKE_OWNERSHIP_FAILED = int(0x510b3);
static const int WCL_E_BLUETOOTH_LE_SET_ACL_FAILED = int(0x510b4);
static const int WCL_E_BLUETOOTH_LE_SET_REGISTRY_RIGHTS_FAILED = int(0x510b5);
static const int WCL_E_BLUETOOTH_LE_INVALID_CHARACTERISTIC_CONFIGURATION = int(0x510b6);
static const int WCL_E_BLUETOOTH_LE_CREATE_STOPPED_EVENT_FAILED = int(0x510b7);
static const int WCL_E_BLUETOOTH_LE_DISCOVERING_TERMINATED = int(0x510b8);
static const int WCL_E_BLUETOOTH_LE_DISCOVERING_CANCELED = int(0x510b9);
static const int WCL_E_BLUETOOTH_LE_CONNECTION_TERMINATED = int(0x510ba);
static const int WCL_E_BLUETOOTH_LE_INIT_ADVERTISEMENT_FAILED = int(0x510bb);
static const int WCL_E_BLUETOOTH_LE_UNSUPPORTED_ADVERTISEMENT_TYPE = int(0x510bc);
static const int WCL_E_BLUETOOTH_LE_INVALID_ADVERTISEMENT_FORMAT = int(0x510bd);
static const int WCL_E_BLUETOOTH_LE_RADIO_UNAVAILABLE = int(0x510be);
static const int WCL_E_BLUETOOTH_LE_GET_CONNECTION_PARAMS_FAILED = int(0x510bf);
static const int WCL_E_BLUETOOTH_LE_INVALID_CONNECTION_PARAMS = int(0x510c0);
static const int WCL_E_BLUETOOTH_LE_SET_CONNECTION_PARAMS_FAILED = int(0x510c1);
static const int WCL_E_BLUETOOTH_LE_EXT_ADV_NOT_SUPPORTED = int(0x510c2);
static const int WCL_E_BLUETOOTH_LE_SET_EXT_ADV_FAILED = int(0x510c3);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_DISCONNECT_EVENT_HANDLER_FAILED = int(0x510c4);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CLIENT_NOT_SUBSCRIBED = int(0x510c5);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CLIENT_GET_MAX_NOTIFICATION_SIZE_FAILED = int(0x510c6);
static const int WCL_E_BLUETOOTH_LE_GET_MAX_PDU_SIZE_FAILED = int(0x510c7);
static const int WCL_E_BLUETOOTH_LE_AUTH_UNKNOWN = int(0x510c8);
static const int WCL_E_BLUETOOTH_LE_GATT_CLIENT_SET_DISCONNECT_EVENT_HANDLER_FAILED = int(0x510c9);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_DESCRIPTION_FAILED = int(0x510ca);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_GET_FORMATS_LIST_FAILED = int(0x510cb);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_FORMAT_STATICS_FAILED = int(0x510cc);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_FORMAT_FAILED = int(0x510cd);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_ADD_FORMAT_FAILED = int(0x510ce);
static const int WCL_E_BLUETOOTH_LE_GET_USER_DESCRIPTION_FAILED = int(0x510cf);
static const int WCL_E_BLUETOOTH_LE_INVALID_DESCRIPTOR_UUID = int(0x510d0);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_CREATE_DESCRIPTOR_FAILED = int(0x510d1);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_ADD_DESCRIPTOR_FAILED = int(0x510d2);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_DESCRIPTOR_VALUE_FAILED = int(0x510d3);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_DESCRIPTOR_READ_PROTECTION_FAILED = int(0x510d4);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SET_DESCRIPTOR_WRITE_PROTECTION_FAILED = int(0x510d5);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_GET_CREATE_DESCRIPTOR_RESULT_FAILED = int(0x510d6);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_GET_CREATE_DESCRIPTOR_ERROR_FAILED = int(0x510d7);
static const int WCL_E_BLUETOOTH_LE_GET_CONNECTION_PHY_FAILED = int(0x510d8);
static const int WCL_E_BLUETOOTH_LE_GET_CONNECTION_TX_PHY_FAILED = int(0x510d9);
static const int WCL_E_BLUETOOTH_LE_GET_CONNECTION_RX_PHY_FAILED = int(0x510da);
static const int WCL_E_BLUETOOTH_LE_NOTHING_ADVERTISE = int(0x510db);
static const int WCL_E_BLUETOOTH_LE_TOO_MANY_ADVERTISEMENTS = int(0x510dc);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_SEND_RESPONSE_FAILED = int(0x510dd);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_WRITE_WITHOUT_RESPONSE = int(0x510de);
static const int WCL_E_BLUETOOTH_LE_GATT_SERVER_RESPONSE_ALREADY_SENT = int(0x510df);
static const int WCL_E_BLUETOOTH_LE_WATCHER_DRIVER_REJECTED_SCAN_PARAMS = int(0x510e0);
static const int WCL_E_BLUETOOTH_LE_ADVERTISEMENT_PHY_NOT_SUPPORTED = int(0x510e1);
static const int WCL_E_BLUETOOTH_LE_ADVERTISEMENT_PRIMARY_PHY_NOT_SUPPORTED = int(0x510e2);
static const int WCL_E_BLUETOOTH_LE_ADVERTISEMENT_SECONDARY_PHY_NOT_SUPPORTED = int(0x510e3);
static const int WCL_E_BLUETOOTH_LE_RELIABLE_WRITE_ACTIVE = int(0x510e4);
static const int WCL_E_BLUETOOTH_LE_INVALID_WRITE_OPERATION = int(0x510e5);
static const int WCL_E_BLUETOOTH_LE_RELIABLE_WRITE_WRONG_ATTRIBUTE = int(0x510e6);
static const int WCL_E_BLUETOOTH_LE_RELIABLE_WRITE_NOT_STARTED = int(0x510e7);
static const int WCL_E_BLUETOOTH_LE_RELIABLE_WRITE_ALREADY_STARTED = int(0x510e8);
static const int WCL_E_BLUETOOTH_LE_RELIABLE_WRITE_NOT_SUPPORTED = int(0x510e9);
static const int WCL_E_BLUETOOTH_LE_LONG_WRITE_NOT_SUPPORTED = int(0x510ea);
static const int WCL_E_WII_REMOTE_BASE = int(0x52000);
static const int WCL_E_WII_REMOTE_ENUM_HID_FAILED = int(0x52000);
static const int WCL_E_WII_REMOTE_NOT_INSTALLED = int(0x52001);
static const int WCL_E_WII_REMOTE_CREATE_READ_EVENT_FAILED = int(0x52002);
static const int WCL_E_WII_REMOTE_CREATE_WRITE_EVENT_FAILED = int(0x52003);
static const int WCL_E_WII_REMOTE_CONNECT_FAILED = int(0x52004);
static const int WCL_E_WII_REMOTE_HID_UNABLE_CREATE_MUTEX = int(0x52005);
static const int WCL_E_WII_REMOTE_HID_SUBSYSTEM_NOT_AVAILABLE = int(0x52006);
static const int WCL_E_WII_REMOTE_HID_NOT_SUPPORTED = int(0x52007);
static const int WCL_E_WII_REMOTE_READ_REPORT_FAILED = int(0x52008);
static const int WCL_E_WII_REMOTE_WRITE_REPORT_FAILED = int(0x52009);
static const int WCL_E_WII_REMOTE_WRITE_REPORT_TIMEOUT = int(0x5200a);
static const int WCL_E_WII_REMOTE_CREATE_READ_MEMORY_EVENT_FAILED = int(0x5200b);
static const int WCL_E_WII_REMOTE_CREATE_WRITE_MEMORY_EVENT_FAILED = int(0x5200c);
static const int WCL_E_WII_REMOTE_NOT_INITIALIZED = int(0x5200d);
static const int WCL_E_WII_REMOTE_IR_LEVEL_WRONG = int(0x5200e);
static const int WCL_E_WII_REMOTE_IR_LEVEL_UNKNOWN = int(0x5200f);
static const int WCL_E_WII_REMOTE_IR_MODE_WRONG = int(0x52010);
static const int WCL_E_WII_REMOTE_IR_MODE_UNKNOWN = int(0x52011);
static const int WCL_E_WII_REMOTE_EXTENSION_NOT_FOUND = int(0x52012);
static const int WCL_E_WII_REMOTE_EXTENSION_UNKNOWN = int(0x52013);
static const int WCL_E_WII_REMOTE_FEATURE_NOT_SUPPORTED = int(0x52014);
static const int WCL_E_WII_REMOTE_ACCELEROMETER_ENABLED = int(0x52015);
static const int WCL_E_WII_REMOTE_ACCELEROMETER_DISABLED = int(0x52016);
static const int WCL_E_WII_REMOTE_INVALID_CONFIGURATION = int(0x52017);
static const int WCL_E_BLED112_BASE = int(0x53000);
static const int WCL_E_BLED112_INVALID_PARAM = int(0x53000);
static const int WCL_E_BLED112_WRONG_STATE = int(0x53001);
static const int WCL_E_BLED112_OUT_OF_MEMORY = int(0x53002);
static const int WCL_E_BLED112_NOT_IMPLEMENTED = int(0x53003);
static const int WCL_E_BLED112_INVALID_COMMAND = int(0x53004);
static const int WCL_E_BLED112_TIMEOUT = int(0x53005);
static const int WCL_E_BLED112_NOT_CONNECTED = int(0x53006);
static const int WCL_E_BLED112_FLOW = int(0x53007);
static const int WCL_E_BLED112_USER_ATTRIBUTE = int(0x53008);
static const int WCL_E_BLED112_INVALID_LICENSE_KEY = int(0x53009);
static const int WCL_E_BLED112_COMMAND_TOO_LONG = int(0x5300a);
static const int WCL_E_BLED112_OUT_OF_BONDS = int(0x5300b);
static const int WCL_E_BLED112_SCRIPT_OVERFLOW = int(0x5300c);
static const int WCL_E_BLED112_TOO_MANY_CONNECTIONS = int(0x5300d);
static const int WCL_E_BLED112_BUSY = int(0x5300e);
static const int WCL_E_BLED112_COMMAND_IN_POROGRESS = int(0x5300f);
static const int WCL_E_BLED112_SET_HANDFLOW_FAILED = int(0x53010);
static const int WCL_E_BLED112_INVALID_RESPONSE_SIZE = int(0x53011);
static const int WCL_E_BLED112_SET_QUEUE_SIZE_FAILED = int(0x53012);
static const int WCL_E_BLED112_SET_TIMEOUTS_FAILED = int(0x53013);
static const int WCL_E_BLED112_SET_BAUD_RATE_FAILED = int(0x53014);
static const int WCL_E_BLED112_SET_DTR_FAILED = int(0x53015);
static const int WCL_E_BLED112_SET_LINE_CONTROL_FAILED = int(0x53016);
static const int WCL_E_BLED112_SET_CHARS_FAILED = int(0x53017);
static const int WCL_E_BLED112_PAIR_DURING_CONNECT = int(0x53018);
static const int WCL_E_BLE_SNIFFER_BASE = int(0x54000);
static const int WCL_E_BLE_SNIFFER_ACTIVE = int(0x54000);
static const int WCL_E_BLE_SNIFFER_NOT_ACTIVE = int(0x54001);
static const int WCL_E_BLE_SNIFFER_CREATE_INIT_EVENT_FAILED = int(0x54002);
static const int WCL_E_BLE_SNIFFER_CREATE_TERM_EVENT_FAILED = int(0x54003);
static const int WCL_E_BLE_SNIFFER_START_THREAD_FAILED = int(0x54004);
static const int WCL_E_BLE_SNIFFER_CC2540_DEVICE_NOT_FOUND = int(0x54005);
static const int WCL_E_BLE_SNIFFER_GET_IDENT_FAILED = int(0x54006);
static const int WCL_E_BLE_SNIFFER_SET_POWER_FAILED = int(0x54007);
static const int WCL_E_BLE_SNIFFER_GET_POWER_FAILED = int(0x54008);
static const int WCL_E_BLE_SNIFFER_SET_CHANNEL_FAILED = int(0x54009);
static const int WCL_E_BLE_SNIFFER_START_CAPTURE_FAILED = int(0x5400a);
extern DELPHI_PACKAGE bool __fastcall wclTestBluetoothFrameworkState(void);
}	/* namespace Wclbluetootherrors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLBLUETOOTHERRORS)
using namespace Wclbluetootherrors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclbluetootherrorsHPP
