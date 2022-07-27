#ifndef UE4SS_SDK_UMG_InlineBindingIcon_HPP
#define UE4SS_SDK_UMG_InlineBindingIcon_HPP

class UUMG_InlineBindingIcon_C : public UBindingIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUMG_BindingIcon_C* UMG_BindingIcon;

    void SetBindingName(const FName& _bindingName);
    void SetSize(float _size);
    void ExecuteUbergraph_UMG_InlineBindingIcon(int32 EntryPoint);
};

#endif
