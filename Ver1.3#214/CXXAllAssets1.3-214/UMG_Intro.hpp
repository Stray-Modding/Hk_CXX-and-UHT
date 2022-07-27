#ifndef UE4SS_SDK_UMG_Intro_HPP
#define UE4SS_SDK_UMG_Intro_HPP

class UUMG_Intro_C : public UIntroWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UImage* AILogo;                                                             // 0x0328 (size: 0x8)
    class UImage* B12Logo;                                                            // 0x0330 (size: 0x8)
    class UWidgetSwitcher* IntroScreenWidgetSwitcher;                                 // 0x0338 (size: 0x8)
    int32 CurrentPanel;                                                               // 0x0340 (size: 0x4)
    int32 MaxPanel;                                                                   // 0x0344 (size: 0x4)
    float AutoSkipDuration;                                                           // 0x0348 (size: 0x4)
    float OnSkippedFadePlaySpeed;                                                     // 0x034C (size: 0x4)
    FName MainMenuLevel;                                                              // 0x0350 (size: 0x8)
    FTimerHandle AutoSkipTimerHandle;                                                 // 0x0358 (size: 0x8)
    bool bCanSkip;                                                                    // 0x0360 (size: 0x1)
    bool bPanelSkipped;                                                               // 0x0361 (size: 0x1)
    float CurrentAnimationTime;                                                       // 0x0364 (size: 0x4)

    void Finished_D0965FF84D68F69C74F1FBB1ABABA5CA();
    void Finished_812632BB4972D9F3643C7AB803BE0AC7();
    void Finished_9ED7484640352925FBD06AA35CC51AF4();
    void Finished_7BF606284DF59B242CBE2DAC2E1399D9();
    void Finished_854AC1844664643ADE8C25AFE05DA38D();
    void Finished_BE2F6A7645BD64EB324EAA991363953D();
    void Finished_700E4D1045CAC90DC76D3ABA82B58FAA();
    void Finished_764E996946F44C26EADC7F8C2F3DD7F1();
    void Finished_6D47B21C496A30F9DA5B8282B50F5D80();
    void Construct();
    void _OnSkipButtonPressed(FKey _key);
    void NextPanel();
    void OpenMenuLevel();
    void SetPanelIndex(int32 Index);
    void _OpenMenu();
    void ShowGammaSetting();
    void ExecuteUbergraph_UMG_Intro(int32 EntryPoint);
}; // Size: 0x368

#endif
