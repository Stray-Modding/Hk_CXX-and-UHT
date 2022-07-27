#ifndef UE4SS_SDK_BP_OrientCameraThirdPersonZone_HPP
#define UE4SS_SDK_BP_OrientCameraThirdPersonZone_HPP

class ABP_OrientCameraThirdPersonZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UArrowComponent* TriggerOrientation;                                        // 0x0238 (size: 0x8)
    class UArrowComponent* CameraOrientation;                                         // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    float Time;                                                                       // 0x0250 (size: 0x4)
    bool useTriggerOrientation;                                                       // 0x0254 (size: 0x1)
    bool InputCancel;                                                                 // 0x0255 (size: 0x1)
    bool OnlyOnce;                                                                    // 0x0256 (size: 0x1)
    float DisableInputTime;                                                           // 0x0258 (size: 0x4)
    float TriggerAngle;                                                               // 0x025C (size: 0x4)
    bool OnlyTriggerIfHanging;                                                        // 0x0260 (size: 0x1)
    bool Active;                                                                      // 0x0261 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0268 (size: 0x8)
    class ACameraThirdPerson* ThirdCamera;                                            // 0x0270 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void LogicTrigger();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ActivateZone(bool Active);
    void ExecuteUbergraph_BP_OrientCameraThirdPersonZone(int32 EntryPoint);
}; // Size: 0x278

#endif
