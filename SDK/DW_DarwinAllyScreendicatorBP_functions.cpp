// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAllyScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventSetDarwinPlayerName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDarwinAllyScreendicatorBP_C::EventSetDarwinPlayerName(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventSetDarwinPlayerName");

	UDarwinAllyScreendicatorBP_C_EventSetDarwinPlayerName_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventEnterCenter
// (Event, Public, BlueprintEvent)

void UDarwinAllyScreendicatorBP_C::EventEnterCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventEnterCenter");

	UDarwinAllyScreendicatorBP_C_EventEnterCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventLeaveCenter
// (Event, Public, BlueprintEvent)

void UDarwinAllyScreendicatorBP_C::EventLeaveCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventLeaveCenter");

	UDarwinAllyScreendicatorBP_C_EventLeaveCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UDarwinAllyScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventEnterScreen");

	UDarwinAllyScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UDarwinAllyScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventLeaveScreen");

	UDarwinAllyScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventSetCharacterUniqueID
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllyScreendicatorBP_C::EventSetCharacterUniqueID(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventSetCharacterUniqueID");

	UDarwinAllyScreendicatorBP_C_EventSetCharacterUniqueID_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllyScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventUpdateScreendication");

	UDarwinAllyScreendicatorBP_C_EventUpdateScreendication_Params params;
	params.Angle = Angle;
	params.arrowScale = arrowScale;
	params.Distance = Distance;
	params.Opacity = Opacity;
	params.onScreen = onScreen;
	params.behindCam = behindCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.ExecuteUbergraph_DarwinAllyScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAllyScreendicatorBP_C::ExecuteUbergraph_DarwinAllyScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.ExecuteUbergraph_DarwinAllyScreendicatorBP");

	UDarwinAllyScreendicatorBP_C_ExecuteUbergraph_DarwinAllyScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
