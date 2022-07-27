#ifndef UE4SS_SDK_BP_Doc_HPP
#define UE4SS_SDK_BP_Doc_HPP

class ABP_Doc_C : public ABP_Droid_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EA8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_LArm;                            // 0x0EB0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_RArm;                            // 0x0EB8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_RShoulder;                       // 0x0EC0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_LUpLeg;                          // 0x0EC8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_RLeg;                            // 0x0ED0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_LLeg;                            // 0x0ED8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_Head2;                           // 0x0EE0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_Head;                            // 0x0EE8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_Chest2;                          // 0x0EF0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_Chest;                           // 0x0EF8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint_RHand;                           // 0x0F00 (size: 0x8)
    class UZurgAttackPointManagerComponent* ZurgAttackPointManager;                   // 0x0F08 (size: 0x8)

    void DeactivateAllAttackPoints();
    void ExecuteUbergraph_BP_Doc(int32 EntryPoint);
}; // Size: 0xF10

#endif
