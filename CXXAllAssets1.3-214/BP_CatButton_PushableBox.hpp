#ifndef UE4SS_SDK_BP_CatButton_PushableBox_HPP
#define UE4SS_SDK_BP_CatButton_PushableBox_HPP

class ABP_CatButton_PushableBox_C : public ABP_CatButton_PushableBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UChildActorComponent* BoxContainer;                                         // 0x02E8 (size: 0x8)
    class UChildActorComponent* BoxLid;                                               // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* BoxContainerMesh;                                     // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* BoxLidMesh;                                           // 0x0300 (size: 0x8)
    TArray<class AActor*> Loot;                                                       // 0x0308 (size: 0x10)

    void ReceiveBeginPlay();
    void On Falling();
    void ExecuteUbergraph_BP_CatButton_PushableBox(int32 EntryPoint);
}; // Size: 0x318

#endif
