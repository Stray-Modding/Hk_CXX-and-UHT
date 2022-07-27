#ifndef UE4SS_SDK_HK_Project_Intro_HPP
#define UE4SS_SDK_HK_Project_Intro_HPP

class AHK_Project_Intro_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_HK_Project_Intro(int32 EntryPoint);
}; // Size: 0x238

#endif
