#ifndef UE4SS_SDK_UMG_Counter_HPP
#define UE4SS_SDK_UMG_Counter_HPP

class UUMG_Counter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_Black;                                                        // 0x0268 (size: 0x8)
    class UImage* Image_Blue;                                                         // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_34;                                                   // 0x0278 (size: 0x8)
    FText InputTexte;                                                                 // 0x0280 (size: 0x18)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_Counter(int32 EntryPoint);
}; // Size: 0x298

#endif
