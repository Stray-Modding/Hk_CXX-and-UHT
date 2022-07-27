#ifndef UE4SS_SDK_UMG_Drone_GridButton_HPP
#define UE4SS_SDK_UMG_Drone_GridButton_HPP

class UUMG_Drone_GridButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* fade;                                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* UnSelect;                                                 // 0x0270 (size: 0x8)
    class UWidgetAnimation* Select;                                                   // 0x0278 (size: 0x8)
    class UImage* Thumbnail;                                                          // 0x0280 (size: 0x8)
    class UUMG_Selector_C* UMG_Selector;                                              // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* Button Material Instance;                         // 0x0290 (size: 0x8)
    float imageRatio;                                                                 // 0x0298 (size: 0x4)

    void EndFade();
    void BeginFade();
    void SetImageRatio(float imageRatio);
    void EndFocus();
    void BeginFocus();
    void SetImage(class UTexture* Image);
    void OnInitialized();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UMG_Drone_GridButton(int32 EntryPoint);
}; // Size: 0x29C

#endif
