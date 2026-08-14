// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclBluetoothBled112.pas' rev: 30.00 (Windows)

#ifndef Wclbluetoothbled112HPP
#define Wclbluetoothbled112HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <wclBluetooth.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclbluetoothbled112
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall wclBled112GetPort(const System::UnicodeString Instance, /* out */ System::UnicodeString &Port);
extern DELPHI_PACKAGE System::Classes::TStringList* __fastcall wclBled112EnumDevices(void);
extern DELPHI_PACKAGE Wclbluetooth::TwclBluetoothRadio* __fastcall wclLoadBled112(Wclbluetooth::TwclBluetoothManager* const Manager, const System::UnicodeString Port);
}	/* namespace Wclbluetoothbled112 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLBLUETOOTHBLED112)
using namespace Wclbluetoothbled112;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Wclbluetoothbled112HPP
