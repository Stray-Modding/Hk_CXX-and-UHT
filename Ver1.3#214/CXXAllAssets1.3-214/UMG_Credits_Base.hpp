#ifndef UE4SS_SDK_UMG_Credits_Base_HPP
#define UE4SS_SDK_UMG_Credits_Base_HPP

class UUMG_Credits_Base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    FUMG_Credits_Base_CCreditsEnded CreditsEnded;                                     // 0x0268 (size: 0x10)
    void CreditsEnded();

    void NotifyCreditsEnd();
    void ExecuteUbergraph_UMG_Credits_Base(int32 EntryPoint);
    void CreditsEnded__DelegateSignature();
}; // Size: 0x278

#endif
