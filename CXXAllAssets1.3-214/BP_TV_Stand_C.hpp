#ifndef UE4SS_SDK_BP_TV_Stand_C_HPP
#define UE4SS_SDK_BP_TV_Stand_C_HPP

class ABP_TV_Stand_C_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_C_Door_B;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_C_Door_A;                                    // 0x0238 (size: 0x8)
    class UStaticMeshComponent* TV_Stand_C;                                           // 0x0240 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    bool Jumpable;                                                                    // 0x0258 (size: 0x1)
    bool Door_A_visibility;                                                           // 0x0259 (size: 0x1)
    float Door_A_Rotate;                                                              // 0x025C (size: 0x4)
    bool Door_B_visibility;                                                           // 0x0260 (size: 0x1)
    float Door_B_Rotate;                                                              // 0x0264 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TV_Stand_C(int32 EntryPoint);
}; // Size: 0x268

#endif
