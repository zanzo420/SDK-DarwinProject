// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SM_House_Broken_HiddenBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_House_Broken_HiddenBP.SM_House_Broken_HiddenBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASM_House_Broken_HiddenBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_House_Broken_HiddenBP.SM_House_Broken_HiddenBP_C.UserConstructionScript");

	ASM_House_Broken_HiddenBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
