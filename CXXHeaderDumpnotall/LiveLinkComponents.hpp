#ifndef UE4SS_SDK_LiveLinkComponents_HPP
#define UE4SS_SDK_LiveLinkComponents_HPP

class ULiveLinkComponentController : public UActorComponent
{
    FLiveLinkSubjectRepresentation SubjectRepresentation;
    TMap<class TSubclassOf<ULiveLinkRole>, class ULiveLinkControllerBase*> ControllerMap;
    bool bUpdateInEditor;
    FLiveLinkComponentControllerOnLiveLinkUpdated OnLiveLinkUpdated;
    void LiveLinkTickDelegate(float DeltaTime);
    FComponentReference ComponentToControl;
    bool bDisableEvaluateLiveLinkWhenSpawnable;
    bool bEvaluateLiveLink;

};

class ULiveLinkComponentSettings : public UObject
{
    TMap<class TSubclassOf<ULiveLinkRole>, class TSubclassOf<ULiveLinkControllerBase>> DefaultControllerForRole;

};

class ULiveLinkControllerBase : public UObject
{
};

class ULiveLinkLightController : public ULiveLinkControllerBase
{
};

struct FLiveLinkTransformControllerData
{
    bool bWorldTransform;
    bool bUseLocation;
    bool bUseRotation;
    bool bUseScale;
    bool bSweep;
    bool bTeleport;

};

class ULiveLinkTransformController : public ULiveLinkControllerBase
{
    FLiveLinkTransformControllerData TransformData;

};

#endif
