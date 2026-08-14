// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclObex.pas' rev: 30.00 (Windows)

#ifndef WclobexHPP
#define WclobexHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <wclConnections.hpp>
#include <System.Classes.hpp>
#include <wclErrors.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wclobex
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclCustomObexClient;
class DELPHICLASS TwclObexFileClient;
class DELPHICLASS TwclObexOppClient;
struct TwclObexFileObject;
class DELPHICLASS TwclObexFtpClient;
class DELPHICLASS TwclCustomObexServer;
class DELPHICLASS TwclObexOppServer;
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::Byte> TwclObexAppParams;

typedef void __fastcall (__closure *TwclObexOperationResultEvent)(System::TObject* Sender, const int Error, const System::UnicodeString Description);

typedef void __fastcall (__closure *TwclObexOperationProgressEvent)(System::TObject* Sender, const unsigned Length, const unsigned Position);

class PASCALIMPLEMENTATION TwclCustomObexClient : public Wclconnections::TwclCustomClientDataProcessor
{
	typedef Wclconnections::TwclCustomClientDataProcessor inherited;
	
private:
	bool FAbort;
	System::UnicodeString FAbortDescription;
	char *FBuffer;
	unsigned FBufferSize;
	bool FConnected;
	unsigned FConnectionId;
	System::UnicodeString FDescription;
	System::Word FMaxSize;
	System::Byte FPrevRequest;
	System::Byte FRequest;
	unsigned FSize;
	System::Classes::TStream* FStream;
	TwclObexOperationResultEvent FOnConnect;
	TwclObexOperationResultEvent FOnDisconnect;
	TwclObexOperationProgressEvent FOnProgress;
	void __fastcall InitParameters(void);
	int __fastcall ExecuteAbort(void);
	void __fastcall ProcessAbort(const char * Buffer);
	void __fastcall ProcessConnect(const char * Buffer);
	void __fastcall ProcessDisconnect(const char * Buffer);
	void __fastcall ProcessGet(const char * Buffer);
	void __fastcall ProcessPut(const char * Buffer);
	void __fastcall ProcessSetPath(const char * Buffer);
	void __fastcall ProcessResponse(const char * Buffer);
	
protected:
	int __fastcall Connect(const GUID &Target, const GUID &Who, const System::UnicodeString Description, const System::Word PacketSize);
	int __fastcall Get(const System::UnicodeString Name, const System::UnicodeString Mime, System::Classes::TStream* const Stream, const TwclObexAppParams AppParams);
	int __fastcall Put(const System::UnicodeString Name, const System::UnicodeString Mime, const System::UnicodeString Description, System::Classes::TStream* const Stream, const TwclObexAppParams AppParams);
	int __fastcall SetPath(const System::UnicodeString Dir, const bool Create);
	virtual void __fastcall DoConnect(const int Error, const System::UnicodeString Description);
	virtual void __fastcall DoDisconnect(const int Error, const System::UnicodeString Description);
	virtual void __fastcall DoGetComplete(const int Error, const System::UnicodeString Description, System::Classes::TStream* const Stream);
	virtual void __fastcall DoProgress(const unsigned Length, const unsigned Position);
	virtual void __fastcall DoPutComplete(const int Error, const System::UnicodeString Description, System::Classes::TStream* const Stream);
	virtual void __fastcall DoSetPathComplete(const int Error, const System::UnicodeString Description);
	
public:
	__fastcall virtual TwclCustomObexClient(Wclconnections::TwclClientDataConnection* const Connection);
	__fastcall virtual ~TwclCustomObexClient(void);
	virtual void __fastcall ProcessData(const void * Data, const unsigned Size);
	int __fastcall Abort(const System::UnicodeString Description);
	int __fastcall Disconnect(const System::UnicodeString Description);
	__property bool Connected = {read=FConnected, nodefault};
	__property TwclObexOperationResultEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property TwclObexOperationResultEvent OnDisconnect = {read=FOnDisconnect, write=FOnDisconnect};
	__property TwclObexOperationProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
};


typedef void __fastcall (__closure *TwclObexObjectOperationResultEvent)(System::TObject* Sender, const int Error, const System::UnicodeString Description, System::Classes::TStream* const Stream);

