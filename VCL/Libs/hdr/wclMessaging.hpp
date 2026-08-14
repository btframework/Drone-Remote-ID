// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclMessaging.pas' rev: 30.00 (Windows)

#ifndef WclmessagingHPP
#define WclmessagingHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <wclWinAPI.hpp>
#include <System.Classes.hpp>
#include <wclErrors.hpp>
#include <wclSync.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclmessaging
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclMessage;
class DELPHICLASS TwclAudioCategoryMessage;
class DELPHICLASS TwclBluetoothCategoryMessage;
class DELPHICLASS TwclConnectionCategoryMessage;
class DELPHICLASS TwclPowerCategoryMessage;
class DELPHICLASS TwclSerialCategoryMessage;
class DELPHICLASS TwclSystemCategoryMessage;
class DELPHICLASS TwclUsbCategoryMessage;
class DELPHICLASS TwclUserDefinedCategoryMessage;
class DELPHICLASS TwclWiFiCategoryMessage;
class DELPHICLASS TwclWiiRemoteCategoryMessage;
class DELPHICLASS TwclHardwareChangeMessage;
class DELPHICLASS TwclMessageReceiver;
class DELPHICLASS TwclMessageBroadcaster;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TwclMessageCategory : unsigned int { mcAudio, mcBluetooth, mcConnection, mcPower, mcSerial, mcSystem, mcUsb, mcUser, mcWiFi, mcWiiRemote };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclMessage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Byte FId;
	TwclMessageCategory FCategory;
	int FRefCounter;
	unsigned FCreated;
	unsigned FQueued;
	unsigned FProcessed;
	
