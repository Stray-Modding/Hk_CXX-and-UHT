#ifndef UE4SS_SDK_UMG_Drone_SideMemoryButton_HPP
#define UE4SS_SDK_UMG_Drone_SideMemoryButton_HPP

class UUMG_Drone_SideMemoryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Unlock;                                                   // 0x0268 (size: 0x8)
    class UImage* Active;                                                             // 0x0270 (size: 0x8)
    class UImage* Empty;                                                              // 0x0278 (size: 0x8)
    class UImage* Inactive;                                                           // 0x0280 (size: 0x8)
    class UImage* Revealed;                                                           // 0x0288 (size: 0x8)
    TEnumAsByte<E_MemoryButtonState> CurrentState;                                    // 0x0290 (size: 0x1)

    void SetState(TEnumAsByte<E_MemoryButtonState> State);
    void PlayUnlock();
    void ExecuteUbergraph_UMG_Drone_SideMemoryButton(int32 EntryPoint);
}; // Size: 0x291

#endif
