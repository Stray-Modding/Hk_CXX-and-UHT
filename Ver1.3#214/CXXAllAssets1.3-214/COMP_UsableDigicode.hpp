#ifndef UE4SS_SDK_COMP_UsableDigicode_HPP
#define UE4SS_SDK_COMP_UsableDigicode_HPP

class UCOMP_UsableDigicode_C : public UDroneUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    FString KeyCode;                                                                  // 0x05A8 (size: 0x10)
    class UUMG_Drone_Digicode_C* DigicodeWidget;                                      // 0x05B8 (size: 0x8)
    FCOMP_UsableDigicode_CDigicodeValid DigicodeValid;                                // 0x05C0 (size: 0x10)
    void DigicodeValid();

    void ReceiveBeginPlay();
    void _OnDroneUseStarted(class ADrone* _drone);
    void _OnDroneUseEnded(class ADrone* _drone);
    void RequestExit();
    void OnPhraseEntered(FString Phrase);
    void OnValidAnimationEnd();
    void CheckKeyCode();
    void ExecuteUbergraph_COMP_UsableDigicode(int32 EntryPoint);
    void DigicodeValid__DelegateSignature();
}; // Size: 0x5D0

#endif
