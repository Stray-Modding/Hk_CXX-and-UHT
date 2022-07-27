#ifndef UE4SS_SDK_BP_CatButton_PushableB12DroneContainer_HPP
#define UE4SS_SDK_BP_CatButton_PushableB12DroneContainer_HPP

class ABP_CatButton_PushableB12DroneContainer_C : public ABP_CatButton_PushableBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UArrowComponent* DroneEjectDirection;                                       // 0x02E8 (size: 0x8)
    class USceneComponent* DroneSocket;                                               // 0x02F0 (size: 0x8)
    class USkeletalMeshComponent* SKM_Carton;                                         // 0x02F8 (size: 0x8)
    class ACACA_CatButtonProps_Drone_Alex_C* B12Grabbable;                            // 0x0300 (size: 0x8)
    class ACameraActor* Plan_Camera_B12OnGround;                                      // 0x0308 (size: 0x8)
    class ACACA_Electric_B12_Launchpad_C* Launchpad;                                  // 0x0310 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CamModifier_BeforePush;                // 0x0318 (size: 0x8)
    class AActor* OrientCamera;                                                       // 0x0320 (size: 0x8)

    void BndEvt__BP_CatButton_PushableB12DroneContainer_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveBeginPlay();
    void OpenB12Box();
    void ExecuteUbergraph_BP_CatButton_PushableB12DroneContainer(int32 EntryPoint);
}; // Size: 0x328

#endif
