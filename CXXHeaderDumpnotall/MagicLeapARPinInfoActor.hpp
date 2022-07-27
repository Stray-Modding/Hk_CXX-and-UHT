#ifndef UE4SS_SDK_MagicLeapARPinInfoActor_HPP
#define UE4SS_SDK_MagicLeapARPinInfoActor_HPP

class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Right;
    class UStaticMeshComponent* Forward;
    class UStaticMeshComponent* Up;
    class USphereComponent* ValidRadiusVisualizer;
    class USceneComponent* AxisRoot;
    class USceneComponent* VisualizerRoot;
    class UTextRenderComponent* TypeValue;
    class UTextRenderComponent* TransErrValue;
    class UTextRenderComponent* RotErrValue;
    class UTextRenderComponent* ConfidenceValue;
    class UTextRenderComponent* TransErrLabel;
    class UTextRenderComponent* RotErrLabel;
    class UTextRenderComponent* ConfidenceLabel;
    class UTextRenderComponent* PinIDValue;
    class USceneComponent* InfoRoot;
    class USceneComponent* Root;
    float RotationSmoothSpeed;

    void UpdatePinState();
    void UserConstructionScript();
    void OnUpdateARPinState();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_MagicLeapARPinInfoActor(int32 EntryPoint);
};

#endif
