#ifndef UE4SS_SDK_UMG_Drone_Digicode_HPP
#define UE4SS_SDK_UMG_Drone_Digicode_HPP

class UUMG_Drone_Digicode_C : public UBackpackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Open;
    class UWidgetAnimation* Failure;
    class UWidgetAnimation* Success;
    class UTextBlock* Digit_1;
    class UTextBlock* Digit_2;
    class UTextBlock* Digit_3;
    class UTextBlock* Digit_4;
    class UImage* Header;
    class UImage* Image_86;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_1;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_2;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_3;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_4;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_5;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_6;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_7;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_8;
    class UUMG_Drone_Digicode_Button_C* UMG_Drone_Digicode_Button_9;
    int32 CurrentIndex;
    int32 PadWidth;
    int32 PadHeight;
    FUMG_Drone_Digicode_COnKeyTyped OnKeyTyped;
    void OnKeyTyped(int32 Key);
    class UCOMP_UsableDigicode_C* UsableDigicode;
    float RenderScale;
    TArray<class UUMG_Drone_Digicode_Button_C*> Buttons;
    FString AnswerBuffer;
    TArray<class UTextBlock*> Digits;
    FUMG_Drone_Digicode_COnPhraseEntered OnPhraseEntered;
    void OnPhraseEntered(FString Phrase);
    FUMG_Drone_Digicode_COnSuccessAnimationEnd OnSuccessAnimationEnd;
    void OnSuccessAnimationEnd();
    bool BlockValidation;
    bool BlockCursor;

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
};

#endif
