#ifndef UE4SS_SDK_BP_Zurg_InterestPoint_HPP
#define UE4SS_SDK_BP_Zurg_InterestPoint_HPP

class UBP_Zurg_InterestPoint_C : public UZurgInterestPointComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimSequence* InterestAnim;
    class ABP_ZurgPawnSlave_C* CurrentZurg;
    class ABP_Zurg_Interest_Zone_C* Zurg_Interest_Zone;
    bool bIsFree;
    float MinimumHoldingTime;
    float MaximumHoldingTime;

    void IsFree(bool& IsFree);
    void ReceiveBeginPlay();
    void OnZurgEnter(class ABP_ZurgPawnSlave_C* CurrentZurg);
    void OnZurgExit();
    void OnAttachedZurgDestroyed(class AActor* DestroyedActor);
    void ExecuteUbergraph_BP_Zurg_InterestPoint(int32 EntryPoint);
};

#endif
