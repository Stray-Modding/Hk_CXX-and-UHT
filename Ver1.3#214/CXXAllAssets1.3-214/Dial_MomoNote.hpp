#ifndef UE4SS_SDK_Dial_MomoNote_HPP
#define UE4SS_SDK_Dial_MomoNote_HPP

class ADial_MomoNote_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* DronePos;                                                           // 0x0340 (size: 0x8)
    bool FirstDone;                                                                   // 0x0348 (size: 0x1)
    class AActor* Message;                                                            // 0x0350 (size: 0x8)
    class AActor* WindowInteractable;                                                 // 0x0358 (size: 0x8)
    bool WindowActivated;                                                             // 0x0360 (size: 0x1)
    class ACameraActor* Camera;                                                       // 0x0368 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_MomoNote(int32 EntryPoint);
}; // Size: 0x370

#endif
