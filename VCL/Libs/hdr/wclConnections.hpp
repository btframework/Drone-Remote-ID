// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclConnections.pas' rev: 30.00 (Windows)

#ifndef WclconnectionsHPP
#define WclconnectionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <wclMessaging.hpp>
#include <System.Classes.hpp>
#include <wclErrors.hpp>
#include <wclWinAPI.hpp>
#include <wclSync.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclconnections
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclCustomConnection;
class DELPHICLASS TwclClientConnection;
class DELPHICLASS TwclClientDataConnection;
class DELPHICLASS TwclServerClientConnection;
class DELPHICLASS TwclServerConnection;
class DELPHICLASS TwclServerClientDataConnection;
class DELPHICLASS TwclServerDataConnection;
class DELPHICLASS TwclCustomDataProcessor;
class DELPHICLASS TwclCustomClientDataProcessor;
class DELPHICLASS TwclCustomServerClientDataProcessor;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclCustomConnection : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Wclsync::TwclCriticalSection* FCS;
	Wclmessaging::TwclMessageReceiver* FReceiver;
	unsigned FThreadId;
	Wclmessaging::TwclMessageProcessingMethod __fastcall GetMessageProcessing(void);
	
protected:
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	__property Wclsync::TwclCriticalSection* CS = {read=FCS};
	
