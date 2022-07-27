#ifndef UE4SS_SDK_CACA_Camera_HPP
#define UE4SS_SDK_CACA_Camera_HPP

class ACACA_Camera_C : public ABP_MovingTarget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x02A8 (size: 0x8)

    void ExecuteUbergraph_CACA_Camera(int32 EntryPoint);
}; // Size: 0x2B0

#endif
