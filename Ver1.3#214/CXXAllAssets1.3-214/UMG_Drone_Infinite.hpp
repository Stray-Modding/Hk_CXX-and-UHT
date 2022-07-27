#ifndef UE4SS_SDK_UMG_Drone_Infinite_HPP
#define UE4SS_SDK_UMG_Drone_Infinite_HPP

class UUMG_Drone_Infinite_C : public UBackpackUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0278 (size: 0x8)
    class UImage* AnimationImage;                                                     // 0x0280 (size: 0x8)
    float RenderScale;                                                                // 0x0288 (size: 0x4)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0290 (size: 0x8)
    class USoundBase* progress base;                                                  // 0x0298 (size: 0x8)
    class UAudioComponent* progress audio comp;                                       // 0x02A0 (size: 0x8)

    void OnInitialized();
    void OnDisplayed();
    void OnReset();
    void ExecuteUbergraph_UMG_Drone_Infinite(int32 EntryPoint);
}; // Size: 0x2A8

#endif
