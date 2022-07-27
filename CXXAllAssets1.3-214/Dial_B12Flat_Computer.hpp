#ifndef UE4SS_SDK_Dial_B12Flat_Computer_HPP
#define UE4SS_SDK_Dial_B12Flat_Computer_HPP

class UDial_B12Flat_Computer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Bar;                                                                // 0x0268 (size: 0x8)
    class UScrollBox* ScrollBox_69;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* TXT_Answer;                                                     // 0x0278 (size: 0x8)
    class UTextBlock* TXT_Dia;                                                        // 0x0280 (size: 0x8)
    FString Text;                                                                     // 0x0288 (size: 0x10)
    FString WritingText;                                                              // 0x0298 (size: 0x10)
    FDial_B12Flat_Computer_COnEndConv OnEndConv;                                      // 0x02A8 (size: 0x10)
    void OnEndConv();
    int32 CurrentLine;                                                                // 0x02B8 (size: 0x4)
    FDial_B12Flat_Computer_COnWaitForResponse OnWaitForResponse;                      // 0x02C0 (size: 0x10)
    void OnWaitForResponse();
    class ACACA_BigScreen_B12Flat_C* Screen;                                          // 0x02D0 (size: 0x8)
    FText txt;                                                                        // 0x02D8 (size: 0x18)
    FLinearColor Color;                                                               // 0x02F0 (size: 0x10)
    bool isWritingtext;                                                               // 0x0300 (size: 0x1)
    TArray<FString> CurentLineArray;                                                  // 0x0308 (size: 0x10)
    int32 LineGetter;                                                                 // 0x0318 (size: 0x4)

    void Write Line(FString C, bool NewLine, bool UseSound);
    void PreConstruct(bool IsDesignTime);
    void StartDial();
    void SendCatResponse(FString txt);
    void Dia_V3_2();
    void Dia_V3_3();
    void CustomEvent();
    void CustomEvent_1();
    void FinalDial();
    void ExecuteUbergraph_Dial_B12Flat_Computer(int32 EntryPoint);
    void OnWaitForResponse__DelegateSignature();
    void OnEndConv__DelegateSignature();
}; // Size: 0x31C

#endif