public:
	__fastcall virtual TwclCustomConnection(void);
	__fastcall virtual ~TwclCustomConnection(void);
	__property Wclmessaging::TwclMessageProcessingMethod MessageProcessing = {read=GetMessageProcessing, nodefault};
	__property Wclmessaging::TwclMessageReceiver* Receiver = {read=FReceiver};
	__property unsigned ThreadId = {read=FThreadId, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TwclClientState : unsigned int { csDisconnected, csPreparing, csConnecting, csConnected, csDisconnecting };

typedef void __fastcall (__closure *TwclClientConnectionConnectEvent)(System::TObject* Sender, const int Error);

typedef void __fastcall (__closure *TwclClientConnectionDisconnectEvent)(System::TObject* Sender, const int Reason);

class PASCALIMPLEMENTATION TwclClientConnection : public TwclCustomConnection
{
	typedef TwclCustomConnection inherited;
	
private:
	TwclClientState FState;
	unsigned FTimeout;
	Wclsync::TwclManualResetEvent* FConnectedEvent;
	Wclsync::TwclManualResetEvent* FDisconnectEvent;
	Wclsync::TwclThread* FThread;
	TwclClientConnectionConnectEvent FOnConnect;
	TwclClientConnectionDisconnectEvent FOnDisconnect;
	void __fastcall CommunicationThread(void);
	
protected:
	void __fastcall InternalDisconnect(const int Reason);
	void __fastcall NotifyClosed(const int Reason);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoConnect(const int Error);
	virtual void __fastcall DoDisconnect(const int Reason);
	virtual int __fastcall HalCommunicate(Wclsync::TwclEvent* const Event);
	virtual int __fastcall HalConnect(Wclsync::TwclEvent* const Event) = 0 ;
	virtual int __fastcall HalDisconnect(void) = 0 ;
	
public:
	__fastcall virtual TwclClientConnection(void);
	__fastcall virtual ~TwclClientConnection(void);
	int __fastcall Connect(const Wclmessaging::TwclMessageProcessingMethod MessageProcessing, const unsigned Timeout = (unsigned)(0x2710));
	int __fastcall Disconnect(void);
	__property TwclClientState State = {read=FState, nodefault};
	__property unsigned Timeout = {read=FTimeout, nodefault};
	__property TwclClientConnectionConnectEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property TwclClientConnectionDisconnectEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
};


typedef void __fastcall (__closure *TwclConnectionDataEvent)(System::TObject* Sender, const void * Data, const unsigned Size);

class PASCALIMPLEMENTATION TwclClientDataConnection : public TwclClientConnection
{
	typedef TwclClientConnection inherited;
	
private:
	TwclCustomClientDataProcessor* FProcessor;
	TwclConnectionDataEvent FOnData;
	
protected:
	int __fastcall AllocateReadBuffer(void * &Buffer, unsigned &Size);
	void __fastcall NotifyDataReceived(const void * Data, const unsigned Size);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoData(const void * Data, const unsigned Size);
	virtual int __fastcall HalGetReadBufferSize(/* out */ unsigned &Size) = 0 ;
	virtual int __fastcall HalGetWriteBufferSize(/* out */ unsigned &Size) = 0 ;
	virtual int __fastcall HalSetReadBufferSize(const unsigned Size) = 0 ;
	virtual int __fastcall HalSetWriteBufferSize(const unsigned Size) = 0 ;
	virtual int __fastcall HalWrite(const void * Data, const unsigned Size, /* out */ unsigned &Written) = 0 ;
	
public:
	__fastcall virtual TwclClientDataConnection(void);
	int __fastcall GetReadBufferSize(/* out */ unsigned &Size);
	int __fastcall GetWriteBufferSize(/* out */ unsigned &Size);
	int __fastcall SetReadBufferSize(const unsigned Size);
	int __fastcall SetWriteBufferSize(const unsigned Size);
	int __fastcall Write(const void * Data, const unsigned Size, /* out */ unsigned &Written);
	__property TwclCustomClientDataProcessor* Processor = {read=FProcessor};
	__property TwclConnectionDataEvent OnData = {read=FOnData, write=FOnData};
public:
	/* TwclClientConnection.Destroy */ inline __fastcall virtual ~TwclClientDataConnection(void) { }
	
};


class PASCALIMPLEMENTATION TwclServerClientConnection : public TwclCustomConnection
{
	typedef TwclCustomConnection inherited;
	
private:
	bool FDisconnected;
	TwclServerConnection* FServer;
	void *FParams;
	Wclsync::TwclManualResetEvent* FDisconnectEvent;
	Wclsync::TwclThread* FThread;
	Wclsync::TwclManualResetEvent* FThreadInitDoneEvent;
	int FThreadInitResult;
	TwclClientConnectionConnectEvent FOnConnect;
	TwclClientConnectionDisconnectEvent FOnDisconnect;
	void __fastcall CommunicationThread(void);
	void __fastcall InternalDisconnect(const int Reason);
	
protected:
	void __fastcall NotifyClosed(const int Reason);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoConnect(const int Error);
	virtual void __fastcall DoDisconnect(const int Reason);
	virtual int __fastcall Accept(TwclServerConnection* const Server, const void * Params, const unsigned ParamsSize);
	virtual int __fastcall HalAccept(void) = 0 ;
	virtual int __fastcall HalCommunicate(Wclsync::TwclEvent* const Event);
	virtual int __fastcall HalDisconnect(void) = 0 ;
	__property bool Disconnected = {read=FDisconnected, nodefault};
	__property void * Params = {read=FParams};
	
public:
	__fastcall virtual TwclServerClientConnection(void);
	__fastcall virtual ~TwclServerClientConnection(void);
	int __fastcall Disconnect(void);
	__property TwclServerConnection* Server = {read=FServer};
	__property TwclClientConnectionConnectEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property TwclClientConnectionDisconnectEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
};


enum DECLSPEC_DENUM TwclServerState : unsigned int { ssClosed, ssPreparing, ssListening, ssClosing };

typedef void __fastcall (__closure *TwclServerConnectionConnectEvent)(System::TObject* Sender, TwclServerClientConnection* const Client, const int Error);

typedef void __fastcall (__closure *TwclServerConnectionDisconnectEvent)(System::TObject* Sender, TwclServerClientConnection* const Client, const int Reason);

class PASCALIMPLEMENTATION TwclServerConnection : public TwclCustomConnection
{
	typedef TwclCustomConnection inherited;
	
public:
	TwclServerClientConnection* operator[](const int Index) { return Clients[Index]; }
	
private:
	System::Classes::TList* FClients;
	TwclServerState FState;
	TwclServerClientConnection* FClientToDelete;
	Wclsync::TwclManualResetEvent* FCloseEvent;
	Wclsync::TwclThread* FThread;
	Wclsync::TwclManualResetEvent* FThreadInitDoneEvent;
	int FThreadInitResult;
	TwclClientConnectionDisconnectEvent FOnClosed;
	TwclServerConnectionConnectEvent FOnConnect;
	TwclServerConnectionDisconnectEvent FOnDisconnect;
	System::Classes::TNotifyEvent FOnListen;
	TwclServerClientConnection* __fastcall GetClients(const int Index);
	int __fastcall GetClientsCount(void);
	void __fastcall ClientConnect(System::TObject* Sender, const int Error);
	void __fastcall ClientDisconnect(System::TObject* Sender, const int Reason);
	void __fastcall CommunicationThread(void);
	void __fastcall DeleteClient(TwclServerClientConnection* const Client);
	
protected:
	void __fastcall InternalClose(const int Reason);
	int __fastcall CreateNewClientConnection(const void * Params, const unsigned ParamsSize);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual void __fastcall DoClosed(const int Reason);
	virtual void __fastcall DoConnect(TwclServerClientConnection* const Client, const int Error);
	virtual void __fastcall DoDisconnect(TwclServerClientConnection* const Client, const int Reason);
	virtual void __fastcall DoListen(void);
	virtual void __fastcall SetClientEvents(TwclServerClientConnection* const Client);
	virtual int __fastcall HalListen(Wclsync::TwclEvent* const Event) = 0 ;
	virtual int __fastcall HalClose(void) = 0 ;
	virtual TwclServerClientConnection* __fastcall HalCreateClient(void) = 0 ;
	virtual int __fastcall HalPrepare(void) = 0 ;
	
public:
	__fastcall virtual TwclServerConnection(void);
	__fastcall virtual ~TwclServerConnection(void);
	int __fastcall Close(void);
	int __fastcall Listen(const Wclmessaging::TwclMessageProcessingMethod MessageProcessing);
	__property TwclServerClientConnection* Clients[const int Index] = {read=GetClients/*, default*/};
	__property int ClientsCount = {read=GetClientsCount, nodefault};
	__property TwclServerState State = {read=FState, nodefault};
	__property TwclClientConnectionDisconnectEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property TwclServerConnectionConnectEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property TwclServerConnectionDisconnectEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
	__property System::Classes::TNotifyEvent OnListen = {read=FOnListen, write=FOnListen};
};


class PASCALIMPLEMENTATION TwclServerClientDataConnection : public TwclServerClientConnection
{
	typedef TwclServerClientConnection inherited;
	
private:
	TwclCustomServerClientDataProcessor* FProcessor;
	TwclConnectionDataEvent FOnData;
	
protected:
	int __fastcall AllocateReadBuffer(void * &Buffer, unsigned &Size);
	void __fastcall NotifyDataReceived(const void * Data, const unsigned Size);
	virtual void __fastcall MessageReceived(Wclmessaging::TwclMessage* const Message);
	virtual int __fastcall Accept(TwclServerConnection* const Server, const void * Params, const unsigned ParamsSize);
	virtual void __fastcall DoData(const void * Data, const unsigned Size);
	virtual int __fastcall HalGetReadBufferSize(/* out */ unsigned &Size) = 0 ;
	virtual int __fastcall HalGetWriteBufferSize(/* out */ unsigned &Size) = 0 ;
	virtual int __fastcall HalSetReadBufferSize(const unsigned Size) = 0 ;
	virtual int __fastcall HalSetWriteBufferSize(const unsigned Size) = 0 ;
	virtual int __fastcall HalWrite(const void * Data, const unsigned Size, /* out */ unsigned &Written) = 0 ;
	
public:
	__fastcall virtual TwclServerClientDataConnection(void);
	int __fastcall GetReadBufferSize(/* out */ unsigned &Size);
	int __fastcall GetWriteBufferSize(/* out */ unsigned &Size);
	int __fastcall SetReadBufferSize(const unsigned Size);
	int __fastcall SetWriteBufferSize(const unsigned Size);
	int __fastcall Write(const void * Data, const unsigned Size, /* out */ unsigned &Written);
	__property TwclCustomServerClientDataProcessor* Processor = {read=FProcessor};
	__property TwclConnectionDataEvent OnData = {read=FOnData, write=FOnData};
public:
	/* TwclServerClientConnection.Destroy */ inline __fastcall virtual ~TwclServerClientDataConnection(void) { }
	
};


typedef void __fastcall (__closure *TwclServerConnectionDataEvent)(System::TObject* Sender, TwclServerClientDataConnection* const Client, const void * Data, const unsigned Size);

class PASCALIMPLEMENTATION TwclServerDataConnection : public TwclServerConnection
{
	typedef TwclServerConnection inherited;
	
private:
	TwclServerConnectionDataEvent FOnData;
	void __fastcall ClientData(System::TObject* Sender, const void * Data, const unsigned Size);
	
protected:
	virtual void __fastcall SetClientEvents(TwclServerClientConnection* const Client);
	virtual void __fastcall DoData(TwclServerClientDataConnection* const Client, const void * Data, const unsigned Size);
	
public:
	__fastcall virtual TwclServerDataConnection(void);
	__property TwclServerConnectionDataEvent OnData = {read=FOnData, write=FOnData};
public:
	/* TwclServerConnection.Destroy */ inline __fastcall virtual ~TwclServerDataConnection(void) { }
	
};


typedef void __fastcall (__closure *TwclDataProcessorWriteEvent)(System::TObject* Sender, const void * Data, const unsigned Size, /* out */ unsigned &Written, /* out */ int &WriteResult);

class PASCALIMPLEMENTATION TwclCustomDataProcessor : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TwclDataProcessorWriteEvent FOnWrite;
	
protected:
	virtual void __fastcall DoWrite(const void * Data, const unsigned Size, /* out */ unsigned &Written, /* out */ int &WriteResult);
	virtual int __fastcall WriteData(const void * Data, const unsigned Size, /* out */ unsigned &Written) = 0 ;
	int __fastcall Write(const void * Data, const unsigned Size);
	
public:
	__fastcall virtual TwclCustomDataProcessor(void);
	virtual void __fastcall ProcessData(const void * Data, const unsigned Size) = 0 ;
	__property TwclDataProcessorWriteEvent OnWrite = {read=FOnWrite, write=FOnWrite};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclCustomDataProcessor(void) { }
	
};


