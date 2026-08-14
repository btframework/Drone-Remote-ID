// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclLaf.pas' rev: 30.00 (Windows)

#ifndef WcllafHPP
#define WcllafHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <wclSync.hpp>
#include <wclErrors.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wcllaf
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclLafManager;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclLafManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FActive;
	Wclsync::TwclCriticalSection* FCS;
	Wclsync::TwclManualResetEvent* FInitEvent;
	int FInitResult;
	Wclsync::TwclManualResetEvent* FTermEvent;
	Wclsync::TwclThread* FThread;
	void __fastcall WinRtThread(void);
	
public:
	__fastcall virtual TwclLafManager(void);
	__fastcall virtual ~TwclLafManager(void);
	int __fastcall Close(void);
	int __fastcall Open(void);
	int __fastcall Enum(System::Classes::TStringList* const Laf);
	int __fastcall GetIdentity(/* out */ System::UnicodeString &Pfn, /* out */ System::UnicodeString &AppName, /* out */ System::UnicodeString &Publisher);
	int __fastcall Unlock(const System::UnicodeString Laf);
	__property bool Active = {read=FActive, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wcllaf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLLAF)
using namespace Wcllaf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WcllafHPP
