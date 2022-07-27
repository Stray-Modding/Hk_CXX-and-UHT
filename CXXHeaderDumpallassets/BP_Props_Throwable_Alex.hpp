#ifndef UE4SS_SDK_BP_Props_Throwable_Alex_HPP
#define UE4SS_SDK_BP_Props_Throwable_Alex_HPP

class ABP_Props_Throwable_Alex_C : public ABP_Props_Throwable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UCapsuleComponent* capsule;                                                 // 0x0290 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Props_Throwable_Alex(int32 EntryPoint);
}; // Size: 0x298

#endif
