#ifndef UE4SS_SDK_BP_B12Flat_SecretDoor_HPP
#define UE4SS_SDK_BP_B12Flat_SecretDoor_HPP

class ABP_B12Flat_SecretDoor_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* CustomCol1;                                           // 0x0380 (size: 0x8)
    class UStaticMeshComponent* CustomCol;                                            // 0x0388 (size: 0x8)
    class UAudioComponent* act_wall_moves_loop_01;                                    // 0x0390 (size: 0x8)
    class UStaticMeshComponent* Shelf_01_a2;                                          // 0x0398 (size: 0x8)
    class UStaticMeshComponent* Shelf_01_a1;                                          // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* Shelf_01_a;                                           // 0x03A8 (size: 0x8)
    TArray<class AStaticMeshActor*> StaticMeshToAttach;                               // 0x03B0 (size: 0x10)

    void UserConstructionScript();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnStartMovement_Event_0(bool IsOpen);
    void Set meshes mobility(TEnumAsByte<EComponentMobility::Type> NewMobility);
    void Activate_SafetyCol();
    void ExecuteUbergraph_BP_B12Flat_SecretDoor(int32 EntryPoint);
}; // Size: 0x3C0

#endif
