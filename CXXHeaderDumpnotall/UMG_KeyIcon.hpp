#ifndef UE4SS_SDK_UMG_KeyIcon_HPP
#define UE4SS_SDK_UMG_KeyIcon_HPP

class UUMG_KeyIcon_C : public UKeyIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Icon;
    class UImage* IconImage;
    class UCanvasPanel* KeyboardKey;
    class UTextBlock* KeyboardKeyText;
    class UTextBlock* KeyboardKeyText_1;
    class UCanvasPanel* Root;
    class UUMG_KeyboardIconBackground_C* UMG_KeyboardIconBackground;
    class UImage* UnknownImage;
    class UCanvasPanel* UnknownKey;
    FKey CurrentKey;
    EGameControllerType ControllerType;
    class UKeyIconSetData* KeySet;

    void Set Key(FKey Key);
    void OnInitialized();
    void OnControllerTypeChanged();
    void SetKey(const FKey& _key);
    void SetSize(float Float);
    void SetIsSelected(bool _isSelected);
    void ExecuteUbergraph_UMG_KeyIcon(int32 EntryPoint);
};

#endif
