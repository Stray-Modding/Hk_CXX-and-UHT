#ifndef UE4SS_SDK_COMP_UsableDigicode_HPP
#define UE4SS_SDK_COMP_UsableDigicode_HPP

class UCOMP_UsableDigicode_C : public UDroneUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FString KeyCode;
    class UUMG_Drone_Digicode_C* DigicodeWidget;
    FCOMP_UsableDigicode_CDigicodeValid DigicodeValid;
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
};

#endif
