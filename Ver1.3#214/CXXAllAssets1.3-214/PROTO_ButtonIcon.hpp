#ifndef UE4SS_SDK_PROTO_ButtonIcon_HPP
#define UE4SS_SDK_PROTO_ButtonIcon_HPP

class APROTO_ButtonIcon_C : public AActor
{
    class UWidgetComponent* Widget;                                                   // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void SetInputBinding(FName Button);
}; // Size: 0x240

#endif
