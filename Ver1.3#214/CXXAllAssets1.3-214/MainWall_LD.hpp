#ifndef UE4SS_SDK_MainWall_LD_HPP
#define UE4SS_SDK_MainWall_LD_HPP

class AMainWall_LD_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class AActor* Pigeon_Target;                                                      // 0x0238 (size: 0x8)
    class AActor* Cat_Target_A;                                                       // 0x0240 (size: 0x8)
    class AActor* Cat_Target_B;                                                       // 0x0248 (size: 0x8)
    bool bSeq1_cat1;                                                                  // 0x0250 (size: 0x1)
    bool bSeq1_cat2;                                                                  // 0x0251 (size: 0x1)
    bool bSeq2_cat1;                                                                  // 0x0252 (size: 0x1)
    bool bSeq2_cat2;                                                                  // 0x0253 (size: 0x1)
    class AActor* Trg_Miaou_ExecuteUbergraph_MainWall_LD_RefProperty;                 // 0x0258 (size: 0x8)
    class AInGameText_C* TXT_Miaou_ExecuteUbergraph_MainWall_LD_RefProperty;          // 0x0260 (size: 0x8)
    class AActor* TRG_CrossGap_ExecuteUbergraph_MainWall_LD_RefProperty;              // 0x0268 (size: 0x8)
    class AInGameText_C* TXT_CrossGap_ExecuteUbergraph_MainWall_LD_RefProperty;       // 0x0270 (size: 0x8)
    class AInGameText_C* TXT_Jump_ExecuteUbergraph_MainWall_LD_RefProperty;           // 0x0278 (size: 0x8)
    class AActor* TRG_CatPosA_ExecuteUbergraph_MainWall_LD_RefProperty;               // 0x0280 (size: 0x8)
    class ASkeletalMeshActor* Cat1_ExecuteUbergraph_MainWall_LD_RefProperty;          // 0x0288 (size: 0x8)
    class ASkeletalMeshActor* Cat2_ExecuteUbergraph_MainWall_LD_RefProperty;          // 0x0290 (size: 0x8)
    class AActor* CatPos_A1_ExecuteUbergraph_MainWall_LD_RefProperty;                 // 0x0298 (size: 0x8)
    class AActor* CatPos_A2_ExecuteUbergraph_MainWall_LD_RefProperty;                 // 0x02A0 (size: 0x8)
    class AActor* CatPos_C1_ExecuteUbergraph_MainWall_LD_RefProperty;                 // 0x02A8 (size: 0x8)
    class AActor* CatPos_C2_ExecuteUbergraph_MainWall_LD_RefProperty;                 // 0x02B0 (size: 0x8)
    class AActor* TRG_CatPosC_ExecuteUbergraph_MainWall_LD_RefProperty;               // 0x02B8 (size: 0x8)
    class AActor* Pigeaon_PosA_ExecuteUbergraph_MainWall_LD_RefProperty;              // 0x02C0 (size: 0x8)
    class AActor* Pigeaon_PosB_ExecuteUbergraph_MainWall_LD_RefProperty;              // 0x02C8 (size: 0x8)
    class AActor* Pigeaon_PosC_ExecuteUbergraph_MainWall_LD_RefProperty;              // 0x02D0 (size: 0x8)
    class AActor* Pigeaon_PosD_ExecuteUbergraph_MainWall_LD_RefProperty;              // 0x02D8 (size: 0x8)
    class AActor* TRG_CatPosE_ExecuteUbergraph_MainWall_LD_RefProperty;               // 0x02E0 (size: 0x8)
    class AActor* Pigeaon_PosF_ExecuteUbergraph_MainWall_LD_RefProperty;              // 0x02E8 (size: 0x8)
    class AActor* TRG_CatPosF_ExecuteUbergraph_MainWall_LD_RefProperty;               // 0x02F0 (size: 0x8)
    class AActor* TRG_CatPosEnd_ExecuteUbergraph_MainWall_LD_RefProperty;             // 0x02F8 (size: 0x8)
    class ASkeletalMeshActor* PIGEON_PECK_2_ExecuteUbergraph_MainWall_LD_RefProperty; // 0x0300 (size: 0x8)
    class AActor* Pigeaon_PosE_ExecuteUbergraph_MainWall_LD_RefProperty;              // 0x0308 (size: 0x8)
    class ASkeletalMeshActor* Cat1_Target_ExecuteUbergraph_MainWall_LD_RefProperty;   // 0x0310 (size: 0x8)
    class ASkeletalMeshActor* Cat2_Target_ExecuteUbergraph_MainWall_LD_RefProperty;   // 0x0318 (size: 0x8)
    class ASkeletalMeshActor* Cat3_ExecuteUbergraph_MainWall_LD_RefProperty;          // 0x0320 (size: 0x8)
    class AActor* CatPos_B1_ExecuteUbergraph_MainWall_LD_RefProperty;                 // 0x0328 (size: 0x8)
    class ASkeletalMeshActor* Cat4_ExecuteUbergraph_MainWall_LD_RefProperty;          // 0x0330 (size: 0x8)
    class AActor* CatPos_B2_ExecuteUbergraph_MainWall_LD_RefProperty;                 // 0x0338 (size: 0x8)
    class ASkeletalMeshActor* Cat5_ExecuteUbergraph_MainWall_LD_RefProperty;          // 0x0340 (size: 0x8)
    class ASkeletalMeshActor* Cat6_ExecuteUbergraph_MainWall_LD_RefProperty;          // 0x0348 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void trigger pigeon flying sound();
    void ExecuteUbergraph_MainWall_LD(int32 EntryPoint);
}; // Size: 0x350

#endif
