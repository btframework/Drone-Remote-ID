// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclPowerEvents.pas' rev: 30.00 (Windows)

#ifndef WclpowereventsHPP
#define WclpowereventsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <wclMessaging.hpp>
#include <wclErrors.hpp>
#include <wclSync.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclpowerevents
{
//-- forward type declarations -----------------------------------------------
struct TwclPowerStatus;
class DELPHICLASS TwclPowerEventsMonitor;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TwclPowerState : unsigned int { psPowerStatusChanged, psResumeAutomatic, psResume, psSuspend, psUnknown };

enum DECLSPEC_DENUM TwclACLineStatus : unsigned int { lsOffline, lsOnline, lsBackup, lsUnknown };

enum DECLSPEC_DENUM TwclBatteryChargeStatus : unsigned int { csCapacityHigh, csCapacityLow, csCapacityCritical, csCharging, csNoSystemBattery, csUnknown };

typedef System::Set<TwclBatteryChargeStatus, TwclBatteryChargeStatus::csCapacityHigh, TwclBatteryChargeStatus::csUnknown> TwclBatteryChargeStatusFlags;

struct DECLSPEC_DRECORD TwclPowerStatus
{
public:
	TwclACLineStatus ACLineStatus;
	TwclBatteryChargeStatusFlags BatteryChargeStatus;
	System::Byte BatteryLifePercent;
	bool BatterySavingState;
	unsigned BatteryLifeTime;
	unsigned BatteryFullLifeTime;
};


typedef void __fastcall (__closure *TwclPowerStateChangedEvent)(System::TObject* Sender, const TwclPowerState State);

class PASCALIMPLEMENTATION TwclPowerEventsMonitor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclmessaging::TwclMessageProcessingMethod FMessageProcessing;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	NativeUInt FPowerDll;
	NativeUInt FPowerReg;
	HWND FWnd;
	Wclsync::TwclThread* FWndThread;
	Wclsync::TwclManualResetEvent* FWndThreadInitEvent;
	int FWndThreadInitResult;
	TwclPowerStateChangedEvent FOnPowerStateChanged;
	bool __fastcall RegisterPowerChanges(void);
	void __fastcall UnregisterPowerChanges(void);
	int __fastcall CreatePowerEventWindow(void);
	void __fastcall DestroyPowerEventWindow(void);
	bool __fastcall WndProc(const unsigned uMsg, const NativeUInt wParam, const NativeInt lParam);
	void __fastcall WndThread(void);
	bool __fastcall GetActive(void);
	void __fastcall SetMessageProcessing(const Wclmessaging::TwclMessageProcessingMethod Value);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoPowerStateChanged(const TwclPowerState State);
	
public:
	__fastcall virtual TwclPowerEventsMonitor(void);
	__fastcall virtual ~TwclPowerEventsMonitor(void);
	int __fastcall Close(void);
	int __fastcall Open(void);
	int __fastcall GetPowerStatus(/* out */ TwclPowerStatus &Status);
	__property bool Active = {read=GetActive, nodefault};
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=FMessageProcessing, write=SetMessageProcessing, nodefault};
	__property TwclPowerStateChangedEvent OnPowerStateChanged = {read=FOnPowerStateChanged, write=FOnPowerStateChanged};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wclpowerevents */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLPOWEREVENTS)
using namespace Wclpowerevents;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclpowereventsHPP
