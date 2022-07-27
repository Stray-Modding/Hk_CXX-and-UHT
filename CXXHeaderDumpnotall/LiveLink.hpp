#ifndef UE4SS_SDK_LiveLink_HPP
#define UE4SS_SDK_LiveLink_HPP

#include "LiveLink_enums.hpp"

class ULiveLinkRetargetAsset : public UObject
{
};

class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
    bool bInterpolatePropertyValues;

};

class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
};

class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
    FName BoneName;

};

class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
    bool bAppendSubjectNameToBones;

};

class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
    ELiveLinkAxis FrontAxis;
    ELiveLinkAxis RightAxis;
    ELiveLinkAxis UpAxis;
    bool bUseOffsetPosition;
    bool bUseOffsetOrientation;
    FVector OffsetPosition;
    FRotator OffsetOrientation;

};

class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
};

class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames);
    void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name);
    void SetLiveLinkSubjectEnabled(const FLiveLinkSubjectKey SubjectKey, bool bEnabled);
    bool RemoveSource(FLiveLinkSourceHandle& SourceHandle);
    void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);
    int32 NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle);
    bool IsSpecificLiveLinkSubjectEnabled(const FLiveLinkSubjectKey SubjectKey, bool bForThisFrame);
    bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle);
    bool IsLiveLinkSubjectEnabled(const FLiveLinkSubjectName SubjectName);
    bool HasParent(FLiveLinkTransform& LiveLinkTransform);
    void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform);
    void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, FLiveLinkTransform& LiveLinkTransform);
    TSubclassOf<class ULiveLinkRole> GetSpecificLiveLinkSubjectRole(const FLiveLinkSubjectKey SubjectKey);
    FText GetSourceType(FLiveLinkSourceHandle& SourceHandle);
    FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle);
    FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle);
    void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform);
    bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value);
    void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent);
    void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData);
    TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
    TSubclassOf<class ULiveLinkRole> GetLiveLinkSubjectRole(const FLiveLinkSubjectName SubjectName);
    TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
    void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);
    void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);
    void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData);
    bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData);
    bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData);
    bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, TSubclassOf<class ULiveLinkRole> Role, FLiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, TSubclassOf<class ULiveLinkRole> Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData);
    void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);
    int32 ChildCount(FLiveLinkTransform& LiveLinkTransform);
};

class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{

    bool UpdateVirtualSubjectStaticData_Internal(const FLiveLinkBaseStaticData& InStruct);
    bool UpdateVirtualSubjectFrameData_Internal(const FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
    void OnUpdate();
    void OnInitialize();
};

class ULiveLinkComponent : public UActorComponent
{
    FLiveLinkComponentOnLiveLinkUpdated OnLiveLinkUpdated;
    void LiveLinkTickSignature(float DeltaTime);

    void GetSubjectDataAtWorldTime(const FName SubjectName, const float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    void GetSubjectDataAtSceneTime(const FName SubjectName, const FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    void GetSubjectData(const FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    void GetAvailableSubjectNames(TArray<FName>& SubjectNames);
};

class UDEPRECATED_LiveLinkDrivenComponent : public UActorComponent
{
    FLiveLinkSubjectName SubjectName;
    FName ActorTransformBone;
    bool bModifyActorTransform;
    bool bSetRelativeLocation;

};

class ULiveLinkInstance : public UAnimInstance
{
    class ULiveLinkRetargetAsset* CurrentRetargetAsset;

    void SetSubject(FLiveLinkSubjectName SubjectName);
    void SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset);
};

struct FProviderPollResult
{
    FString Name;
    FString MachineName;
    double MachineTimeOffset;

};

class ULiveLinkMessageBusFinder : public UObject
{

    void GetAvailableProviders(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders);
    class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
    void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);
};

class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
};

class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{
};

class ULiveLinkPreset : public UObject
{
    TArray<FLiveLinkSourcePreset> Sources;
    TArray<FLiveLinkSubjectPreset> Subjects;

    void BuildFromClient();
    bool ApplyToClient();
    bool AddToClient(const bool bRecreatePresets);
};

class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{

    void RemapCurveElements(TMap<FName, float>& CurveItems);
    FName GetRemappedCurveName(FName CurveName);
    FName GetRemappedBoneName(FName BoneName);
};

struct FLiveLinkRoleProjectSetting
{
    TSubclassOf<class ULiveLinkRole> Role;
    TSubclassOf<class ULiveLinkSubjectSettings> SettingClass;
    TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
    TArray<class TSubclassOf<ULiveLinkFramePreProcessor>> FramePreProcessors;

};

class ULiveLinkSettings : public UObject
{
    TArray<FLiveLinkRoleProjectSetting> DefaultRoleSettings;
    TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
    TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset;
    FDirectoryPath PresetSaveDir;
    float ClockOffsetCorrectionStep;
    ELiveLinkSourceMode DefaultMessageBusSourceMode;
    double MessageBusPingRequestFrequency;
    double MessageBusHeartbeatFrequency;
    double MessageBusHeartbeatTimeout;
    double MessageBusTimeBeforeRemovingInactiveSource;
    double TimeWithoutFrameToBeConsiderAsInvalid;
    FLinearColor ValidColor;
    FLinearColor InvalidColor;
    uint8 TextSizeSource;
    uint8 TextSizeSubject;

};

class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
    FLiveLinkSubjectKey SubjectKey;
    ELiveLinkTimecodeProviderEvaluationType Evaluation;
    bool bOverrideFrameRate;
    FFrameRate OverrideFrameRate;
    int32 BufferSize;

};

class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
    FLiveLinkSubjectName SubjectName;

};

class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
    FName SourceName;

};

struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
    FPoseLink InputPose;
    FLiveLinkSubjectName LiveLinkSubjectName;
    TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset;
    class ULiveLinkRetargetAsset* CurrentRetargetAsset;

};

struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
    FAnimNode_LiveLinkPose PoseNode;

};

struct FLiveLinkRetargetAssetReference
{
};

#endif
