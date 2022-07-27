#ifndef UE4SS_SDK_BP_PushCameraVolume_HPP
#define UE4SS_SDK_BP_PushCameraVolume_HPP

class ABP_PushCameraVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* CollisionBox;                                                // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class ACameraActor* Camera;                                                       // 0x0240 (size: 0x8)
    bool AlignCTPOnEndOverlap;                                                        // 0x0248 (size: 0x1)
    class AActor* AlignActor;                                                         // 0x0250 (size: 0x8)
    float PushBlendTime;                                                              // 0x0258 (size: 0x4)
    float PopBlendTime;                                                               // 0x025C (size: 0x4)
    TEnumAsByte<EViewTargetBlendFunction> Blend Function;                             // 0x0260 (size: 0x1)
    float Blend Exp;                                                                  // 0x0264 (size: 0x4)
    bool KeepPreviousCameraForPlayerInput;                                            // 0x0268 (size: 0x1)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PushCameraVolume(int32 EntryPoint);
}; // Size: 0x269

#endif
