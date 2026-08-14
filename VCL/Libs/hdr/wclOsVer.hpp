// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclOsVer.pas' rev: 30.00 (Windows)

#ifndef WclosverHPP
#define WclosverHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclosver
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclOsVersion;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TwclOsType : unsigned int { osUnknown, osMacOS, osWinXP, osWinVista, osWin7, osWin8, osWin81, osWin10, osWin11 };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclOsVersion : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FIsWinIot;
	TwclOsType FOsType;
	System::Word FOsBuild;
	System::Word FOsMajor;
	System::Word FOsMinor;
	void __fastcall ReadIsWinIot(void);
	void __fastcall CheckWin10orAbove(void);
	void __fastcall ReadOsVersion(void);
	
public:
	__fastcall TwclOsVersion(void);
	__property bool IsWinIot = {read=FIsWinIot, nodefault};
	__property TwclOsType OsType = {read=FOsType, nodefault};
	__property System::Word OsBuild = {read=FOsBuild, nodefault};
	__property System::Word OsMajor = {read=FOsMajor, nodefault};
	__property System::Word OsMinor = {read=FOsMinor, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclOsVersion(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TwclOsVersion* wclOsVersion;
}	/* namespace Wclosver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLOSVER)
using namespace Wclosver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclosverHPP
