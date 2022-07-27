#ifndef UE4SS_SDK_UMG_Drone_GridButton_New_HPP
#define UE4SS_SDK_UMG_Drone_GridButton_New_HPP

class UUMG_Drone_GridButton_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* empty_dot;
    class UImage* select_box;
    class UImage* Thumbnail;
    class UMaterialInstanceDynamic* Button Material Instance;
    float imageRatio;

    void SetImage(class UTexture* Image);
    void OnInitialized();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BeginFocus();
    void EndFocus();
    void ExecuteUbergraph_UMG_Drone_GridButton_New(int32 EntryPoint);
};

#endif
