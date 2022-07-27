#ifndef UE4SS_SDK_BP_DoorAnalogBase_Rikonium_HPP
#define UE4SS_SDK_BP_DoorAnalogBase_Rikonium_HPP

class ABP_DoorAnalogBase_Rikonium_C : public ABP_DoorAnalogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0378 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0380 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0388 (size: 0x8)
    class UMaterialInstanceDynamic* PowerColor_Material;                              // 0x0390 (size: 0x8)

    void UserConstructionScript();
    void Deactivate();
    void ExecuteUbergraph_BP_DoorAnalogBase_Rikonium(int32 EntryPoint);
}; // Size: 0x398

#endif
