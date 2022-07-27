#ifndef UE4SS_SDK_Dial_ScratchDoor_Surgeon_HPP
#define UE4SS_SDK_Dial_ScratchDoor_Surgeon_HPP

class ADial_ScratchDoor_Surgeon_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_MeowToOpenDoor_C* Seq_Door;                                            // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_ScratchDoor_Surgeon(int32 EntryPoint);
}; // Size: 0x348

#endif
