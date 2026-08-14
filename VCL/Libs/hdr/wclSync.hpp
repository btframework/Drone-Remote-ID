// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclSync.pas' rev: 30.00 (Windows)

#ifndef WclsyncHPP
#define WclsyncHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclsync
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclSyncObject;
class DELPHICLASS TwclWaitableSyncObject;
class DELPHICLASS TwclNamedSyncObject;
class DELPHICLASS TwclCriticalSection;
class DELPHICLASS TwclMutex;
class DELPHICLASS TwclEvent;
class DELPHICLASS TwclAutoResetEvent;
class DELPHICLASS TwclManualResetEvent;
class DELPHICLASS TwclThread;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclSyncObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	__fastcall virtual TwclSyncObject(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclSyncObject(void) { }
	
};

#pragma pack(pop)

typedef TwclWaitableSyncObject* *PwclWaitableSyncObject;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWaitableSyncObject : public TwclSyncObject
{
	typedef TwclSyncObject inherited;
	
private:
	NativeUInt FHandle;
	
protected:
	__fastcall virtual TwclWaitableSyncObject(const NativeUInt Handle);
	virtual unsigned __fastcall WaitOne(void)/* overload */;
	virtual unsigned __fastcall WaitOne(const unsigned Timeout)/* overload */;
	
public:
	__fastcall virtual ~TwclWaitableSyncObject(void);
	__classmethod unsigned __fastcall WaitAll(const unsigned Count, const PwclWaitableSyncObject Objects)/* overload */;
	__classmethod unsigned __fastcall WaitAll(const unsigned Count, const PwclWaitableSyncObject Objects, const unsigned Timeout)/* overload */;
	__classmethod unsigned __fastcall WaitAny(const unsigned Count, const PwclWaitableSyncObject Objects)/* overload */;
	__classmethod unsigned __fastcall WaitAny(const unsigned Count, const PwclWaitableSyncObject Objects, const unsigned Timeout)/* overload */;
	__property NativeUInt Handle = {read=FHandle, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclNamedSyncObject : public TwclWaitableSyncObject
{
	typedef TwclWaitableSyncObject inherited;
	
protected:
	__fastcall virtual TwclNamedSyncObject(const NativeUInt Handle);
	__classmethod System::UnicodeString __fastcall MakeUniqueName(const System::UnicodeString Name);
public:
	/* TwclWaitableSyncObject.Destroy */ inline __fastcall virtual ~TwclNamedSyncObject(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclCriticalSection : public TwclSyncObject
{
	typedef TwclSyncObject inherited;
	
private:
	_RTL_CRITICAL_SECTION FCS;
	
public:
	__fastcall virtual TwclCriticalSection(void);
	__fastcall virtual ~TwclCriticalSection(void);
	void __fastcall Enter(void);
	void __fastcall Leave(void);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclMutex : public TwclNamedSyncObject
{
	typedef TwclNamedSyncObject inherited;
	
protected:
	__fastcall virtual TwclMutex(const NativeUInt Handle)/* overload */;
	
public:
	__classmethod TwclMutex* __fastcall Create()/* overload */;
	__classmethod TwclMutex* __fastcall Create(const System::UnicodeString Name)/* overload */;
	__classmethod TwclMutex* __fastcall Create(const System::UnicodeString Name, /* out */ bool &Exist)/* overload */;
	__classmethod TwclMutex* __fastcall Open(const System::UnicodeString Name);
	unsigned __fastcall Acquire(void)/* overload */;
	unsigned __fastcall Acquire(const unsigned Timeout)/* overload */;
	bool __fastcall Release(void);
public:
	/* TwclWaitableSyncObject.Destroy */ inline __fastcall virtual ~TwclMutex(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclEvent : public TwclNamedSyncObject
{
	typedef TwclNamedSyncObject inherited;
	
protected:
	__fastcall virtual TwclEvent(const NativeUInt Handle)/* overload */;
	
public:
	virtual unsigned __fastcall WaitOne(void)/* overload */;
	virtual unsigned __fastcall WaitOne(const unsigned Timeout)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset, const System::UnicodeString Name)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset, const System::UnicodeString Name, /* out */ bool &Exist)/* overload */;
	__classmethod TwclEvent* __fastcall Open(const System::UnicodeString Name);
	bool __fastcall ResetEvent(void);
	bool __fastcall SetEvent(void);
public:
	/* TwclWaitableSyncObject.Destroy */ inline __fastcall virtual ~TwclEvent(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclAutoResetEvent : public TwclEvent
{
	typedef TwclEvent inherited;
	
protected:
	__fastcall virtual TwclAutoResetEvent(const NativeUInt Handle)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset, const System::UnicodeString Name)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset, const System::UnicodeString Name, /* out */ bool &Exist)/* overload */;
	
public:
	__classmethod TwclAutoResetEvent* __fastcall Create()/* overload */;
	__classmethod TwclAutoResetEvent* __fastcall Create(const System::UnicodeString Name)/* overload */;
	__classmethod TwclAutoResetEvent* __fastcall Create(const System::UnicodeString Name, /* out */ bool &Exist)/* overload */;
public:
	/* TwclWaitableSyncObject.Destroy */ inline __fastcall virtual ~TwclAutoResetEvent(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclManualResetEvent : public TwclEvent
{
	typedef TwclEvent inherited;
	
protected:
	__fastcall virtual TwclManualResetEvent(const NativeUInt Handle)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset, const System::UnicodeString Name)/* overload */;
	__classmethod TwclEvent* __fastcall Create(const bool ManualReset, const System::UnicodeString Name, /* out */ bool &Exist)/* overload */;
	
public:
	__classmethod TwclManualResetEvent* __fastcall Create()/* overload */;
	__classmethod TwclManualResetEvent* __fastcall Create(const System::UnicodeString Name)/* overload */;
	__classmethod TwclManualResetEvent* __fastcall Create(const System::UnicodeString Name, /* out */ bool &Exist)/* overload */;
public:
	/* TwclWaitableSyncObject.Destroy */ inline __fastcall virtual ~TwclManualResetEvent(void) { }
	
};

#pragma pack(pop)

typedef unsigned TwclProcessId;

typedef unsigned TwclThreadId;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclThread : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TwclThread(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwclThread(void) { }
	
};

#pragma pack(pop)

typedef int TwclThreadResult;

//-- var, const, procedure ---------------------------------------------------
static const unsigned WCL_WAIT_INFINITE = unsigned(0xffffffff);
static const System::Int8 WCL_WAIT_OBJECT_0 = System::Int8(0x0);
static const System::Byte WCL_WAIT_ABANDONED_0 = System::Byte(0x80);
static const System::Byte WCL_WAIT_ABANDONED = System::Byte(0x80);
static const System::Word WCL_WAIT_TIMEOUT = System::Word(0x102);
static const unsigned WCL_WAIT_FAILED = unsigned(0xffffffff);
static const int WCL_WAIT_ERROR = int(-1);
static const System::Word WCL_STILL_ACTIVE = System::Word(0x103);
extern DELPHI_PACKAGE TwclProcessId __fastcall wclGetCurrentProcessId(void);
extern DELPHI_PACKAGE TwclThreadId __fastcall wclGetCurrentThreadId(void);
extern DELPHI_PACKAGE TwclThread* __fastcall wclCreateThread(const System::TThreadFunc Proc, const void * Param, /* out */ TwclThreadId &ThreadId)/* overload */;
extern DELPHI_PACKAGE TwclThread* __fastcall wclCreateThread(const System::TThreadFunc Proc, const void * Param, const bool Suspend)/* overload */;
extern DELPHI_PACKAGE TwclThread* __fastcall wclCreateThread(const System::TThreadFunc Proc, const void * Param)/* overload */;
extern DELPHI_PACKAGE void __fastcall wclResumeThread(TwclThread* Thread);
extern DELPHI_PACKAGE void __fastcall wclSuspendThread(TwclThread* Thread);
extern DELPHI_PACKAGE unsigned __fastcall wclGetThreadResult(TwclThread* const Thread);
extern DELPHI_PACKAGE void __fastcall wclWaitThread(TwclThread* const Thread);
extern DELPHI_PACKAGE void __fastcall wclCloseThread(TwclThread* &Thread);
extern DELPHI_PACKAGE void __fastcall wclWaitAndCloseThread(TwclThread* &Thread);
}	/* namespace Wclsync */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLSYNC)
using namespace Wclsync;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclsyncHPP
