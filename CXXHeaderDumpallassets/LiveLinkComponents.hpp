#ifndef UE4SS_SDK_LiveLinkComponents_HPP
#define UE4SS_SDK_LiveLinkComponents_HPP

class ULiveLinkComponentController : public UActorComponent
{
    FLiveLinkSubjectRepresentation SubjectRepresentation;                             // 0x00B0 (size: 0x10)
    TMap<class TSubclassOf<ULiveLinkRole>, class ULiveLinkControllerBase*> ControllerMap; // 0x00C0 (size: 0x50)
    bool bUpdateInEditor;                                                             // 0x0110 (size: 0x1)
    FLiveLinkComponentControllerOnLiveLinkUpdated OnLiveLinkUpdated;                  // 0x0118 (size: 0x10)
    void LiveLinkTickDelegate(float DeltaTime);
    FComponentReference ComponentToControl;                                           // 0x0128 (size: 0x28)
    bool bDisableEvaluateLiveLinkWhenSpawnable;                                       // 0x0150 (size: 0x1)
    bool bEvaluateLiveLink;                                                           // 0x0151 (size: 0x1)

}; // Size: 0x158

class ULiveLinkComponentSettings : public UObject
{
    TMap<class TSubclassOf<ULiveLinkRole>, class TSubclassOf<ULiveLinkControllerBase>> DefaultControllerForRole; // 0x0028 (size: 0x50)

}; // Size: 0x78

class ULiveLinkControllerBase : public UObject
{
}; // Size: 0x40

class ULiveLinkLightController : public ULiveLinkControllerBase
{
}; // Size: 0x40

struct FLiveLinkTransformControllerData
{
    bool bWorldTransform;                                                             // 0x0000 (size: 0x1)
    bool bUseLocation;                                                                // 0x0001 (size: 0x1)
    bool bUseRotation;                                                                // 0x0002 (size: 0x1)
    bool bUseScale;                                                                   // 0x0003 (size: 0x1)
    bool bSweep;                                                                      // 0x0004 (size: 0x1)
    bool bTeleport;                                                                   // 0x0005 (size: 0x1)

}; // Size: 0x6

class ULiveLinkTransformController : public ULiveLinkControllerBase
{
    FLiveLinkTransformControllerData TransformData;                                   // 0x0040 (size: 0x6)

}; // Size: 0x48

#endif
