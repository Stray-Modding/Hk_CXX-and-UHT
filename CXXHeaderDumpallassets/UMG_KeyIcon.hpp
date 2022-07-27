#ifndef UE4SS_SDK_UMG_KeyIcon_HPP
#define UE4SS_SDK_UMG_KeyIcon_HPP

class UUMG_KeyIcon_C : public UKeyIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* Icon;                                                         // 0x0268 (size: 0x8)
    class UImage* IconImage;                                                          // 0x0270 (size: 0x8)
    class UCanvasPanel* KeyboardKey;                                                  // 0x0278 (size: 0x8)
    class UTextBlock* KeyboardKeyText;                                                // 0x0280 (size: 0x8)
    class UTextBlock* KeyboardKeyText_1;                                              // 0x0288 (size: 0x8)
    class UCanvasPanel* Root;                                                         // 0x0290 (size: 0x8)
    class UUMG_KeyboardIconBackground_C* UMG_KeyboardIconBackground;                  // 0x0298 (size: 0x8)
    class UImage* UnknownImage;                                                       // 0x02A0 (size: 0x8)
    class UCanvasPanel* UnknownKey;                                                   // 0x02A8 (size: 0x8)
    FKey CurrentKey;                                                                  // 0x02B0 (size: 0x18)
    EGameControllerType ControllerType;                                               // 0x02C8 (size: 0x1)
    class UKeyIconSetData* KeySet;                                                    // 0x02D0 (size: 0x8)

    void Set Key(FKey Key);
    void OnInitialized();
    void OnControllerTypeChanged();
    void SetKey(const FKey& _key);
    void SetSize(float Float);
    void SetIsSelected(bool _isSelected);
    void ExecuteUbergraph_UMG_KeyIcon(int32 EntryPoint);
}; // Size: 0x2D8

#endif
