// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wclDriAsd.pas' rev: 30.00 (Windows)

#ifndef WcldriasdHPP
#define WcldriasdHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <wclDriCommon.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wcldriasd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TwclDriAsdMessage;
class DELPHICLASS TwclDriAsdIdMessage;
class DELPHICLASS TwclDriAsdBasicIdMessage;
class DELPHICLASS TwclDriAsdSelfIdMessage;
class DELPHICLASS TwclDriAsdCoordinateMessage;
class DELPHICLASS TwclDriAsdSystemMessage;
class DELPHICLASS TwclDriAsdOperatorIdMessage;
class DELPHICLASS TwclDriAsdLocationMessage;
class DELPHICLASS TwclDriAsdParser;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TwclDriAsdMessageType : unsigned int { mtBasicId, mtLocation, mtAuth, mtSelfId, mtSystem, mtOperatorId };

enum DECLSPEC_DENUM TwclDriAsdIdType : unsigned int { itNone, itSerialNumber, itCaaRegistrationId, itUtmAssignedUuid, itSpecificSessionId };

enum DECLSPEC_DENUM TwclDriAsdUavType : unsigned int { utNone, utAeroplane, utCopter, utGyroplane, utHybridLift, utOrnithopter, utGlider, utKite, utFreeBalloon, utCaptiveBalloon, utAirship, utFreeFallParachute, utRocket, utTetheredPoweredAircraft, utGroundObstacle, utOther };

typedef System::DynamicArray<System::Byte> TwclDriAsdId;

enum DECLSPEC_DENUM TwclDriAsdDescriptionType : unsigned int { dtText, dtEmergency, dtExtended };

enum DECLSPEC_DENUM TwclDriAsdOperatorLocationType : unsigned int { ltTakeOff, ltLiveGnss, ltFixed };

enum DECLSPEC_DENUM TwclDriAsdOperatorClassification : unsigned int { ocUndeclared, ocEu };

enum DECLSPEC_DENUM TwclDriAsdUavEuCategory : unsigned int { ucUndeclared, ucOpen, ucSpecific, ucCertified };

enum DECLSPEC_DENUM TwclDriAsdUavEuClass : unsigned int { ucUnspecified, ucClass0, ucClass1, ucClass2, ucClass3, ucClass4, ucClass5, ucClass6 };

enum DECLSPEC_DENUM TwclDriAsdUavStatus : unsigned int { usUndeclared, usGround, usAirborne, usEmergency, usFailure };

enum DECLSPEC_DENUM TwclDriAsdUavHeightReference : unsigned int { hrTakeOff, hrGround };

enum DECLSPEC_DENUM TwclDriAsdUavHorizontalAccuracy : unsigned int { haUnknown, ha10Nm, ha4Nm, ha2Nm, ha1Nm, ha05Nm, ha03Nm, ha01Nm, ha005Nm, ha30M, ha10M, ha3M, ha1M };

enum DECLSPEC_DENUM TwclDriAsdUavVerticalAccuracy : unsigned int { vaUnknown, va150M, va45M, va25M, va10M, va3M, va1M };

enum DECLSPEC_DENUM TwclDriAsdUavSpeedAccuracy : unsigned int { saUnknown, sa10MS, sa3MS, sa1Ms, sa03Ms };

enum DECLSPEC_DENUM TwclDriAsdUavTimestampAccuracy : unsigned int { taUnknown, ta01s, ta02s, ta03s, ta04s, ta05s, ta06s, ta07s, ta08s, ta09s, ta1s, ta11s, ta12s, ta13s, ta14s, ta15s };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclDriAsdMessage : public Wcldricommon::TwclDriMessage
{
	typedef Wcldricommon::TwclDriMessage inherited;
	
private:
	System::Byte FCounter;
	TwclDriAsdMessageType FMessageType;
	System::Byte FVersion;
	
public:
	__fastcall virtual TwclDriAsdMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data);
	__property System::Byte Counter = {read=FCounter, nodefault};
	__property TwclDriAsdMessageType MessageType = {read=FMessageType, nodefault};
	__property System::Byte Version = {read=FVersion, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclDriAsdIdMessage : public TwclDriAsdMessage
{
	typedef TwclDriAsdMessage inherited;
	
private:
	TwclDriAsdId FId;
	
public:
	__fastcall virtual TwclDriAsdIdMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data);
	__property TwclDriAsdId Id = {read=FId};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdIdMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclDriAsdBasicIdMessage : public TwclDriAsdIdMessage
{
	typedef TwclDriAsdIdMessage inherited;
	
private:
	TwclDriAsdIdType FIdType;
	TwclDriAsdUavType FUavType;
	
public:
	__fastcall virtual TwclDriAsdBasicIdMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data);
	__property TwclDriAsdIdType IdType = {read=FIdType, nodefault};
	__property TwclDriAsdUavType UavType = {read=FUavType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdBasicIdMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclDriAsdSelfIdMessage : public TwclDriAsdMessage
{
	typedef TwclDriAsdMessage inherited;
	
private:
	System::AnsiString FDescription;
	TwclDriAsdDescriptionType FDescriptionType;
	
public:
	__fastcall virtual TwclDriAsdSelfIdMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data);
	__property System::AnsiString Description = {read=FDescription};
	__property TwclDriAsdDescriptionType DescriptionType = {read=FDescriptionType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdSelfIdMessage(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclDriAsdCoordinateMessage : public TwclDriAsdMessage
{
	typedef TwclDriAsdMessage inherited;
	
protected:
	float __fastcall DecodeAltitude(const System::Word Value);
	double __fastcall DecodeCoordinate(const int Value);
	
public:
	__fastcall virtual TwclDriAsdCoordinateMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdCoordinateMessage(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclDriAsdSystemMessage : public TwclDriAsdCoordinateMessage
{
	typedef TwclDriAsdCoordinateMessage inherited;
	
private:
	float FAreaCeiling;
	System::Word FAreaCount;
	float FAreaFloor;
	System::Word FAreaRadius;
	float FOperatorAltitude;
	TwclDriAsdOperatorClassification FOperatorClassification;
	double FOperatorLatitude;
	TwclDriAsdOperatorLocationType FOperatorLocation;
	double FOperatorLongitude;
	System::TDateTime FTimestamp;
	TwclDriAsdUavEuCategory FUavEuCategory;
	TwclDriAsdUavEuClass FUavEuClass;
	
public:
	__fastcall virtual TwclDriAsdSystemMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data);
	__property float AreaCeiling = {read=FAreaCeiling};
	__property System::Word AreaCount = {read=FAreaCount, nodefault};
	__property float AreaFloor = {read=FAreaFloor};
	__property System::Word AreaRadius = {read=FAreaRadius, nodefault};
	__property float OperatorAltitude = {read=FOperatorAltitude};
	__property TwclDriAsdOperatorClassification OperatorClassification = {read=FOperatorClassification, nodefault};
	__property double OperatorLatitude = {read=FOperatorLatitude};
	__property TwclDriAsdOperatorLocationType OperatorLocation = {read=FOperatorLocation, nodefault};
	__property double OperatorLongitude = {read=FOperatorLongitude};
	__property System::TDateTime Timestamp = {read=FTimestamp};
	__property TwclDriAsdUavEuCategory UavEuCategory = {read=FUavEuCategory, nodefault};
	__property TwclDriAsdUavEuClass UavEuClass = {read=FUavEuClass, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdSystemMessage(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclDriAsdOperatorIdMessage : public TwclDriAsdIdMessage
{
	typedef TwclDriAsdIdMessage inherited;
	
private:
	System::Byte FIdType;
	
public:
	__fastcall virtual TwclDriAsdOperatorIdMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data);
	__property System::Byte IdType = {read=FIdType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdOperatorIdMessage(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TwclDriAsdLocationMessage : public TwclDriAsdCoordinateMessage
{
	typedef TwclDriAsdCoordinateMessage inherited;
	
private:
	float FBaroAltitude;
	TwclDriAsdUavVerticalAccuracy FBaroAccuracy;
	System::Word FDirection;
	float FGeoAltitude;
	float FHeight;
	TwclDriAsdUavHeightReference FHeightReference;
	TwclDriAsdUavHorizontalAccuracy FHorizontalAccuracy;
	float FHorizontalSpeed;
	double FLatitude;
	double FLongitude;
	TwclDriAsdUavSpeedAccuracy FSpeedAccuracy;
	TwclDriAsdUavStatus FStatus;
	float FTimestamp;
	TwclDriAsdUavTimestampAccuracy FTimestampAccuracy;
	TwclDriAsdUavVerticalAccuracy FVerticalAccuracy;
	float FVerticalSpeed;
	System::Word __fastcall DecodeDirection(const Wcldricommon::TwclDriRawData Data);
	float __fastcall DecodeHorizontalSpeed(const Wcldricommon::TwclDriRawData Data);
	float __fastcall DecodeVertocalSpeed(const Wcldricommon::TwclDriRawData Data);
	float __fastcall DecodeTimestamp(const Wcldricommon::TwclDriRawData Data);
	
public:
	__fastcall virtual TwclDriAsdLocationMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data);
	__property float BaroAltitude = {read=FBaroAltitude};
	__property TwclDriAsdUavVerticalAccuracy BaroAccuracy = {read=FBaroAccuracy, nodefault};
	__property System::Word Direction = {read=FDirection, nodefault};
	__property float GeoAltitude = {read=FGeoAltitude};
	__property float Height = {read=FHeight};
	__property TwclDriAsdUavHeightReference HeightReference = {read=FHeightReference, nodefault};
	__property TwclDriAsdUavHorizontalAccuracy HorizontalAccuracy = {read=FHorizontalAccuracy, nodefault};
	__property float HorizontalSpeed = {read=FHorizontalSpeed};
	__property double Latitude = {read=FLatitude};
	__property double Longitude = {read=FLongitude};
	__property TwclDriAsdUavSpeedAccuracy SpeedAccuracy = {read=FSpeedAccuracy, nodefault};
	__property TwclDriAsdUavStatus Status = {read=FStatus, nodefault};
	__property float Timestamp = {read=FTimestamp};
	__property TwclDriAsdUavTimestampAccuracy TimestampAccuracy = {read=FTimestampAccuracy, nodefault};
	__property TwclDriAsdUavVerticalAccuracy VerticalAccuracy = {read=FVerticalAccuracy, nodefault};
	__property float VerticalSpeed = {read=FVerticalSpeed};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdLocationMessage(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TwclDriAsdParser : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall ParseAsdMessage(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data, System::Classes::TList* const Messages);
	void __fastcall UnpackAsdMessages(const System::Byte Counter, const Wcldricommon::TwclDriRawData Data, System::Classes::TList* const Messages);
	void __fastcall ParseAsdMessages(const Wcldricommon::TwclDriRawData Data, System::Classes::TList* const Messages);
	
public:
	int __fastcall Parse(const Wcldricommon::TwclDriRawData Raw, System::Classes::TList* const Messages);
public:
	/* TObject.Create */ inline __fastcall TwclDriAsdParser(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwclDriAsdParser(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Wcldriasd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCLDRIASD)
using namespace Wcldriasd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WcldriasdHPP
