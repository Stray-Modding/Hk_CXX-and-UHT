#ifndef UE4SS_SDK_BP_Catbutton_Frottable_HPP
#define UE4SS_SDK_BP_Catbutton_Frottable_HPP

class ABP_Catbutton_Frottable_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UCOMP_CatFrottableComponent_C* COMP_CatFrottableComponent;                  // 0x0240 (size: 0x8)
    class UCapsuleComponent* capsule;                                                 // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Catbutton_Frottable(int32 EntryPoint);
}; // Size: 0x250

#endif
