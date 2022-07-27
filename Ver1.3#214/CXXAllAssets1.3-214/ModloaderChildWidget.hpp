#ifndef UE4SS_SDK_ModloaderChildWidget_HPP
#define UE4SS_SDK_ModloaderChildWidget_HPP

class UModloaderChildWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_75;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0270 (size: 0x8)
    FText TextVariable;                                                               // 0x0278 (size: 0x18)
    FVector Location;                                                                 // 0x0290 (size: 0xC)
    FRotator Rotation;                                                                // 0x029C (size: 0xC)
    class ULevelStreamingDynamic* LevelInstance;                                      // 0x02A8 (size: 0x8)

    void SetText(FText InText);
    void BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ModloaderChildWidget(int32 EntryPoint);
}; // Size: 0x2B0

#endif
