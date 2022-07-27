#ifndef UE4SS_SDK_Trigger_Teleport_HPP
#define UE4SS_SDK_Trigger_Teleport_HPP

class ATrigger_Teleport_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class AActor* Teleport Target;                                                    // 0x0250 (size: 0x8)
    float Delay before unfade;                                                        // 0x0258 (size: 0x4)
    bool Continious Overlap;                                                          // 0x025C (size: 0x1)
    bool NotInEditor;                                                                 // 0x025D (size: 0x1)
    bool ResetCam;                                                                    // 0x025E (size: 0x1)
    bool Active;                                                                      // 0x025F (size: 0x1)
    class AActor* soundToTriggerOnTeleport;                                           // 0x0260 (size: 0x8)

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ExecuteUbergraph_Trigger_Teleport(int32 EntryPoint);
}; // Size: 0x268

#endif
