#ifndef UE4SS_SDK_UMG_InlineBindingIcon_HPP
#define UE4SS_SDK_UMG_InlineBindingIcon_HPP

class UUMG_InlineBindingIcon_C : public UBindingIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UUMG_BindingIcon_C* UMG_BindingIcon;                                        // 0x0268 (size: 0x8)

    void SetBindingName(const FName& _bindingName);
    void SetSize(float _size);
    void ExecuteUbergraph_UMG_InlineBindingIcon(int32 EntryPoint);
}; // Size: 0x270

#endif
