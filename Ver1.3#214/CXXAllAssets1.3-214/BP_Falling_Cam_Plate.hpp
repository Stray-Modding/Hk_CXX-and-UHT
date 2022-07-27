#ifndef UE4SS_SDK_BP_Falling_Cam_Plate_HPP
#define UE4SS_SDK_BP_Falling_Cam_Plate_HPP

class ABP_Falling_Cam_Plate_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* PS5Vibration;                                              // 0x0230 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0238 (size: 0x8)
    class UStaticMeshComponent* ElectricBox03;                                        // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Screw_1;                                              // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Screw_2;                                              // 0x0250 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0258 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0260 (size: 0x8)
    class UArrowComponent* Cam_Point;                                                 // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Plate;                                                // 0x0270 (size: 0x8)
    class UArrowComponent* Plate_Pivot;                                               // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    float StartingRot;                                                                // 0x0290 (size: 0x4)
    class ABP_SecurityCam_Midtown_C* Camera;                                          // 0x0298 (size: 0x8)
    class ABP_MovingSplineRail_C* Moving_Spline;                                      // 0x02A0 (size: 0x8)
    bool First_MVT;                                                                   // 0x02A8 (size: 0x1)
    TArray<class UStaticMeshComponent*> PlateCompToBreak;                             // 0x02B0 (size: 0x10)
    bool Plate_Broken;                                                                // 0x02C0 (size: 0x1)
    FBP_Falling_Cam_Plate_COnPlateBroken OnPlateBroken;                               // 0x02C8 (size: 0x10)
    void OnPlateBroken();

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA15E9139B();
    void Tick_6246EF4646E19036986D72BA15E9139B(float Ratio);
    void Complete_6246EF4646E19036986D72BA9005541F();
    void Tick_6246EF4646E19036986D72BA9005541F(float Ratio);
    void BndEvt__BP_Falling_Cam_Plate_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void AfterCatEntered_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void BeforeCatExited_Event_0(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void Activate fall Physics(class UPrimitiveComponent* Comp);
    void IsFollowing_Event_0();
    void ExecuteUbergraph_BP_Falling_Cam_Plate(int32 EntryPoint);
    void OnPlateBroken__DelegateSignature();
}; // Size: 0x2D8

#endif
