#ifndef UE4SS_SDK_HK_Project_MainStart_HPP
#define UE4SS_SDK_HK_Project_MainStart_HPP

class AHK_Project_MainStart_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class ACineCameraActor* CineCameraActor_1_ExecuteUbergraph_HK_Project_MainStart_RefProperty; // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_HK_Project_MainStart(int32 EntryPoint);
}; // Size: 0x240

#endif
