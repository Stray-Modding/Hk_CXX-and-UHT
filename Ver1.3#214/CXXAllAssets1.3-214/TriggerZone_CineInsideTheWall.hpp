#ifndef UE4SS_SDK_TriggerZone_CineInsideTheWall_HPP
#define UE4SS_SDK_TriggerZone_CineInsideTheWall_HPP

class ATriggerZone_CineInsideTheWall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UDebugInputComponent* DebugInput;                                           // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    FName Level Name;                                                                 // 0x0248 (size: 0x8)
    class AActor* TargetTP;                                                           // 0x0250 (size: 0x8)
    bool ShowCinematic;                                                               // 0x0258 (size: 0x1)
    TArray<class AActor*> SoundToPlay;                                                // 0x0260 (size: 0x10)
    TArray<FName> TransitionGroups;                                                   // 0x0270 (size: 0x10)
    TArray<TSoftObjectPtr<UWorld>> PreloadedLevels;                                   // 0x0280 (size: 0x10)
    bool CatTeleported;                                                               // 0x0290 (size: 0x1)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_TriggerZone_CineInsideTheWall(int32 EntryPoint);
}; // Size: 0x291

#endif
