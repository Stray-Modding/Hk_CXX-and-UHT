#ifndef UE4SS_SDK_Dia_Talkable_Actor_HPP
#define UE4SS_SDK_Dia_Talkable_Actor_HPP

class ADia_Talkable_Actor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UTalkableComponent* talkable;                                               // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class APROTO_CatButton_C* CatButtonRef;                                           // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dia_Talkable_Actor(int32 EntryPoint);
}; // Size: 0x248

#endif
