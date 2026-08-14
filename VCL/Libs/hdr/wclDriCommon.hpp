// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclDriCommon.pas' rev: 30.00 (Windows)

#ifndef WcldricommonHPP
#define WcldricommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wcldricommon
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclDriMessage;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TwclDriVendor : unsigned int { driAsd };

typedef System::DynamicArray<System::Byte> TwclDriRawData;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclDriMessage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TwclDriRawData FData;
	TwclDriVendor FVendor;
	
public:
	__fastcall TwclDriMessage(const TwclDriRawData Data, const TwclDriVendor Vendor);
	__property TwclDriRawData Data = {read=FData};
	__property TwclDriVendor Vendor = {read=FVendor, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriMessage(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wcldricommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLDRICOMMON)
using namespace Wcldricommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WcldricommonHPP
