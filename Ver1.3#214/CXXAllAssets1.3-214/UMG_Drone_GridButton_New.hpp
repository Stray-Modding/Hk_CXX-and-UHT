#ifndef UE4SS_SDK_UMG_Drone_GridButton_New_HPP
#define UE4SS_SDK_UMG_Drone_GridButton_New_HPP

class UUMG_Drone_GridButton_New_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* empty_dot;                                                          // 0x0268 (size: 0x8)
    class UImage* select_box;                                                         // 0x0270 (size: 0x8)
    class UImage* Thumbnail;                                                          // 0x0278 (size: 0x8)
    class UMaterialInstanceDynamic* Button Material Instance;                         // 0x0280 (size: 0x8)
    float imageRatio;                                                                 // 0x0288 (size: 0x4)

    void SetImage(class UTexture* Image);
    void OnInitialized();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BeginFocus();
    void EndFocus();
    void ExecuteUbergraph_UMG_Drone_GridButton_New(int32 EntryPoint);
}; // Size: 0x28C

#endif
