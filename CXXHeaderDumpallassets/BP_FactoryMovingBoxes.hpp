#ifndef UE4SS_SDK_BP_FactoryMovingBoxes_HPP
#define UE4SS_SDK_BP_FactoryMovingBoxes_HPP

class ABP_FactoryMovingBoxes_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UEditorTickComponent* EditorTick;                                           // 0x0238 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TSubclassOf<class AActor> Class_Moving;                                           // 0x0250 (size: 0x8)
    float Speed;                                                                      // 0x0258 (size: 0x4)
    float DistanceBetweenBoxes;                                                       // 0x025C (size: 0x4)
    int32 NumberOfBoxes;                                                              // 0x0260 (size: 0x4)
    float Offset;                                                                     // 0x0264 (size: 0x4)
    TArray<class AMovingBox_C*> ActorOnSplineArray;                                   // 0x0268 (size: 0x10)
    float Length;                                                                     // 0x0278 (size: 0x4)
    float DistanceToEmpty;                                                            // 0x027C (size: 0x4)
    float DistanceToRefill;                                                           // 0x0280 (size: 0x4)
    int32 Box_Start;                                                                  // 0x0284 (size: 0x4)
    float Offset_Init;                                                                // 0x0288 (size: 0x4)
    float BoxDistance;                                                                // 0x028C (size: 0x4)
    bool Destroyed;                                                                   // 0x0290 (size: 0x1)
    TArray<FVector2D> UpdateRange;                                                    // 0x0298 (size: 0x10)
    float DebugDistance;                                                              // 0x02A8 (size: 0x4)
    float Delta Seconds;                                                              // 0x02AC (size: 0x4)
    TArray<FVector2D> Update Range;                                                   // 0x02B0 (size: 0x10)

    void UpdateBox(int32 Index);
    void CheckUpdateRange(float Distance, bool& CanBeUpdate);
    void SetSpeed(float Speed);
    void SetOffset(float Offset);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__EditorTick_K2Node_ComponentBoundEvent_1_EditorTickSignature__DelegateSignature(float DeltaTime);
    void DestroyBoxes();
    void BndEvt__BP_FactoryMovingBoxes_Streaming_K2Node_ComponentBoundEvent_4_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Update Speed();
    void SetUpdateRange(const TArray<FVector2D>& New Update Range);
    void ExecuteUbergraph_BP_FactoryMovingBoxes(int32 EntryPoint);
}; // Size: 0x2C0

#endif
