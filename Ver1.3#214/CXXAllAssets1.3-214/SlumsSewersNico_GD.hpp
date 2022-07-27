#ifndef UE4SS_SDK_SlumsSewersNico_GD_HPP
#define UE4SS_SDK_SlumsSewersNico_GD_HPP

class ASlumsSewersNico_GD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class ABP_Bark_Spline_C* BP_Bark_Spline_2_ExecuteUbergraph_SlumsSewersNico_GD_RefProperty; // 0x0238 (size: 0x8)

    void InpActEvt_J_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_K_K2Node_InputKeyEvent_0(FKey Key);
    void ExecuteUbergraph_SlumsSewersNico_GD(int32 EntryPoint);
}; // Size: 0x240

#endif