class PASCALIMPLEMENTATION TwclCustomClientDataProcessor : public TwclCustomDataProcessor
{
	typedef TwclCustomDataProcessor inherited;
	
private:
	TwclClientDataConnection* FConnection;
	bool FConnectionSet;
	
protected:
	virtual int __fastcall WriteData(const void * Data, const unsigned Size, /* out */ unsigned &Written);
	
public:
	__fastcall virtual TwclCustomClientDataProcessor(TwclClientDataConnection* const Connection);
	__fastcall virtual ~TwclCustomClientDataProcessor(void);
	__property TwclClientDataConnection* Connection = {read=FConnection};
};


typedef void __fastcall (__closure *TwclClientConnectionProcessorEvent)(System::TObject* Sender, TwclClientDataConnection* const Connection);

class PASCALIMPLEMENTATION TwclCustomServerClientDataProcessor : public TwclCustomDataProcessor
{
	typedef TwclCustomDataProcessor inherited;
	
private:
	TwclServerClientDataConnection* FConnection;
	bool FConnectionSet;
	
protected:
	virtual int __fastcall WriteData(const void * Data, const unsigned Size, /* out */ unsigned &Written);
	
public:
	__fastcall virtual TwclCustomServerClientDataProcessor(TwclServerClientDataConnection* const Connection);
	__fastcall virtual ~TwclCustomServerClientDataProcessor(void);
	__property TwclServerClientDataConnection* Connection = {read=FConnection};
};


typedef void __fastcall (__closure *TwclServerConnectionProcessorEvent)(System::TObject* Sender, TwclServerClientDataConnection* const Connection);

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wclconnections */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLCONNECTIONS)
using namespace Wclconnections;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclconnectionsHPP
