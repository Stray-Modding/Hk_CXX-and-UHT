#ifndef UE4SS_SDK_BP_ItemRenderer_HPP
#define UE4SS_SDK_BP_ItemRenderer_HPP

class ABP_ItemRenderer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* sfx_rotate_item;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* TestMesh;                                             // 0x0238 (size: 0x8)
    class USceneComponent* Attach;                                                    // 0x0240 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0248 (size: 0x8)
    class UStaticMeshComponent* BlackSphere;                                          // 0x0250 (size: 0x8)
    class USceneCaptureComponent2D* NewSceneCaptureComponent2D;                       // 0x0258 (size: 0x8)
    class UPointLightComponent* LightComponent01;                                     // 0x0260 (size: 0x8)
    class UPointLightComponent* LightComponent0;                                      // 0x0268 (size: 0x8)
    class UStaticMeshComponent* BackdropSphere;                                       // 0x0270 (size: 0x8)
    float ShowGridTimeLine_Opacity_08C379504B4804B38FB23E9F6DEA1080;                  // 0x0278 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShowGridTimeLine__Direction_08C379504B4804B38FB23E9F6DEA1080; // 0x027C (size: 0x1)
    class UTimelineComponent* ShowGridTimeLine;                                       // 0x0280 (size: 0x8)
    float MinFovAngle;                                                                // 0x0288 (size: 0x4)
    float MaxFovAngle;                                                                // 0x028C (size: 0x4)
    float RotationSpeed;                                                              // 0x0290 (size: 0x4)
    float TranslationSpeed;                                                           // 0x0294 (size: 0x4)
    float MaxHorizontalTranslation;                                                   // 0x0298 (size: 0x4)
    float MaxVerticalTranslation;                                                     // 0x029C (size: 0x4)
    float ZoomSpeed;                                                                  // 0x02A0 (size: 0x4)
    class AActor* Actor;                                                              // 0x02A8 (size: 0x8)
    float FOVAngle;                                                                   // 0x02B0 (size: 0x4)
    FRotator Rotation;                                                                // 0x02B4 (size: 0xC)
    FVector Translation;                                                              // 0x02C0 (size: 0xC)
    FVector2D RotationInput;                                                          // 0x02CC (size: 0x8)
    FVector2D TranslationInput;                                                       // 0x02D4 (size: 0x8)
    float ZoomInput;                                                                  // 0x02DC (size: 0x4)
    FBP_ItemRenderer_CGUICancelPressed GUICancelPressed;                              // 0x02E0 (size: 0x10)
    void GUICancelPressed();
    class ABP_ItemRendererGrid_C* grid;                                               // 0x02F0 (size: 0x8)
    FVector previousTranslation;                                                      // 0x02F8 (size: 0xC)
    float previousAngle;                                                              // 0x0304 (size: 0x4)

    void GetVisualizedActor(class AActor*& Actor);
    void GetZoomInput(float& Input);
    void SetZoomInput(float Input);
    void SetTranslationHorizontalInput(float Input);
    void SetTranslationVerticalInput(float Input);
    void SetRotationHorizontalInput(float Input);
    void SetRotationVerticalInput(float Input);
    void SetItemClass(TSubclassOf<class AActor> ActorClass);
    void UserConstructionScript();
    void ShowGridTimeLine__FinishedFunc();
    void ShowGridTimeLine__UpdateFunc();
    void InpActEvt_GUI_Cancel_K2Node_InputActionEvent_0(FKey Key);
    void InpAxisEvt_PhotoZoom_K2Node_InputAxisEvent_35(float AxisValue);
    void SceneCapture Off();
    void SceneCapture On();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ShowGrid();
    void HideGrid();
    void ExecuteUbergraph_BP_ItemRenderer(int32 EntryPoint);
    void GUICancelPressed__DelegateSignature();
}; // Size: 0x308

#endif
