#ifndef UE4SS_SDK_UMG_Drone_GridButton_HPP
#define UE4SS_SDK_UMG_Drone_GridButton_HPP

class UUMG_Drone_GridButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* fade;
    class UWidgetAnimation* UnSelect;
    class UWidgetAnimation* Select;
    class UImage* Thumbnail;
    class UUMG_Selector_C* UMG_Selector;
    class UMaterialInstanceDynamic* Button Material Instance;
    float imageRatio;

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
};

#endif
