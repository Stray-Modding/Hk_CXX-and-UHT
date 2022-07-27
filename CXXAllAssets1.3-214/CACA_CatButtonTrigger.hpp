#ifndef UE4SS_SDK_CACA_CatButtonTrigger_HPP
#define UE4SS_SDK_CACA_CatButtonTrigger_HPP

class ACACA_CatButtonTrigger_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    TArray<class AActor*> ActorsToTrigger;                                            // 0x0278 (size: 0x10)
    bool DoOnce;                                                                      // 0x0288 (size: 0x1)
    bool Active;                                                                      // 0x0289 (size: 0x1)
    bool Changed;                                                                     // 0x028A (size: 0x1)
    bool PlayPawAnim;                                                                 // 0x028B (size: 0x1)
    FCACA_CatButtonTrigger_COnCat_Trigger OnCat_Trigger;                              // 0x0290 (size: 0x10)
    void OnCat_Trigger();

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_CACA_CatButtonTrigger(int32 EntryPoint);
    void OnCat_Trigger__DelegateSignature();
}; // Size: 0x2A0

#endif
