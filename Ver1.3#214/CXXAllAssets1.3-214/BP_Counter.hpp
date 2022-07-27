#ifndef UE4SS_SDK_BP_Counter_HPP
#define UE4SS_SDK_BP_Counter_HPP

class ABP_Counter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Screen;                                               // 0x0230 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0248 (size: 0x8)
    int32 Material ID;                                                                // 0x0250 (size: 0x4)
    class UMaterialInterface* Base_Screen;                                            // 0x0258 (size: 0x8)
    float Time_Mul;                                                                   // 0x0260 (size: 0x4)
    bool started;                                                                     // 0x0264 (size: 0x1)
    float Counter;                                                                    // 0x0268 (size: 0x4)
    class UMaterialInstanceDynamic* dynamat;                                          // 0x0270 (size: 0x8)
    bool StartLocked;                                                                 // 0x0278 (size: 0x1)
    class UMaterialInterface* OpenedScreen;                                           // 0x0280 (size: 0x8)
    class UMaterialInterface* Locked_Screen;                                          // 0x0288 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ExecuteUbergraph_BP_Counter(int32 EntryPoint);
}; // Size: 0x290

#endif
