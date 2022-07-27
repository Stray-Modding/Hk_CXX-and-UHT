#ifndef UE4SS_SDK_BP_CameraThirdPerson_HPP
#define UE4SS_SDK_BP_CameraThirdPerson_HPP

class ABP_CameraThirdPerson_C : public ACameraThirdPerson
{
    class UProximityProbeComponent* CameraProximityProbe;                             // 0x0A70 (size: 0x8)
    class UProximityProbeComponent* RayCastTargetProximityProbe;                      // 0x0A78 (size: 0x8)
    class USphereComponent* Collision;                                                // 0x0A80 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0A88 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0A90 (size: 0x8)
    float Timeline_JumpDown_Reset_Reset_8C0FE1574E79F4C65223998512C78362;             // 0x0A98 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_JumpDown_Reset__Direction_8C0FE1574E79F4C65223998512C78362; // 0x0A9C (size: 0x1)
    class UTimelineComponent* Timeline JumpDown Reset;                                // 0x0AA0 (size: 0x8)
    float Timeline_JumpDown_LookDown_F4F08AEB4DCEE0F0C488E3B0B185899C;                // 0x0AA8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_JumpDown__Direction_F4F08AEB4DCEE0F0C488E3B0B185899C; // 0x0AAC (size: 0x1)
    class UTimelineComponent* Timeline JumpDown;                                      // 0x0AB0 (size: 0x8)
    bool AutoCam On/Off;                                                              // 0x0AB8 (size: 0x1)
    class UCurveFloat* AutoYawPitch;                                                  // 0x0AC0 (size: 0x8)
    bool Input Cam >0;                                                                // 0x0AC8 (size: 0x1)
    float WallOffset;                                                                 // 0x0ACC (size: 0x4)
    float MaxWallOffset;                                                              // 0x0AD0 (size: 0x4)
    float SpeedOffsetLength;                                                          // 0x0AD4 (size: 0x4)
    float SmoothAttachZ;                                                              // 0x0AD8 (size: 0x4)
    FVector2D SmoothAttachXY;                                                         // 0x0ADC (size: 0x8)
    float Jump Target Z;                                                              // 0x0AE4 (size: 0x4)
    FVector CameraTargetUnmodified;                                                   // 0x0AE8 (size: 0xC)
    FVector TargetModifier Location;                                                  // 0x0AF4 (size: 0xC)
    float TargetModifier Alpha;                                                       // 0x0B00 (size: 0x4)
    FVector SpeedOffsetDirection;                                                     // 0x0B04 (size: 0xC)
    FVector WallOffsetDirection;                                                      // 0x0B10 (size: 0xC)
    float Yaw Increment;                                                              // 0x0B1C (size: 0x4)
    float Pitch Increment;                                                            // 0x0B20 (size: 0x4)
    float AutoCam Blend Yaw;                                                          // 0x0B24 (size: 0x4)
    float AutoCam Blend Pitch;                                                        // 0x0B28 (size: 0x4)
    float JumpSwitchSmoother;                                                         // 0x0B2C (size: 0x4)
    FVector FinalAttachSmooth;                                                        // 0x0B30 (size: 0xC)
    FVector AttachLocationOffset;                                                     // 0x0B3C (size: 0xC)
    float Cat Acceleration Speed +1;                                                  // 0x0B48 (size: 0x4)
    float Cat acceleration;                                                           // 0x0B4C (size: 0x4)
    float HangingPerched Smooth;                                                      // 0x0B50 (size: 0x4)
    float Fov Modifier;                                                               // 0x0B54 (size: 0x4)
    float CameraShake Intensity;                                                      // 0x0B58 (size: 0x4)
    float AutoCam Yaw Final Increment;                                                // 0x0B5C (size: 0x4)
    float AutoCam Pitch Final Increment;                                              // 0x0B60 (size: 0x4)
    float AutoCam Delta Cat-Cam Yaw;                                                  // 0x0B64 (size: 0x4)
    float AutoCam Delta Cat-Cam Pitch Smooth;                                         // 0x0B68 (size: 0x4)
    float AutoCam Base Speed;                                                         // 0x0B6C (size: 0x4)
    float AutoCam Delay Before Enable;                                                // 0x0B70 (size: 0x4)
    float AutoCam Delay Counter;                                                      // 0x0B74 (size: 0x4)
    float AutoCam Yaw Increment Smooth;                                               // 0x0B78 (size: 0x4)
    float AutoCam Pitch Increment Smooth;                                             // 0x0B7C (size: 0x4)
    FVector Ideal Location Before Jump;                                               // 0x0B80 (size: 0xC)
    FVector Final Jump Location;                                                      // 0x0B8C (size: 0xC)
    float AutoCam Pitch Jump Down Blend;                                              // 0x0B98 (size: 0x4)
    float AutoCam Pitch Jump Down Increment;                                          // 0x0B9C (size: 0x4)
    float AutoCam Pitch Jump Down;                                                    // 0x0BA0 (size: 0x4)
    float AutoCam Pitch Jump Down Blend Saved;                                        // 0x0BA4 (size: 0x4)
    float WallOffset Collision Time Right;                                            // 0x0BA8 (size: 0x4)
    float WallOffset Collision Time Left;                                             // 0x0BAC (size: 0x4)
    bool WallOffset Collision Unfiltered;                                             // 0x0BB0 (size: 0x1)
    float WallOffset Collision Time Total;                                            // 0x0BB4 (size: 0x4)
    float WallOffset Collision Time Final;                                            // 0x0BB8 (size: 0x4)
    FFloatSpringState NewVar_0;                                                       // 0x0BBC (size: 0x8)
    float WallOffset Collision Smoother;                                              // 0x0BC4 (size: 0x4)
    float WallOffset Collision Time Total+1;                                          // 0x0BC8 (size: 0x4)
    class AActor* GameplaySwitcher;                                                   // 0x0BD0 (size: 0x8)
    UClass* GameplaySwitcherClass;                                                    // 0x0BD8 (size: 0x8)
    float Focal Distance;                                                             // 0x0BE0 (size: 0x4)
    TArray<class AActor*> Temp_object_Variable;                                       // 0x0BE8 (size: 0x10)
    FBP_CameraThirdPerson_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x0BF8 (size: 0x10)
    void TimerDynamicDelegate();
    FBP_CameraThirdPerson_CK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1; // 0x0C08 (size: 0x10)
    void InterpolatorCompleteOutputPin();
    float K2Node_CustomEvent_Ratio;                                                   // 0x0C18 (size: 0x4)
    FBP_CameraThirdPerson_CK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2; // 0x0C1C (size: 0x10)
    void InterpolatorTickOutputPin(float bpp__Ratio__pf);
    float Temp_float_Variable;                                                        // 0x0C2C (size: 0x4)
    TArray<class AActor*> Temp_object_Variable_1;                                     // 0x0C30 (size: 0x10)
    FBP_CameraThirdPerson_CK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3; // 0x0C40 (size: 0x10)
    void CatDelegate(class ACatPawn* bpp___catPawn__pf);
    FNoiseSmootherFloat K2Node_MakeStruct_NoiseSmootherFloat;                         // 0x0C50 (size: 0x38)
    FBP_CameraThirdPerson_CK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4; // 0x0C88 (size: 0x10)
    void CatDelegate(class ACatPawn* bpp___catPawn__pf);
    class UABP_Cat_New_C* K2Node_DynamicCast_AsABP_Cat_New;                           // 0x0C98 (size: 0x8)
    bool K2Node_DynamicCast_bSuccess;                                                 // 0x0CA0 (size: 0x1)
    FJumpBlock CallFunc_GetCurrentJumpBlock_ReturnValue;                              // 0x0CB0 (size: 0xD0)
    FJumpData CallFunc_GetCurrentJumpData_ReturnValue;                                // 0x0D80 (size: 0x460)
    class UJoyEasingInterpolator* CallFunc_StartCurveInterpolator__interpolatorObject; // 0x11E0 (size: 0x8)
    class UJoyCurveInterpolator* CallFunc_StartCurveInterpolator_ReturnValue;         // 0x11E8 (size: 0x8)
    bool CallFunc_IsValid_ReturnValue_1;                                              // 0x11F0 (size: 0x1)
    float CallFunc_BreakVector_X;                                                     // 0x11F4 (size: 0x4)
    float CallFunc_BreakVector_Y;                                                     // 0x11F8 (size: 0x4)
    float CallFunc_BreakVector_Z;                                                     // 0x11FC (size: 0x4)
    float CallFunc_BreakVector_X_1;                                                   // 0x1200 (size: 0x4)
    float CallFunc_BreakVector_Y_1;                                                   // 0x1204 (size: 0x4)
    float CallFunc_BreakVector_Z_1;                                                   // 0x1208 (size: 0x4)
    FJumpData CallFunc_GetCurrentJumpData_ReturnValue_1;                              // 0x1210 (size: 0x460)
    float CallFunc_BreakVector_X_2;                                                   // 0x1670 (size: 0x4)
    float CallFunc_BreakVector_Y_2;                                                   // 0x1674 (size: 0x4)
    float CallFunc_BreakVector_Z_2;                                                   // 0x1678 (size: 0x4)
    float CallFunc_BreakVector_X_3;                                                   // 0x167C (size: 0x4)
    float CallFunc_BreakVector_Y_3;                                                   // 0x1680 (size: 0x4)
    float CallFunc_BreakVector_Z_3;                                                   // 0x1684 (size: 0x4)
    float CallFunc_BreakRotator_Roll;                                                 // 0x1688 (size: 0x4)
    float CallFunc_BreakRotator_Pitch;                                                // 0x168C (size: 0x4)
    float CallFunc_BreakRotator_Yaw;                                                  // 0x1690 (size: 0x4)
    class ACatPawn* K2Node_CustomEvent__catPawn_1;                                    // 0x1698 (size: 0x8)
    class ACatPawn* K2Node_CustomEvent__catPawn;                                      // 0x16A0 (size: 0x8)
    FHitResult CallFunc_LineTraceSingle_OutHit;                                       // 0x16A8 (size: 0x88)
    float K2Node_Event__blendTime_1;                                                  // 0x1730 (size: 0x4)
    float K2Node_Event__blendTime;                                                    // 0x1734 (size: 0x4)
    bool Temp_bool_Variable;                                                          // 0x1738 (size: 0x1)
    float CallFunc_BreakVector_X_4;                                                   // 0x173C (size: 0x4)
    float CallFunc_BreakVector_Y_4;                                                   // 0x1740 (size: 0x4)
    float CallFunc_BreakVector_Z_4;                                                   // 0x1744 (size: 0x4)
    class ACatPawn* K2Node_Event__cat;                                                // 0x1748 (size: 0x8)
    float CallFunc_BreakVector_X_5;                                                   // 0x1750 (size: 0x4)
    float CallFunc_BreakVector_Y_5;                                                   // 0x1754 (size: 0x4)
    float CallFunc_BreakVector_Z_5;                                                   // 0x1758 (size: 0x4)
    float K2Node_Event_DeltaSeconds;                                                  // 0x175C (size: 0x4)
    bool Temp_bool_Has_Been_Initd_Variable;                                           // 0x1760 (size: 0x1)
    bool Temp_bool_IsClosed_Variable;                                                 // 0x1761 (size: 0x1)
    class UJoyEasingInterpolator* Temp_wildcard_Variable;                             // 0x1768 (size: 0x8)
    float Temp_float_Variable_1;                                                      // 0x1770 (size: 0x4)
    class AHKPlayerCameraManager* CallFunc_FindCameraManager_CameraManager;           // 0x1778 (size: 0x8)
    TArray<class AActor*> CallFunc_GetCameraStack_ReturnValue;                        // 0x1780 (size: 0x10)
    class AActor* CallFunc_Array_Get_Item;                                            // 0x1790 (size: 0x8)
    float CallFunc_BreakVector_X_6;                                                   // 0x1798 (size: 0x4)
    float CallFunc_BreakVector_Y_6;                                                   // 0x179C (size: 0x4)
    float CallFunc_BreakVector_Z_6;                                                   // 0x17A0 (size: 0x4)
    float CallFunc_BreakVector_X_7;                                                   // 0x17A4 (size: 0x4)
    float CallFunc_BreakVector_Y_7;                                                   // 0x17A8 (size: 0x4)
    float CallFunc_BreakVector_Z_7;                                                   // 0x17AC (size: 0x4)
    TEnumAsByte<EEndPlayReason::Type> K2Node_Event_EndPlayReason;                     // 0x17B0 (size: 0x1)
    FTransform CallFunc_GetTransform_ReturnValue;                                     // 0x17C0 (size: 0x30)
    FHitResult CallFunc_LineTraceSingle_OutHit_1;                                     // 0x17F0 (size: 0x88)
    FPostProcessSettings K2Node_MakeStruct_PostProcessSettings;                       // 0x1880 (size: 0x560)
    bool CallFunc_BreakHitResult_bBlockingHit;                                        // 0x1DE0 (size: 0x1)
    bool CallFunc_BreakHitResult_bInitialOverlap;                                     // 0x1DE1 (size: 0x1)
    float CallFunc_BreakHitResult_Time;                                               // 0x1DE4 (size: 0x4)
    float CallFunc_BreakHitResult_Distance;                                           // 0x1DE8 (size: 0x4)
    FVector CallFunc_BreakHitResult_Location;                                         // 0x1DEC (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactPoint;                                      // 0x1DF8 (size: 0xC)
    FVector CallFunc_BreakHitResult_Normal;                                           // 0x1E04 (size: 0xC)
    FVector CallFunc_BreakHitResult_ImpactNormal;                                     // 0x1E10 (size: 0xC)
    class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;                         // 0x1E20 (size: 0x8)
    class AActor* CallFunc_BreakHitResult_HitActor;                                   // 0x1E28 (size: 0x8)
    class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;                  // 0x1E30 (size: 0x8)
    FName CallFunc_BreakHitResult_HitBoneName;                                        // 0x1E38 (size: 0x8)
    int32 CallFunc_BreakHitResult_HitItem;                                            // 0x1E40 (size: 0x4)
    int32 CallFunc_BreakHitResult_ElementIndex;                                       // 0x1E44 (size: 0x4)
    int32 CallFunc_BreakHitResult_FaceIndex;                                          // 0x1E48 (size: 0x4)
    FVector CallFunc_BreakHitResult_TraceStart;                                       // 0x1E4C (size: 0xC)
    FVector CallFunc_BreakHitResult_TraceEnd;                                         // 0x1E58 (size: 0xC)
    FPostProcessSettings K2Node_MakeStruct_PostProcessSettings_1;                     // 0x1E70 (size: 0x560)

