#ifndef UE4SS_SDK_SEQ_TriggerCameraSpline_HPP
#define UE4SS_SDK_SEQ_TriggerCameraSpline_HPP

class ASEQ_TriggerCameraSpline_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0270 (size: 0x8)
    class AActor* cameraSpline;                                                       // 0x0278 (size: 0x8)
    float BlendTimeIn;                                                                // 0x0280 (size: 0x4)
    bool AlignCamera;                                                                 // 0x0284 (size: 0x1)
    float BlendTimeAlign;                                                             // 0x0288 (size: 0x4)
    TEnumAsByte<EViewTargetBlendFunction> BlendIn Function;                           // 0x028C (size: 0x1)
    float BlendIn Exp;                                                                // 0x0290 (size: 0x4)
    float BlendTimeOut;                                                               // 0x0294 (size: 0x4)
    TEnumAsByte<EViewTargetBlendFunction> BlendOut Function;                          // 0x0298 (size: 0x1)
    float BlendOut Exp;                                                               // 0x029C (size: 0x4)
    bool Lock Roll;                                                                   // 0x02A0 (size: 0x1)
    bool Actif;                                                                       // 0x02A1 (size: 0x1)
    bool Camera pushed;                                                               // 0x02A2 (size: 0x1)
    bool Keep Previous Input;                                                         // 0x02A3 (size: 0x1)
    bool Init;                                                                        // 0x02A4 (size: 0x1)
    EInputTransitionMode Input Transition Mode;                                       // 0x02A5 (size: 0x1)
    float Input Transition Time;                                                      // 0x02A8 (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x02B0 (size: 0x8)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void PopCameraIfPushed();
    void Activate();
    void Deactivate();
    void PushCamera();
    void PopCamera();
    void ExecuteUbergraph_SEQ_TriggerCameraSpline(int32 EntryPoint);
}; // Size: 0x2B8

#endif
