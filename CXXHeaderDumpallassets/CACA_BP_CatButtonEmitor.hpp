#ifndef UE4SS_SDK_CACA_BP_CatButtonEmitor_HPP
#define UE4SS_SDK_CACA_BP_CatButtonEmitor_HPP

class ACACA_BP_CatButtonEmitor_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0280 (size: 0x8)
    class UCOMP_Grabbable_C* COMP_Grabbable;                                          // 0x0288 (size: 0x8)
    bool Alarm;                                                                       // 0x0290 (size: 0x1)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_CACA_BP_CatButtonEmitor(int32 EntryPoint);
}; // Size: 0x291

#endif