class PASCALIMPLEMENTATION TwclObexFileClient : public TwclCustomObexClient
{
	typedef TwclCustomObexClient inherited;
	
private:
	TwclObexObjectOperationResultEvent FOnGetComplete;
	TwclObexObjectOperationResultEvent FOnPutComplete;
	
protected:
	virtual void __fastcall DoGetComplete(const int Error, const System::UnicodeString Description, System::Classes::TStream* const Stream);
	virtual void __fastcall DoPutComplete(const int Error, const System::UnicodeString Description, System::Classes::TStream* const Stream);
	
public:
	__fastcall virtual TwclObexFileClient(Wclconnections::TwclClientDataConnection* const Connection);
	HIDESBASE int __fastcall Put(const System::UnicodeString Name, const System::UnicodeString Description, System::Classes::TStream* const Stream)/* overload */;
	__property TwclObexObjectOperationResultEvent OnGetComplete = {read=FOnGetComplete, write=FOnGetComplete};
	__property TwclObexObjectOperationResultEvent OnPutComplete = {read=FOnPutComplete, write=FOnPutComplete};
public:
	/* TwclCustomObexClient.Destroy */ inline __fastcall virtual ~TwclObexFileClient(void) { }
	
};


class PASCALIMPLEMENTATION TwclObexOppClient : public TwclObexFileClient
{
	typedef TwclObexFileClient inherited;
	
public:
	HIDESBASE int __fastcall Connect(const System::Word PacketSize = (System::Word)(0xffff))/* overload */;
	HIDESBASE int __fastcall Get(const System::UnicodeString aType, System::Classes::TStream* const Stream)/* overload */;
public:
	/* TwclObexFileClient.Create */ inline __fastcall virtual TwclObexOppClient(Wclconnections::TwclClientDataConnection* const Connection) : TwclObexFileClient(Connection) { }
	
public:
	/* TwclCustomObexClient.Destroy */ inline __fastcall virtual ~TwclObexOppClient(void) { }
	
};


enum DECLSPEC_DENUM TwclObexFilePermission : unsigned int { opRead, opWrite, opDelete };

typedef System::Set<TwclObexFilePermission, TwclObexFilePermission::opRead, TwclObexFilePermission::opDelete> TwclObexFilePermissions;

struct DECLSPEC_DRECORD TwclObexFileObject
{
public:
	bool IsDirectory;
	System::UnicodeString Name;
	System::UnicodeString Description;
	unsigned Size;
	TwclObexFilePermissions Permissions;
	System::TDateTime Modified;
	System::TDateTime Created;
	System::TDateTime Accessed;
};


typedef System::DynamicArray<TwclObexFileObject> TwclObexFileObjects;

typedef void __fastcall (__closure *TwclObexFtpDirCompleteEvent)(System::TObject* Sender, const int Error, const System::UnicodeString Description, const TwclObexFileObjects Dirs);

class PASCALIMPLEMENTATION TwclObexFtpClient : public TwclObexFileClient
{
	typedef TwclObexFileClient inherited;
	
private:
	System::Byte FOpCode;
	TwclObexOperationResultEvent FOnChangeDirComplete;
	TwclObexOperationResultEvent FOnDeleteComplete;
	TwclObexFtpDirCompleteEvent FOnDirComplete;
	TwclObexOperationResultEvent FOnMakeDirComplete;
	System::TDateTime __fastcall ConvertObexDateTime(const System::WideString DateStr);
	void __fastcall ParseDirs(System::Classes::TStream* const Stream, const System::UnicodeString ResDesc);
	
protected:
	virtual void __fastcall DoGetComplete(const int Error, const System::UnicodeString Description, System::Classes::TStream* const Stream);
	virtual void __fastcall DoPutComplete(const int Error, const System::UnicodeString Description, System::Classes::TStream* const Stream);
	virtual void __fastcall DoSetPathComplete(const int Error, const System::UnicodeString Description);
	
public:
	__fastcall virtual TwclObexFtpClient(Wclconnections::TwclClientDataConnection* const Connection);
	HIDESBASE int __fastcall Connect(const System::Word PacketSize = (System::Word)(0xffff))/* overload */;
	int __fastcall ChangeDir(const System::UnicodeString Name);
	int __fastcall Delete(const System::UnicodeString Name);
	int __fastcall Dir(void);
	HIDESBASE int __fastcall Get(const System::UnicodeString Name, System::Classes::TStream* const Stream);
	int __fastcall MkDir(const System::UnicodeString Name);
	HIDESBASE int __fastcall Put(const System::UnicodeString Name, const System::UnicodeString Description, System::Classes::TStream* const Stream);
	__property TwclObexOperationResultEvent OnChangeDirComplete = {read=FOnChangeDirComplete, write=FOnChangeDirComplete};
	__property TwclObexOperationResultEvent OnDeleteComplete = {read=FOnDeleteComplete, write=FOnDeleteComplete};
	__property TwclObexFtpDirCompleteEvent OnDirComplete = {read=FOnDirComplete, write=FOnDirComplete};
	__property TwclObexOperationResultEvent OnMakeDirComplete = {read=FOnMakeDirComplete, write=FOnMakeDirComplete};
public:
	/* TwclCustomObexClient.Destroy */ inline __fastcall virtual ~TwclObexFtpClient(void) { }
	
};


