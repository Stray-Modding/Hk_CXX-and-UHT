#ifndef UE4SS_SDK_BP_ItemRenderer_HPP
#define UE4SS_SDK_BP_ItemRenderer_HPP

class ABP_ItemRenderer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* sfx_rotate_item;
    class UStaticMeshComponent* TestMesh;
    class USceneComponent* Attach;
    class USceneComponent* SharedRoot;
    class UStaticMeshComponent* BlackSphere;
    class USceneCaptureComponent2D* NewSceneCaptureComponent2D;
    class UPointLightComponent* LightComponent01;
    class UPointLightComponent* LightComponent0;
    class UStaticMeshComponent* BackdropSphere;
    float ShowGridTimeLine_Opacity_08C379504B4804B38FB23E9F6DEA1080;
    TEnumAsByte<ETimelineDirection::Type> ShowGridTimeLine__Direction_08C379504B4804B38FB23E9F6DEA1080;
    class UTimelineComponent* ShowGridTimeLine;
    float MinFovAngle;
    float MaxFovAngle;
    float RotationSpeed;
    float TranslationSpeed;
    float MaxHorizontalTranslation;
    float MaxVerticalTranslation;
    float ZoomSpeed;
    class AActor* Actor;
    float FOVAngle;
    FRotator Rotation;
    FVector Translation;
    FVector2D RotationInput;
    FVector2D TranslationInput;
    float ZoomInput;
    FBP_ItemRenderer_CGUICancelPressed GUICancelPressed;
    void GUICancelPressed();
    class ABP_ItemRendererGrid_C* grid;
    FVector previousTranslation;
    float previousAngle;

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
};

#endif
