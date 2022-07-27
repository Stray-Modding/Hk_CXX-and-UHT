#ifndef UE4SS_SDK_Dial_RobertoJR_NearDeadEnd_HPP
#define UE4SS_SDK_Dial_RobertoJR_NearDeadEnd_HPP

class ADial_RobertoJR_NearDeadEnd_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool Talked;                                                                      // 0x0340 (size: 0x1)
    class AActor* AnimatedDoor;                                                       // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_RobertoJR_NearDeadEnd(int32 EntryPoint);
}; // Size: 0x350

#endif