public:
	__fastcall TwclMessage(const System::Byte Id, const TwclMessageCategory Category);
	void __fastcall AddRef(void);
	void __fastcall Release(void);
	__property TwclMessageCategory Category = {read=FCategory, nodefault};
	__property System::Byte Id = {read=FId, nodefault};
	__property unsigned Created = {read=FCreated, nodefault};
	__property unsigned Queued = {read=FQueued, nodefault};
	__property unsigned Processed = {read=FProcessed, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclAudioCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclAudioCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclAudioCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclBluetoothCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclBluetoothCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclBluetoothCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclConnectionCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclConnectionCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclConnectionCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclPowerCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclPowerCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclPowerCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclSerialCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclSerialCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclSerialCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclSystemCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclSystemCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclSystemCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclUsbCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclUsbCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclUsbCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclUserDefinedCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclUserDefinedCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclUserDefinedCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiFiCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclWiFiCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiFiCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclWiiRemoteCategoryMessage : public TwclMessage
{
	typedef TwclMessage inherited;
	
public:
	__fastcall TwclWiiRemoteCategoryMessage(const System::Byte Id);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclWiiRemoteCategoryMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclHardwareChangeMessage : public TwclSystemCategoryMessage
{
	typedef TwclSystemCategoryMessage inherited;
	
private:
	GUID FInterfaceClass;
	GUID FDeviceClass;
	System::UnicodeString FInstance;
	bool FInserted;
	
public:
	__fastcall TwclHardwareChangeMessage(const GUID &InterfaceClass, const GUID &DeviceClass, const System::UnicodeString Instance, const bool Inserted);
	__property GUID InterfaceClass = {read=FInterfaceClass};
	__property GUID DeviceClass = {read=FDeviceClass};
	__property System::UnicodeString Instance = {read=FInstance};
	__property bool Inserted = {read=FInserted, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclHardwareChangeMessage(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TwclMessageProcessingMethod : unsigned int { mpAsync, mpSync };

typedef void __fastcall (__closure *TwclMessageEvent)(TwclMessage* const Message);

class PASCALIMPLEMENTATION TwclMessageReceiver : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclsync::TwclCriticalSection* FCS;
	int FId;
	bool FListening;
	TwclMessageProcessingMethod FMethod;
	Wclsync::TwclThreadId FOpenThreadId;
	System::Classes::TList* FQueue;
	Wclsync::TwclAutoResetEvent* FEvent;
	Wclsync::TwclManualResetEvent* FTermEvent;
	bool FTerminated;
	Wclsync::TwclThread* FThread;
	Wclsync::TwclThreadId FThreadId;
	unsigned FMsg;
	HWND FWnd;
	TwclMessageEvent FOnMessage;
	int __fastcall Initialize(void);
	int __fastcall Uninitialize(void);
	int __fastcall ProcessMessages(void);
	void __fastcall DispatchMessages(void);
	int __fastcall Synchronize(void);
	void __fastcall AsyncThreadProc(void);
	int __fastcall AsyncInitialize(void);
	int __fastcall AsyncUninitialize(void);
	int __fastcall AsyncSynchronize(void);
	int __fastcall AsyncProcessMessages(void);
	bool __fastcall SyncWndProc(const HWND hWnd, const unsigned uMsg, const NativeUInt wParam, const NativeInt lParam);
	int __fastcall SyncInitialize(void);
	int __fastcall SyncUninitialize(void);
	int __fastcall SyncSynchronize(void);
	int __fastcall SyncProcessMessages(void);
	
protected:
	virtual void __fastcall DoMessage(TwclMessage* const Message);
	
public:
	__fastcall virtual TwclMessageReceiver(void);
	__fastcall virtual ~TwclMessageReceiver(void);
	int __fastcall Close(void);
	int __fastcall Open(const TwclMessageProcessingMethod Method);
	int __fastcall Post(TwclMessage* const Message, const bool Sync = false);
	int __fastcall ProcessAllMessages(void);
	__property int Id = {read=FId, nodefault};
	__property bool Listening = {read=FListening, nodefault};
	__property TwclMessageProcessingMethod Method = {read=FMethod, nodefault};
	__property Wclsync::TwclThreadId OpenThreadId = {read=FOpenThreadId, nodefault};
	__property TwclMessageEvent OnMessage = {read=FOnMessage, write=FOnMessage};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclMessageBroadcaster : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FReceivers;
	Wclsync::TwclCriticalSection* FReceiversCS;
	int FError;
	bool FCfgMgrLoaded;
	void *FDevNotify;
	Wclsync::TwclThread* FThread;
	Wclsync::TwclManualResetEvent* FThreadEvent;
	HWND FWnd;
	bool __fastcall GetDevClassSetupApi(const GUID &IntfClass, const System::UnicodeString DevName, /* out */ GUID &DevClass);
	bool __fastcall GetDevClassCfgMgrApi(const System::UnicodeString DevName, /* out */ GUID &DevClass);
	void __fastcall ThreadProc(void);
	void __fastcall ProcessWmDestroy(void);
	void __fastcall ProcessWmDeviceChange(const NativeUInt wParam, const NativeInt lParam);
	bool __fastcall WndProc(unsigned uMsg, NativeUInt wParam, NativeInt lParam);
	__classmethod int __fastcall CreateBroadcaster();
	__classmethod void __fastcall DeleteBroadcaster();
	int __fastcall InternalSubscribe(TwclMessageReceiver* const Receiver);
	int __fastcall InternalUnsubscribe(TwclMessageReceiver* const Receiver);
	__classmethod int __fastcall Subscribe(TwclMessageReceiver* const Receiver);
	__classmethod int __fastcall Unsubscribe(TwclMessageReceiver* const Receiver);
	void __fastcall InternalBroadcast(TwclMessage* const Message);
	int __fastcall InternalPost(const int Id, TwclMessage* const Message);
	void __fastcall InternalProcessMessages(void);
	
public:
	__fastcall virtual TwclMessageBroadcaster(void);
	__fastcall virtual ~TwclMessageBroadcaster(void);
	__classmethod int __fastcall Broadcast(TwclMessage* const Message);
	__classmethod int __fastcall Post(const int Id, TwclMessage* const Message);
	__classmethod int __fastcall ProcessMessages();
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 WCL_MSG_ID_SYS_HARDWARE_CHANGED = System::Int8(0x1);
}	/* namespace Wclmessaging */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLMESSAGING)
using namespace Wclmessaging;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclmessagingHPP
