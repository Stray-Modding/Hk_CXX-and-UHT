#ifndef UE4SS_SDK_SewersBoatride_GD_HPP
#define UE4SS_SDK_SewersBoatride_GD_HPP

class ASewersBoatride_GD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class ABP_Bark_Spline_C* None_ExecuteUbergraph_SewersBoatride_GD_RefProperty;     // 0x0238 (size: 0x8)

    void InpActEvt_J_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_K_K2Node_InputKeyEvent_0(FKey Key);
    void ExecuteUbergraph_SewersBoatride_GD(int32 EntryPoint);
}; // Size: 0x240

#endif
