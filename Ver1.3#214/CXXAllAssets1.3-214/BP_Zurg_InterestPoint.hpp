#ifndef UE4SS_SDK_BP_Zurg_InterestPoint_HPP
#define UE4SS_SDK_BP_Zurg_InterestPoint_HPP

class UBP_Zurg_InterestPoint_C : public UZurgInterestPointComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0200 (size: 0x8)
    class UAnimSequence* InterestAnim;                                                // 0x0208 (size: 0x8)
    class ABP_ZurgPawnSlave_C* CurrentZurg;                                           // 0x0210 (size: 0x8)
    class ABP_Zurg_Interest_Zone_C* Zurg_Interest_Zone;                               // 0x0218 (size: 0x8)
    bool bIsFree;                                                                     // 0x0220 (size: 0x1)
    float MinimumHoldingTime;                                                         // 0x0224 (size: 0x4)
    float MaximumHoldingTime;                                                         // 0x0228 (size: 0x4)

    void IsFree(bool& IsFree);
    void ReceiveBeginPlay();
    void OnZurgEnter(class ABP_ZurgPawnSlave_C* CurrentZurg);
    void OnZurgExit();
    void OnAttachedZurgDestroyed(class AActor* DestroyedActor);
    void ExecuteUbergraph_BP_Zurg_InterestPoint(int32 EntryPoint);
}; // Size: 0x22C

#endif
