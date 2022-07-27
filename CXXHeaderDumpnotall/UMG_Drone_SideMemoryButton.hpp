#ifndef UE4SS_SDK_UMG_Drone_SideMemoryButton_HPP
#define UE4SS_SDK_UMG_Drone_SideMemoryButton_HPP

class UUMG_Drone_SideMemoryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unlock;
    class UImage* Active;
    class UImage* Empty;
    class UImage* Inactive;
    class UImage* Revealed;
    TEnumAsByte<E_MemoryButtonState> CurrentState;

    void SetState(TEnumAsByte<E_MemoryButtonState> State);
    void PlayUnlock();
    void ExecuteUbergraph_UMG_Drone_SideMemoryButton(int32 EntryPoint);
};

#endif
