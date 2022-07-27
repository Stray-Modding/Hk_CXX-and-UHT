#ifndef UE4SS_SDK_BP_BarkModifier_HPP
#define UE4SS_SDK_BP_BarkModifier_HPP

class ABP_BarkModifier_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    bool ChangeSpeed;                                                                 // 0x0240 (size: 0x1)
    float Speed;                                                                      // 0x0244 (size: 0x4)
    bool Wait;                                                                        // 0x0248 (size: 0x1)
    float WaitTime;                                                                   // 0x024C (size: 0x4)
    bool IsCollide;                                                                   // 0x0250 (size: 0x1)
    bool WaitForTrigger;                                                              // 0x0251 (size: 0x1)
    bool IsTriggered;                                                                 // 0x0252 (size: 0x1)

    void SetCollide();
    void IsOverlap(bool& IsCollide);
    void GetWaitTime(float& WaitTime);
    void GetSpeed(float& Speed);
    void LogicTrigger();
    void ExecuteUbergraph_BP_BarkModifier(int32 EntryPoint);
}; // Size: 0x253

#endif
