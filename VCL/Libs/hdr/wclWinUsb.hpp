// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclWinUsb.pas' rev: 30.00 (Windows)

#ifndef WclwinusbHPP
#define WclwinusbHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <wclWinAPI.hpp>
#include <wclErrors.hpp>
#include <wclSync.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclwinusb
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclWinUsbDevice;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWinUsbDevice : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclsync::TwclCriticalSection* FCS;
	System::UnicodeString FDevicePath;
	NativeUInt FDevHandle;
	NativeUInt FUsbHandle;
	bool __fastcall GetActive(void);
	
public:
	__fastcall virtual TwclWinUsbDevice(void);
	__fastcall virtual ~TwclWinUsbDevice(void);
	int __fastcall Close(void);
	int __fastcall Open(const System::UnicodeString DevicePath);
	int __fastcall ConstrolTranser(const System::Byte RequestType, const System::Byte Request, const System::Word Value, const System::Word Index, const System::Word Length, const void * Data, /* out */ unsigned &Transferred);
	int __fastcall ReadPipe(const System::Byte PipeId, const void * Data, const unsigned Length, /* out */ unsigned &Received);
	__property bool Active = {read=GetActive, nodefault};
	__property System::UnicodeString DevicePath = {read=FDevicePath};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wclwinusb */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLWINUSB)
using namespace Wclwinusb;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclwinusbHPP
