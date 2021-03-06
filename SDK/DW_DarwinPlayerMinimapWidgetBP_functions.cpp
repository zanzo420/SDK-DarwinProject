// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPlayerMinimapWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_ColorAndOpacity_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UDarwinPlayerMinimapWidgetBP_C::Get_DetectionNorth_ColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_ColorAndOpacity_2");

	UDarwinPlayerMinimapWidgetBP_C_Get_DetectionNorth_ColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UDarwinPlayerMinimapWidgetBP_C::Get_DetectionNorth_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_Brush_1");

	UDarwinPlayerMinimapWidgetBP_C_Get_DetectionNorth_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UDarwinPlayerMinimapWidgetBP_C::Get_DetectionNorth_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_ColorAndOpacity_1");

	UDarwinPlayerMinimapWidgetBP_C_Get_DetectionNorth_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventShowDirectorJoined
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDarwinPlayerMinimapWidgetBP_C::EventShowDirectorJoined(struct FString* ShowDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventShowDirectorJoined");

	UDarwinPlayerMinimapWidgetBP_C_EventShowDirectorJoined_Params params;
	params.ShowDirectorName = ShowDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventShowDirectorLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDarwinPlayerMinimapWidgetBP_C::EventShowDirectorLeft(struct FString* ShowDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventShowDirectorLeft");

	UDarwinPlayerMinimapWidgetBP_C_EventShowDirectorLeft_Params params;
	params.ShowDirectorName = ShowDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UDarwinPlayerMinimapWidgetBP_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameHasStarted");

	UDarwinPlayerMinimapWidgetBP_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameStartsInSeconds
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMinimapWidgetBP_C::EventGameStartsInSeconds(int* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameStartsInSeconds");

	UDarwinPlayerMinimapWidgetBP_C_EventGameStartsInSeconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UDarwinPlayerMinimapWidgetBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameStartsNow");

	UDarwinPlayerMinimapWidgetBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventNumberOfPlayersUntilGameStarts
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMinimapWidgetBP_C::EventNumberOfPlayersUntilGameStarts(int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventNumberOfPlayersUntilGameStarts");

	UDarwinPlayerMinimapWidgetBP_C_EventNumberOfPlayersUntilGameStarts_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameAboutToStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          aboutToStart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMinimapWidgetBP_C::EventUpdateGameAboutToStart(bool* aboutToStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameAboutToStart");

	UDarwinPlayerMinimapWidgetBP_C_EventUpdateGameAboutToStart_Params params;
	params.aboutToStart = aboutToStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameTime
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                gameTimeStr                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDarwinPlayerMinimapWidgetBP_C::EventUpdateGameTime(struct FString* gameTimeStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameTime");

	UDarwinPlayerMinimapWidgetBP_C_EventUpdateGameTime_Params params;
	params.gameTimeStr = gameTimeStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventSuddenDeathStartsNow
// (Event, Public, BlueprintEvent)

void UDarwinPlayerMinimapWidgetBP_C::EventSuddenDeathStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventSuddenDeathStartsNow");

	UDarwinPlayerMinimapWidgetBP_C_EventSuddenDeathStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateNumberOfTwitchSpectators
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMinimapWidgetBP_C::EventUpdateNumberOfTwitchSpectators(int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateNumberOfTwitchSpectators");

	UDarwinPlayerMinimapWidgetBP_C_EventUpdateNumberOfTwitchSpectators_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameAboutToStartTimer
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMinimapWidgetBP_C::EventUpdateGameAboutToStartTimer(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameAboutToStartTimer");

	UDarwinPlayerMinimapWidgetBP_C_EventUpdateGameAboutToStartTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventStartFollowedByShowDirector
// (Event, Public, BlueprintEvent)

void UDarwinPlayerMinimapWidgetBP_C::EventStartFollowedByShowDirector()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventStartFollowedByShowDirector");

	UDarwinPlayerMinimapWidgetBP_C_EventStartFollowedByShowDirector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventEndFollowedByShowDirector
// (Event, Public, BlueprintEvent)

void UDarwinPlayerMinimapWidgetBP_C::EventEndFollowedByShowDirector()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventEndFollowedByShowDirector");

	UDarwinPlayerMinimapWidgetBP_C_EventEndFollowedByShowDirector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateArmorLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMinimapWidgetBP_C::EventUpdateArmorLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateArmorLevel");

	UDarwinPlayerMinimapWidgetBP_C_EventUpdateArmorLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateShowDirectorIsLoading
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMinimapWidgetBP_C::EventUpdateShowDirectorIsLoading(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateShowDirectorIsLoading");

	UDarwinPlayerMinimapWidgetBP_C_EventUpdateShowDirectorIsLoading_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinPlayerMinimapWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Construct");

	UDarwinPlayerMinimapWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.ExecuteUbergraph_DarwinPlayerMinimapWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPlayerMinimapWidgetBP_C::ExecuteUbergraph_DarwinPlayerMinimapWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.ExecuteUbergraph_DarwinPlayerMinimapWidgetBP");

	UDarwinPlayerMinimapWidgetBP_C_ExecuteUbergraph_DarwinPlayerMinimapWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