enum DECLSPEC_DENUM TwclObexServerOperationResult : unsigned int { orSuccess, orForbidden, orObjectNotFound, orUnsupportedMedia, orAccessDenied, orUnexpected };

typedef void __fastcall (__closure *TwclObexServerClientDisconnectedEvent)(System::TObject* Sender, const int Reason, const System::UnicodeString Description);

typedef void __fastcall (__closure *TwclObexServerClientGetCompletedEvent)(System::TObject* Sender, const int Error, System::Classes::TStream* const Stream);

typedef void __fastcall (__closure *TwclObexServerClientOperationProgressEvent)(System::TObject* Sender, const unsigned Position, const unsigned Length, /* out */ bool &Continue);

typedef void __fastcall (__closure *TwclObexServerClientPutBeginEvent)(System::TObject* Sender, const System::UnicodeString Name, const System::UnicodeString Description, const System::UnicodeString Mime, const unsigned Length, /* out */ bool &Accept);

typedef void __fastcall (__closure *TwclObexServerClientPutCompletedEvent)(System::TObject* Sender, const int Error, System::Classes::TStream* const Stream, /* out */ bool &Accept);

class PASCALIMPLEMENTATION TwclCustomObexServer : public Wclconnections::TwclCustomServerClientDataProcessor
{
	typedef Wclconnections::TwclCustomServerClientDataProcessor inherited;
	
private:
	char *FBuffer;
	unsigned FBufferSize;
	bool FConnecting;
	System::Word FMaxSize;
	System::Byte FOperation;
	System::Classes::TStream* FStream;
	bool FFinalBitSet;
	System::UnicodeString FMime;
	System::UnicodeString FName;
	unsigned FConnectionId;
	System::UnicodeString FDescription;
	GUID FTarget;
	GUID FWho;
	TwclObexServerClientDisconnectedEvent FOnDisconnected;
	TwclObexServerClientGetCompletedEvent FOnGetCompleted;
	TwclObexOperationProgressEvent FOnProgress;
	TwclObexServerClientPutBeginEvent FOnPutBegin;
	TwclObexServerClientPutCompletedEvent FOnPutCompleted;
	TwclObexServerClientOperationProgressEvent FOnPutProgress;
	bool __fastcall GetConnected(void);
	int __fastcall GenerateConnectionId(void);
	void __fastcall ReleaseStream(void);
	void __fastcall ResetGetFields(void);
	void __fastcall ResetGetOperation(void);
	void __fastcall ProcessAbort(const char * Buffer);
	void __fastcall ProcessConnect(const char * Buffer);
	void __fastcall ProcessDisconnect(const char * Buffer);
	void __fastcall ProcessGet(const char * Buffer);
	void __fastcall ProcessPut(const char * Buffer);
	void __fastcall ProcessRequest(const char * Buffer);
	void __fastcall SendObjectSize(void);
	void __fastcall SendObjectBody(void);
	void __fastcall SendResponse(const System::Byte Id, const unsigned ConId, const System::UnicodeString Description);
	void __fastcall SendRejectResponse(const System::UnicodeString Description);
	void __fastcall CallDoGetCompleted(const int Error);
	void __fastcall CallDoGetRequest(/* out */ TwclObexServerOperationResult &Result, /* out */ System::Classes::TStream* &Stream);
	void __fastcall CallDoPutCompleted(const int Error, /* out */ bool &Accept);
	
protected:
	virtual void __fastcall DoConnect(const GUID &Target, const GUID &Who, const System::UnicodeString Description);
	virtual void __fastcall DoDisconnected(const int Reason, const System::UnicodeString Description);
	virtual void __fastcall DoGetCompleted(const int Error, System::Classes::TStream* const Stream);
	virtual void __fastcall DoGetRequest(const System::UnicodeString Name, const System::UnicodeString Mime, /* out */ TwclObexServerOperationResult &Result, /* out */ System::Classes::TStream* &Stream);
	virtual void __fastcall DoProgress(const unsigned Length, const unsigned Position);
	virtual void __fastcall DoPutBegin(const System::UnicodeString Name, const System::UnicodeString Description, const System::UnicodeString Mime, const unsigned Length, /* out */ bool &Accept);
	virtual void __fastcall DoPutCompleted(const int Error, System::Classes::TStream* const Stream, /* out */ bool &Accept);
	virtual void __fastcall DoPutProgress(const unsigned Position, const unsigned Length, /* out */ bool &Continue);
	__property GUID Who = {read=FWho};
	
public:
	__fastcall virtual TwclCustomObexServer(Wclconnections::TwclServerClientDataConnection* const Connection);
	__fastcall virtual ~TwclCustomObexServer(void);
	virtual void __fastcall ProcessData(const void * Data, const unsigned Size);
	int __fastcall Accept(const System::UnicodeString Description, const System::Word PacketSize = (System::Word)(0xffff));
	int __fastcall Reject(const System::UnicodeString Description);
	__property bool Connected = {read=GetConnected, nodefault};
	__property unsigned ConnectionId = {read=FConnectionId, nodefault};
	__property System::UnicodeString Description = {read=FDescription};
	__property GUID Target = {read=FTarget};
	__property TwclObexServerClientDisconnectedEvent OnDisconnected = {read=FOnDisconnected, write=FOnDisconnected};
	__property TwclObexServerClientGetCompletedEvent OnGetCompleted = {read=FOnGetCompleted, write=FOnGetCompleted};
	__property TwclObexOperationProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property TwclObexServerClientPutBeginEvent OnPutBegin = {read=FOnPutBegin, write=FOnPutBegin};
	__property TwclObexServerClientPutCompletedEvent OnPutCompleted = {read=FOnPutCompleted, write=FOnPutCompleted};
	__property TwclObexServerClientOperationProgressEvent OnPutProgress = {read=FOnPutProgress, write=FOnPutProgress};
};


typedef void __fastcall (__closure *TwclObexOppServerConnectEvent)(System::TObject* Sender, const System::UnicodeString Description);

typedef void __fastcall (__closure *TwclObexOppServerGetRequestEvent)(System::TObject* Sender, const System::UnicodeString aType, /* out */ TwclObexServerOperationResult &Result, /* out */ System::Classes::TStream* &Stream);

class PASCALIMPLEMENTATION TwclObexOppServer : public TwclCustomObexServer
{
	typedef TwclCustomObexServer inherited;
	
private:
	TwclObexOppServerConnectEvent FOnConnect;
	TwclObexOppServerGetRequestEvent FOnGetRequest;
	
protected:
	virtual void __fastcall DoConnect(const GUID &Target, const GUID &Who, const System::UnicodeString Description);
	virtual void __fastcall DoGetRequest(const System::UnicodeString Name, const System::UnicodeString Mime, /* out */ TwclObexServerOperationResult &Result, /* out */ System::Classes::TStream* &Stream);
	
public:
	__fastcall virtual TwclObexOppServer(Wclconnections::TwclServerClientDataConnection* const Connection);
	__property TwclObexOppServerConnectEvent OnConnect = {read=FOnConnect, write=FOnConnect};
	__property TwclObexOppServerGetRequestEvent OnGetRequest = {read=FOnGetRequest, write=FOnGetRequest};
public:
	/* TwclCustomObexServer.Destroy */ inline __fastcall virtual ~TwclObexOppServer(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wclobex */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLOBEX)
using namespace Wclobex;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WclobexHPP
