#ifndef UE4SS_SDK_BP_SplineCameraCine_Simple_HPP
#define UE4SS_SDK_BP_SplineCameraCine_Simple_HPP

class ABP_SplineCameraCine_Simple_C : public ABP_SplineCameraCine_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x02C8 (size: 0x8)
    bool UseDepthOfField;                                                             // 0x02D0 (size: 0x1)
    float Focal Distance;                                                             // 0x02D4 (size: 0x4)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Set Focal(float Aperture (F-stop), float Focal Distance);
    void ExecuteUbergraph_BP_SplineCameraCine_Simple(int32 EntryPoint);
}; // Size: 0x2D8

#endif
