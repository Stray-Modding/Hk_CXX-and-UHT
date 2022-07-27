#ifndef UE4SS_SDK_BP_Light_NeonLarge_Child_HPP
#define UE4SS_SDK_BP_Light_NeonLarge_Child_HPP

class ABP_Light_NeonLarge_Child_C : public ABP_base_Light_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Light_NeonLarge_Child(int32 EntryPoint);
}; // Size: 0x2C0

#endif