    void WallSideOffset(float bpp__dt__pf);
    void Timeline JumpDown Reset__UpdateFunc();
    void Timeline JumpDown Reset__FinishedFunc();
    void Timeline JumpDown__UpdateFunc();
    void Timeline JumpDown__FinishedFunc();
    void Tick_578069E64FB8DCA8E1905FB788988194(float bpp__Ratio__pf);
    void Start Jump(class ACatPawn* bpp___catPawn__pf);
    void ReceiveTick(float bpp__DeltaSeconds__pf);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> bpp__EndPlayReason__pf);
    void ReceiveBeginPlay();
    void ProjectWorldToScreenNormalized(const FVector& bpp__WorldPosition__pf__const, FVector2D& bpp__NormalizedScreenLocation__pf);
    void OnCatSet(class ACatPawn* bpp___cat__pf);
    void Jump Location();
    void Jump Down(class ACatPawn* bpp___catPawn__pf);
    void ExecuteUbergraph_BP_CameraThirdPerson_4(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_BP_CameraThirdPerson_2(int32 bpp__EntryPoint__pf);
    void ExecuteUbergraph_BP_CameraThirdPerson_0(int32 bpp__EntryPoint__pf);
    void Event On Blend End();
    void DynamicFOV();
    void Complete_578069E64FB8DCA8E1905FB788988194();
    void AutoCam();
    void InterpolatorTickOutputPin__DelegateSignature(float bpp__Ratio__pf);
    void InterpolatorCompleteOutputPin__DelegateSignature();
    void CatDelegate__DelegateSignature(class ACatPawn* bpp___catPawn__pf);
}; // Size: 0x23D0

#endif
