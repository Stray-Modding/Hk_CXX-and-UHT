#ifndef UE4SS_SDK_BP_TextLightable_HPP
#define UE4SS_SDK_BP_TextLightable_HPP

class ABP_TextLightable_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class ULightableComponent* lightable;                                             // 0x0240 (size: 0x8)
    class ABP_BarkModifier_C* BarkModifier;                                           // 0x0248 (size: 0x8)
    bool Enable;                                                                      // 0x0250 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void ExecuteUbergraph_BP_TextLightable(int32 EntryPoint);
}; // Size: 0x251

#endif
