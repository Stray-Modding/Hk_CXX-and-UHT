#ifndef UE4SS_SDK_DIAL_Clementine_Metro_HPP
#define UE4SS_SDK_DIAL_Clementine_Metro_HPP

class ADIAL_Clementine_Metro_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    bool Dialog is finished;                                                          // 0x0348 (size: 0x1)
    class AActor* Drone Target POS;                                                   // 0x0350 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* cameraSpline;                                // 0x0358 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA72E1AC15();
    void Tick_6246EF4646E19036986D72BA72E1AC15(float Ratio);
    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_Clementine_Metro(int32 EntryPoint);
}; // Size: 0x360

#endif
