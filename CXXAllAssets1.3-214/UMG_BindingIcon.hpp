#ifndef UE4SS_SDK_UMG_BindingIcon_HPP
#define UE4SS_SDK_UMG_BindingIcon_HPP

class UUMG_BindingIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UUMG_KeyIcon_C* UMG_KeyIcon;                                                // 0x0268 (size: 0x8)
    FName BindingName;                                                                // 0x0270 (size: 0x8)

    void SetBindingName(FName BindingName);
    void OnControllerTypeChanged();
    void UpdateIcon();
    void OnInitialized();
    void SetSize(float Size);
    void ExecuteUbergraph_UMG_BindingIcon(int32 EntryPoint);
}; // Size: 0x278

#endif
