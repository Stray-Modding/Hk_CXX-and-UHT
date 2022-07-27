#ifndef UE4SS_SDK_HK_Project_Intro_HPP
#define UE4SS_SDK_HK_Project_Intro_HPP

class AHK_Project_Intro_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_HK_Project_Intro(int32 EntryPoint);
};

#endif
