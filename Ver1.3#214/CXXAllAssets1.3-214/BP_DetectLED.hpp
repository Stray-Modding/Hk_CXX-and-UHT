#ifndef UE4SS_SDK_BP_DetectLED_HPP
#define UE4SS_SDK_BP_DetectLED_HPP

class ABP_DetectLED_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class UMaterialInstanceDynamic* DetectColor_Material;                             // 0x0240 (size: 0x8)
    bool Triggered;                                                                   // 0x0248 (size: 0x1)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0250 (size: 0x10)
    FLinearColor StartColor;                                                          // 0x0260 (size: 0x10)
    FLinearColor ColorTriggered;                                                      // 0x0270 (size: 0x10)
    bool SpawnSound;                                                                  // 0x0280 (size: 0x1)

    void UserConstructionScript();
    void LogicTrigger();
    void ExecuteUbergraph_BP_DetectLED(int32 EntryPoint);
}; // Size: 0x281

#endif
