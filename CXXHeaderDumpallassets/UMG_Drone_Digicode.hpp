#ifndef UE4SS_SDK_UMG_Drone_Digicode_HPP
#define UE4SS_SDK_UMG_Drone_Digicode_HPP

class UUMG_Drone_Digicode_C : public UBackpackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0278 (size: 0x8)
    class UWidgetAnimation* Failure;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Success;                                                  // 0x0288 (size: 0x8)
    class UTextBlock* Digit_1;                                                        // 0x0290 (size: 0x8)
    class UTextBlock* Digit_2;                                                        // 0x0298 (size: 0x8)
    class UTextBlock* Digit_3;                                                        // 0x02A0 (size: 0x8)
    class UTextBlock* Digit_4;                                                        // 0x02A8 (size: 0x8)
    class UImage* Header;                                                             // 0x02B0 (size: 0x8)
    class UImage* Image_86;                                                           // 0x02B8 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_1;                  // 0x02C0 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_2;                  // 0x02C8 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_3;                  // 0x02D0 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_4;                  // 0x02D8 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_5;                  // 0x02E0 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_6;                  // 0x02E8 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_7;                  // 0x02F0 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_8;                  // 0x02F8 (size: 0x8)
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_9;                  // 0x0300 (size: 0x8)
    int32 CurrentIndex;                                                               // 0x0308 (size: 0x4)
    int32 PadWidth;                                                                   // 0x030C (size: 0x4)
    int32 PadHeight;                                                                  // 0x0310 (size: 0x4)
    FUMG_Drone_Digicode_COnKeyTyped OnKeyTyped;                                       // 0x0318 (size: 0x10)
    void OnKeyTyped(int32 Key);
    class UCOMP_UsableDigicode_C* UsableDigicode;                                     // 0x0328 (size: 0x8)
    float RenderScale;                                                                // 0x0330 (size: 0x4)
    TArray<class UUMG_Drone_Digicode_Button_C*> Buttons;                              // 0x0338 (size: 0x10)
    FString AnswerBuffer;                                                             // 0x0348 (size: 0x10)
    TArray<class UTextBlock*> Digits;                                                 // 0x0358 (size: 0x10)
    FUMG_Drone_Digicode_COnPhraseEntered OnPhraseEntered;                             // 0x0368 (size: 0x10)
    void OnPhraseEntered(FString Phrase);
    FUMG_Drone_Digicode_COnSuccessAnimationEnd OnSuccessAnimationEnd;                 // 0x0378 (size: 0x10)
    void OnSuccessAnimationEnd();
    bool BlockValidation;                                                             // 0x0388 (size: 0x1)
    bool BlockCursor;                                                                 // 0x0389 (size: 0x1)

    void SequenceEvent__ENTRYPOINTUMG_Drone_Digicode_0();
    void OnXPressed(bool& _handled);
    void OnCancelPressed(bool& _handled);
    void SetUsableDigicode(class UCOMP_UsableDigicode_C* UsableDigicode);
    void MoveIndex(int32 CurrentIndex, int32 HorizontalMovement, int32 VerticalMovement, int32& OutIndex);
    void OnRightPressed(bool& _handled);
    void OnLeftPressed(bool& _handled);
    void OnDownPressed(bool& _handled);
    void OnUpPressed(bool& _handled);
    void SequenceEvent_0();
    void OnDisplayed();
    void OnReset();
    void SetSelected(int32 SelectedItem, bool PlaySound);
    void SetAnswer(FString answer, bool PlaySound);
    void OnInitialized();
    void OnSuccess();
    void OnFailure();
    void OnSuccessAnimationFinished();
    void OnFailureAnimationFinished();
    void OnSuccessAnimationStarted();
    void OnFailureAnimationStarted();
    void ExecuteUbergraph_UMG_Drone_Digicode(int32 EntryPoint);
    void OnSuccessAnimationEnd__DelegateSignature();
    void OnPhraseEntered__DelegateSignature(FString Phrase);
    void OnKeyTyped__DelegateSignature(int32 Key);
}; // Size: 0x38A

#endif
