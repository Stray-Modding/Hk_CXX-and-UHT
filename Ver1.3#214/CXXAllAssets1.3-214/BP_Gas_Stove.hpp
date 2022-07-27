#ifndef UE4SS_SDK_BP_Gas_Stove_HPP
#define UE4SS_SDK_BP_Gas_Stove_HPP

class ABP_Gas_Stove_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Gas_Stove_Door_B;                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Gas_Stove_Door_A;                                     // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Gas_Stove;                                            // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float Door_A_Offset;                                                              // 0x0250 (size: 0x4)
    float Door_B_Offset;                                                              // 0x0254 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Gas_Stove(int32 EntryPoint);
}; // Size: 0x258

#endif
