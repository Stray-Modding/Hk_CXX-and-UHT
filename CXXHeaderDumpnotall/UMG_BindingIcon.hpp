#ifndef UE4SS_SDK_UMG_BindingIcon_HPP
#define UE4SS_SDK_UMG_BindingIcon_HPP

class UUMG_BindingIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUMG_KeyIcon_C* UMG_KeyIcon;
    FName BindingName;

    void SetBindingName(FName BindingName);
    void OnControllerTypeChanged();
    void UpdateIcon();
    void OnInitialized();
    void SetSize(float Size);
    void ExecuteUbergraph_UMG_BindingIcon(int32 EntryPoint);
};

#endif
