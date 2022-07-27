#ifndef UE4SS_SDK_Dial_MomoB12Window_HPP
#define UE4SS_SDK_Dial_MomoB12Window_HPP

class ADial_MomoB12Window_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* DronePos;                                                           // 0x0340 (size: 0x8)
    class ABP_SplineRail_C* Rail;                                                     // 0x0348 (size: 0x8)
    class ABP_MomoWindowToSlums_C* Window;                                            // 0x0350 (size: 0x8)
    class AActor* Digicode;                                                           // 0x0358 (size: 0x8)
    class ACameraActor* Camera;                                                       // 0x0360 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_MomoB12Window(int32 EntryPoint);
}; // Size: 0x368

#endif
