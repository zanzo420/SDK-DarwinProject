#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ChooseRegion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChooseRegion.ChooseRegion_C.MoveGamepadSelection
struct UChooseRegion_C_MoveGamepadSelection_Params
{
	int                                                Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChooseRegion.ChooseRegion_C.GetRegionLineList
struct UChooseRegion_C_GetRegionLineList_Params
{
	TArray<class UChooseRegionLine_C*>                 LineList;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ChooseRegion.ChooseRegion_C.UpdateGamepadHighlight
struct UChooseRegion_C_UpdateGamepadHighlight_Params
{
};

// Function ChooseRegion.ChooseRegion_C.OpenChooseRegion
struct UChooseRegion_C_OpenChooseRegion_Params
{
};

// Function ChooseRegion.ChooseRegion_C.EventAddRegion
struct UChooseRegion_C_EventAddRegion_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChooseRegion.ChooseRegion_C.CloseMenu
struct UChooseRegion_C_CloseMenu_Params
{
};

// Function ChooseRegion.ChooseRegion_C.Construct
struct UChooseRegion_C_Construct_Params
{
};

// Function ChooseRegion.ChooseRegion_C.MenuMoveUp
struct UChooseRegion_C_MenuMoveUp_Params
{
};

// Function ChooseRegion.ChooseRegion_C.MenuMoveDown
struct UChooseRegion_C_MenuMoveDown_Params
{
};

// Function ChooseRegion.ChooseRegion_C.MenuSelect
struct UChooseRegion_C_MenuSelect_Params
{
};

// Function ChooseRegion.ChooseRegion_C.ExecuteUbergraph_ChooseRegion
struct UChooseRegion_C_ExecuteUbergraph_ChooseRegion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
