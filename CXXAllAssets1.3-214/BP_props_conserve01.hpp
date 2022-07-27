#ifndef UE4SS_SDK_BP_props_conserve01_HPP
#define UE4SS_SDK_BP_props_conserve01_HPP

class ABP_props_conserve01_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_props_conserve01(int32 EntryPoint);
}; // Size: 0x278

#endif
