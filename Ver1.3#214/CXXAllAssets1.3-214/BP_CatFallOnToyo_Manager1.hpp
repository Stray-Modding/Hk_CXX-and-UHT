#ifndef UE4SS_SDK_BP_CatFallOnToyo_Manager1_HPP
#define UE4SS_SDK_BP_CatFallOnToyo_Manager1_HPP

class ABP_CatFallOnToyo_Manager1_C : public ABP_CatSequenceBase_Manager_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CatFallOnToyo_Manager1(int32 EntryPoint);
}; // Size: 0x2A8

#endif
