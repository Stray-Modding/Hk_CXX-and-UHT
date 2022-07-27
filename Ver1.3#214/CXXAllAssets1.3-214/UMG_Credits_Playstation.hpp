#ifndef UE4SS_SDK_UMG_Credits_Playstation_HPP
#define UE4SS_SDK_UMG_Credits_Playstation_HPP

class UUMG_Credits_Playstation_C : public UUMG_Credits_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* 01_anm;                                                   // 0x0280 (size: 0x8)
    class UImage* Black_Background;                                                   // 0x0288 (size: 0x8)
    class UImage* Black_Background_HideWidescreen;                                    // 0x0290 (size: 0x8)

    void SequenceEvent__ENTRYPOINTUMG_Credits_Playstation_0();
    void OnCreditsEnd();
    void Construct();
    void ExecuteUbergraph_UMG_Credits_Playstation(int32 EntryPoint);
}; // Size: 0x298

#endif
