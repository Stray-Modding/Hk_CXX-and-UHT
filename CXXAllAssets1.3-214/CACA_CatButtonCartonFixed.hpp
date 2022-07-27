#ifndef UE4SS_SDK_CACA_CatButtonCartonFixed_HPP
#define UE4SS_SDK_CACA_CatButtonCartonFixed_HPP

class ACACA_CatButtonCartonFixed_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper move;                               // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class UCOMP_CatButtonGeneric_C* COMP_CatButtonGeneric;                            // 0x0240 (size: 0x8)
    class UDebugInputComponent* DebugInput;                                           // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    bool Hidden;                                                                      // 0x0260 (size: 0x1)
    FVector previous location;                                                        // 0x0264 (size: 0xC)
    bool NotReleased;                                                                 // 0x0270 (size: 0x1)

    void BndEvt__COMP_CatButtonGeneric_K2Node_ComponentBoundEvent_3_CatInteractionDispatched__DelegateSignature();
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ButtonPressed();
    void ExecuteUbergraph_CACA_CatButtonCartonFixed(int32 EntryPoint);
}; // Size: 0x271

#endif
