#ifndef UE4SS_SDK_JoyLibraryRuntime_HPP
#define UE4SS_SDK_JoyLibraryRuntime_HPP

#include "JoyLibraryRuntime_enums.hpp"

class IActivableInterface : public IInterface
{

    void OnDeactivate();
    void OnActivate();
    bool IsActive();
};

class UActivationDataComponent : public UActorComponent
{
};

class UActorTools : public UBlueprintFunctionLibrary
{

    void SetActorActive(class AActor* _actor, bool _active);
    bool IsActorActive(class AActor* _actor);
    void InternalSetActorActive(class AActor* _actor, bool _active);
};

class UAITools : public UBlueprintFunctionLibrary
{

    FString GetActiveBehaviorTreeTaskName(class AAIController* _aiController);
};

class UAnimationTools : public UBlueprintFunctionLibrary
{

    void SetAnimNotifyPlaySound_VolumeMultiplier(const class UAnimNotify_PlaySound* _notify, float _volumeMultiplier);
    void SetAnimNotifyPlaySound_Sound(const class UAnimNotify_PlaySound* _notify, class USoundBase* _sound);
    void SetAnimNotifyPlaySound_PitchMultiplier(const class UAnimNotify_PlaySound* _notify, float _pitchMultiplier);
    void SetAnimNotifyPlaySound_Follow(const class UAnimNotify_PlaySound* _notify, bool _follow);
    void SetAnimNotifyPlaySound_AttachName(const class UAnimNotify_PlaySound* _notify, FName _attachName);
    void RefreshAnimationCache(class UAnimSequence* _animationSequence);
    float GetPlayLength(const class UAnimSequence* _animationSequence);
    bool GetBoneChain(const class USkeletalMeshComponent* _skeletalMesh, const FName& _firstBone, const FName& _lastBone, TArray<FName>& _outChain);
    class UAnimationAsset* GetAnimation(class USkeletalMeshComponent* _skeletalMeshComponent);
    FTransform ExtractRootTrackTransformFromBlendsapce(const class UBlendSpaceBase* _blendSpace, const float _posx, const float _posy, const float _time);
    FTransform ExtractRootTrackTransform(const class UAnimSequence* _animationSequence, float _pos);
    FTransform ExtractRootMotionFromRange(const class UAnimSequence* _animationSequence, float _startTrackPosition, float _endTrackPosition);
    float ExtractDurationFromBlendsapce(const class UBlendSpaceBase* _blendSpace, const float _posx, const float _posy);
    FTransform ExtractBoneTransformFromBlendspace(const class UBlendSpaceBase* _blendSpace, const FName _boneName, float _posx, float _posy, const float _time, bool _extractRootMotion);
    FTransform ExtractBoneTransformAtTime(const class UAnimSequence* _animationSequence, const FName _boneName, const float _time, const bool _extractRootMotion);
    FTransform ConsumeRootMotion(class USkeletalMeshComponent* _skeletalMeshComponent);
};

class UJoyAsyncTraceAction : public UBlueprintAsyncActionBase
{
};

class UJoyAsyncTraceSingleAction : public UJoyAsyncTraceAction
{
    FJoyAsyncTraceSingleActionTraceDone TraceDone;
    void JoyAsyncTraceSingleDone(bool HasHit, FHitResult Hit);

    class UJoyAsyncTraceSingleAction* AsyncSphereTraceSingleByChannel(class UObject* _worldContextObject, FVector _start, FVector _end, float _radius, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<class AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    class UJoyAsyncTraceSingleAction* AsyncLineTraceSingleByChannel(class UObject* _worldContextObject, FVector _start, FVector _end, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<class AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    class UJoyAsyncTraceSingleAction* AsyncCapsuleTraceSingleByChannel(class UObject* _worldContextObject, FVector _start, FVector _end, float _radius, float _halfHeight, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<class AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    class UJoyAsyncTraceSingleAction* AsyncBoxTraceSingleByChannel(class UObject* _worldContextObject, FVector _start, FVector _end, FVector _halfSize, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<class AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
};

class UJoyAsyncTraceMultiAction : public UJoyAsyncTraceAction
{
    FJoyAsyncTraceMultiActionTraceDone TraceDone;
    void JoyAsyncTraceMultiDone(bool HasHit, const TArray<FHitResult>& Hits);

    class UJoyAsyncTraceMultiAction* AsyncSphereTraceMultiByChannel(class UObject* _worldContextObject, FVector _start, FVector _end, float _radius, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<class AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    class UJoyAsyncTraceMultiAction* AsyncLineTraceMultiByChannel(class UObject* _worldContextObject, FVector _start, FVector _end, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<class AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    class UJoyAsyncTraceMultiAction* AsyncCapsuleTraceMultiByChannel(class UObject* _worldContextObject, FVector _start, FVector _end, float _radius, float _halfHeight, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<class AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
    class UJoyAsyncTraceMultiAction* AsyncBoxTraceMultiByChannel(class UObject* _worldContextObject, FVector _start, FVector _end, FVector _halfSize, FRotator _orientation, TEnumAsByte<ETraceTypeQuery> _traceChannel, const TArray<class AActor*>& _actorsToIgnore, bool _traceComplex, bool _ignoreSelf, TEnumAsByte<EDrawDebugTrace::Type> _drawDebugType, FLinearColor _traceColor, FLinearColor _traceHitColor, float _drawTime);
};

class UBreakableDelay : public UObject
{

    bool InternalBreakBreakableDelay(class UObject* _worldContextObject, int32 _uuid);
    int32 InternalBreakableDelay(class UObject* _worldContextObject, float _duration, FLatentActionInfo _latentInfo);
    void Delay(class UObject* _worldContextObject, float _duration, FLatentActionInfo _latentInfo);
};

class UCameraTools : public UBlueprintFunctionLibrary
{

    void RemovePlayerControllerHiddenPrimitiveComponent(class APlayerController* _playerController, class UPrimitiveComponent* _component);
    void RemovePlayerControllerHiddenActor(class APlayerController* _playerController, class AActor* _actor);
    FVector GetCurrentViewLocation(class UObject* _worldContextObject);
    void AddPlayerControllerHiddenPrimitiveComponent(class APlayerController* _playerController, class UPrimitiveComponent* _component);
    void AddPlayerControllerHiddenActor(class APlayerController* _playerController, class AActor* _actor);
};

class UCurveTools : public UBlueprintFunctionLibrary
{

    float GetFloatValue(const FRuntimeFloatCurve& _curve, float _time);
};

class UDebugHistogramTools : public UBlueprintFunctionLibrary
{
};

class UDrawMovementComponent : public USceneComponent
{
    float DrawLifeTime;
    float DrawHeight;
    float DrawThickness;
    bool StartEnabled;
    FColor DrawColor;
    TEnumAsByte<EDrawMovementType> DrawType;

    void SetDrawEnabled(bool _enabled);
    bool IsDrawEnabled();
    void Clear();
};

class UEasingTools : public UBlueprintFunctionLibrary
{

    float SineOut(float _a, float _b, float _t);
    float SineInOut(float _a, float _b, float _t);
    float SineIn(float _a, float _b, float _t);
    float QuintOut(float _a, float _b, float _t);
    float QuintInOut(float _a, float _b, float _t);
    float QuintIn(float _a, float _b, float _t);
    float QuartOut(float _a, float _b, float _t);
    float QuartInOut(float _a, float _b, float _t);
    float QuartIn(float _a, float _b, float _t);
    float QuadOut(float _a, float _b, float _t);
    float QuadInOut(float _a, float _b, float _t);
    float QuadIn(float _a, float _b, float _t);
    float ExpoOut(float _a, float _b, float _t);
    float ExpoInOut(float _a, float _b, float _t);
    float ExpoIn(float _a, float _b, float _t);
    float Ease(TEnumAsByte<EEasingFunction> _function, float _a, float _b, float _t);
    float CubeOut(float _a, float _b, float _t);
    float CubeInOut(float _a, float _b, float _t);
    float CubeIn(float _a, float _b, float _t);
    float CircOut(float _a, float _b, float _t);
    float CircInOut(float _a, float _b, float _t);
    float CircIn(float _a, float _b, float _t);
    float BounceOut(float _a, float _b, float _t);
    float BounceInOut(float _a, float _b, float _t);
    float BounceIn(float _a, float _b, float _t);
    float BackOut(float _a, float _b, float _t);
    float BackInOut(float _a, float _b, float _t);
    float BackIn(float _a, float _b, float _t);
};

class UGUITools : public UBlueprintFunctionLibrary
{

    void ForceSizeRefresh(class UWidget* _widget);
};

class UInputTools : public UBlueprintFunctionLibrary
{

    void SetViewportIgnoreInput(bool _value);
    bool IsShiftPressed(const class APlayerController* _playerController);
    bool IsCtrlPressed(const class APlayerController* _playerController);
    bool IsCmdPressed(const class APlayerController* _playerController);
    bool IsAltPressed(const class APlayerController* _playerController);
    bool InputKey(class APlayerController* _playerController, FKey Key, TEnumAsByte<EInputEvent> Event);
    bool InputAxis(class APlayerController* _playerController, FKey Key, float Delta, float DeltaTime);
    float GetTimeDown(const class APlayerController* _playerController, FKey InKey);
};

class UJoyInterpolator : public UBlueprintAsyncActionBase
{
    FJoyInterpolatorTick Tick;
    void InterpolatorTickOutputPin(float Ratio);
    FJoyInterpolatorComplete Complete;
    void InterpolatorCompleteOutputPin();

    void Stop();
};

class UJoyEasingInterpolator : public UJoyInterpolator
{

    class UJoyEasingInterpolator* StartEasingInterpolator(class UObject* WorldContextObject, TEnumAsByte<EEasingFunction> _easingFunction, float _time, class UJoyEasingInterpolator*& _interpolatorObject);
};

class UJoyCurveInterpolator : public UJoyInterpolator
{

    class UJoyCurveInterpolator* StartCurveInterpolator(class UObject* WorldContextObject, class UJoyEasingInterpolator*& _interpolatorObject, class UCurveFloat* _curveAsset, float _playRate);
};

class UJoyGameInstance : public UPlatformGameInstance
{
    TArray<class AManager*> m_managers;

    class AManager* GetManager(TSubclassOf<class AManager> _managerClass, class UObject* _worldContextObject);
    void DrawDebugCurve(class UCurveFloat* _curve, TEnumAsByte<ECoordinatesOrigin> _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, FString _curveName, FColor _curveColor, FColor _valueColor, int32 _samplesCount);
};

class AJoyHUD : public AHUD
{
};

class UJoyLibrarySettings : public UObject
{
};

class UJoyUtilities : public UBlueprintFunctionLibrary
{

    void SetWidgetComponentWidgetClass(class UWidgetComponent* _component, TSubclassOf<class UUserWidget> _class);
    void SetShapeNavigationRelevancy(class UShapeComponent* _shapeComponent, bool _relevancy);
    void SetOverridenLightMapRes(class UStaticMeshComponent* _component, int32 _overridenLightMapRes);
    void SetOverrideLightMapRes(class UStaticMeshComponent* _component, bool _overrideLightMapRes);
    void SetLightmapType(class UPrimitiveComponent* _component, ELightmapType _lightmapType);
    void LogWarning(class UObject* WorldContextObject, const FString _warningMessage);
    void LogError(class UObject* WorldContextObject, const FString _errorMessage);
    bool IsWorldTearingDown(class UObject* _worldContextObject);
    bool IsWithEditorBuild();
    bool IsSimulatingInEditor();
    bool IsShipping();
    bool IsPlayInEditor(const class UObject* _worldContextObject);
    bool IsAssertEnabled();
    int32 HashString(FString _string);
    bool HasActorBegunPlay(const class AActor* _actor);
    bool GetShapeNavigationRelevancy(class UShapeComponent* _shapeComponent);
    float GetPathComponentRemainingLength(const class UPathFollowingComponent* _pathFollowingComponent);
    void GetPathComponentCurrentPath(const class UPathFollowingComponent* _pathFollowingComponent, class UNavigationPath* _outPath);
    FName GetLevelStreamingAssetName(const class ULevelStreaming* _levelStreaming);
    FName GetLevelAssetName(const class ULevel* _level);
    int32 GetCurrentFrameNumber();
    float GetBoxRadius(const FBox& _box);
    FVector GetBoxExtent(const FBox& _box);
    FVector GetBoxCenter(const FBox& _box);
    FBox GetActorVisualBounds(const class AActor* _actor);
    void ForceGarbageCollection(bool _fullPurge);
    class AActor* FinishSpawningActor(class AActor* Actor, const FTransform& SpawnTransform);
    void DrawDebugCurve(class UObject* _worldContextObject, class UCurveFloat* _curve, TEnumAsByte<ECoordinatesOrigin> _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, FString _curveName, FColor _curveColor, FColor _valueColor, int32 _samplesCount);
    void DebugBreak();
    FBox CombineBoxes(const FBox& _a, const FBox& _b);
    FName CollisionProfileNameToName(const FCollisionProfileName& _collisionProfileName);
    class AActor* BeginDeferredActorSpawnFromClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
    void Assert(bool _condition, FString _message);
};

struct FLevelPointer
{
    TSoftObjectPtr<UWorld> Level;

};

class ULevelPointerFunctionLibrary : public UBlueprintFunctionLibrary
{

    FString GetLevelName(const FLevelPointer& _levelPointer);
};

struct FFuzzyBool
{
    float Delay;
    TEnumAsByte<EEasingFunc::Type> EasingType;

};

class ULogicTools : public UBlueprintFunctionLibrary
{

    void FuzzyBoolSetTarget(class UObject* WorldContextObject, FFuzzyBool& _fuzzyBool, bool _targetResult);
    bool FuzzyBoolGetTarget(FFuzzyBool& _fuzzyBool);
    bool FuzzyBoolGetFuzzy(class UObject* WorldContextObject, FFuzzyBool& _fuzzyBool);
};

class AManager : public AActor
{
};

class UMathTools : public UBlueprintFunctionLibrary
{

    FVector2D TimeIndependentLerpVector2D(const FVector2D& _base, const FVector2D& _target, float _timeTo90, float _dt);
    FVector TimeIndependentLerpVector(const FVector& _base, const FVector& _target, float _timeTo90, float _dt);
    FRotator TimeIndependentLerpRotator(const FRotator& _base, const FRotator& _target, float _timeTo90, float _dt);
    float TimeIndependentLerpFloat(float _base, float _target, float _timeTo90, float _dt);
    float SignedAngleBetween(const FVector& _a, const FVector& _b, FVector _UpVector);
    bool SegmentSphereIntersection2D(const FVector2D& _segmentStart, const FVector2D& _segmentEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    bool SegmentSphereIntersection(const FVector& _segmentStart, const FVector& _segmentEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    FQuat RotatorToQuat(const FRotator& _rotator);
    FRotator QuatToRotator(const FQuat& _quat);
    bool LineSphereIntersection2D(const FVector2D& _lineStart, const FVector2D& _lineEnd, const FVector2D& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    bool LineSphereIntersection(const FVector& _lineStart, const FVector& _lineEnd, const FVector& _sphereCenter, float _sphereRadius, float& _outT1, float& _outT2);
    bool LineLineShortestRoute(const FVector& _lineA1, const FVector& _lineA2, const FVector& _lineB1, const FVector& _lineB2, FVector& _resultA, FVector& _resultB, float& _ARatio, float& _BRatio);
    bool IsNearlyZero(float _value, float _tolerance);
    FVector2D GetYZ2D(const FVector& _vector);
    FVector GetYZ(const FVector& _vector);
    FVector2D GetXZ2D(const FVector& _vector);
    FVector GetXZ(const FVector& _vector);
    FVector2D GetXY2D(const FVector& _vector);
    FVector GetXY(const FVector& _vector);
    float GetSignedAngleBetweenRotators(const FRotator& _a, const FRotator& _b);
    FVector GetRandomPointAroundLocationInTorus(FVector _location, FVector _direction, float _innerRadius, float _outterRadius);
    float GetProjectileTimeOfFlight(FVector _projectileVelocity);
    FVector GetPredictedShootLocation(FVector _fromLocation, FVector _targetLocation, FVector _targetVelocity, float _projectileSpeed);
    FVector GetClosestPointToBox(const FBox& _box, const FVector& _point);
    float GetAngleBetweenRotators(const FRotator& _a, const FRotator& _b);
    float ComputeSquaredDistanceToPoint(const FBox2D& _box, const FVector2D& _point);
    void ComputeBarycentricCoordinates(const FVector& _point, const FVector& _a, const FVector& _b, const FVector& _C, float& _outU, float& _outV, float& _outW);
    FVector ClampVectorAngle(const FVector& _vector, const FVector& _forward, float _minAngleDeg, float _maxAngleDeg, const FVector& _up);
    float AngleBetween(const FVector& _a, const FVector& _b);
};

class UMeshTools : public UBlueprintFunctionLibrary
{

    class USkeletalMesh* MergeSkeletalMeshes(class USkeleton* _skeleton, const TArray<class USkeletalMesh*>& _skeletalMeshes);
};

class UNavigationTool : public UBlueprintFunctionLibrary
{

    void SetDynamicObstacle(class UObject* WorldContextObject, class UShapeComponent* _shapeComponent, bool _dynamicObstacle);
    bool IsDynamicObstacle(class UObject* WorldContextObject, class UShapeComponent* _shapeComponent);
    class ARecastNavMesh* GetRecastNavMesh(class UObject* WorldContextObject, FString _navMeshName);
};

struct FVectorPIDController
{
    float P;
    float I;
    float D;

};

struct FFloatPIDController
{
    float P;
    float I;
    float D;

};

class UPIDTools : public UBlueprintFunctionLibrary
{

    FVector UpdateVectorPIDController(FVectorPIDController& _PID, FVector _current, FVector _target, float _dt);
    float UpdateFloatPIDController(FFloatPIDController& _PID, float _current, float _target, float _dt);
    void ResetVectorPIDController(FVectorPIDController& _PID);
    void ResetFloatPIDController(FFloatPIDController& _PID);
};

struct FNoiseSmootherVector2D
{
    float SamplingTime;
    int32 SampleCount;

};

struct FNoiseSmootherVector
{
    float SamplingTime;
    int32 SampleCount;

};

struct FNoiseSmootherRotation
{
    float SamplingTime;
    int32 SampleCount;

};

struct FNoiseSmootherFloat
{
    float SamplingTime;
    int32 SampleCount;

};

struct FSmootherVectorByComponent
{
    float TimeTo90PercentX;
    float TimeTo90PercentY;
    float TimeTo90PercentZ;
    FVector Value;
    FVector Velocity;

};

struct FSmootherVector
{
    float TimeTo90Percent;
    FVector Value;
    FVector Velocity;

};

struct FSmootherTransform
{
    float TimeTo90Percent;

};

struct FSmootherRotation
{
    float TimeTo90Percent;
    FQuat Value;
    FQuat Velocity;

};

struct FSmootherFloat
{
    float TimeTo90Percent;
    float Value;
    float Velocity;

};

struct FSmootherCurved
{
    FRuntimeFloatCurve m_accelerationCurve;
    FRuntimeFloatCurve m_decelerationCurve;
    float m_velocityChangeThreshold;

};

class USmoother : public UBlueprintFunctionLibrary
{

    FVector2D UpdateNoiseSmootherVector2D(FNoiseSmootherVector2D& _noiseSmoother, float _dt, FVector2D _value);
    FVector UpdateNoiseSmootherVector(FNoiseSmootherVector& _noiseSmoother, float _dt, FVector _value);
    FRotator UpdateNoiseSmootherRotation(FNoiseSmootherRotation& _noiseSmoother, float _dt, FRotator _value);
    float UpdateNoiseSmootherFloat(FNoiseSmootherFloat& _noiseSmoother, float _dt, float _value);
    FVector SmoothVectorByComponent(FSmootherVectorByComponent& _smoother, FVector _target, float _deltaTime);
    FVector SmoothVector(FSmootherVector& _smoother, FVector _target, float _deltaTime);
    FTransform SmoothTransform(FSmootherTransform& _smoother, FTransform _target, float _deltaTime);
    FRotator SmoothRotation(FSmootherRotation& _smoother, FRotator _target, float _deltaTime);
    float SmoothFloat(FSmootherFloat& _smoother, float _target, float _deltaTime);
    float SmootherCurvedTick(FSmootherCurved& _smoother, float _target, float _dt);
    void SmootherCurvedSetValue(FSmootherCurved& _smoother, float _value);
    void SmootherCurvedSetDecelerationCurve(FSmootherCurved& _smoother, class UCurveFloat* _curve);
    void SmootherCurvedSetAccelerationCurve(FSmootherCurved& _smoother, class UCurveFloat* _curve);
    float SmootherCurvedGetValue(const FSmootherCurved& _smoother);
    void SetTimeTo90PercentVectorByComponentZ(FSmootherVectorByComponent& _smoother, float _timeTo90PercentZ);
    void SetTimeTo90PercentVectorByComponentY(FSmootherVectorByComponent& _smoother, float _timeTo90PercentY);
    void SetTimeTo90PercentVectorByComponentX(FSmootherVectorByComponent& _smoother, float _timeTo90PercentX);
    void SetTimeTo90PercentVector(FSmootherVector& _smoother, float _timeTo90Percent);
    void SetTimeTo90PercentTransform(FSmootherTransform& _smoother, float _timeTo90Percent);
    void SetTimeTo90PercentRotation(FSmootherRotation& _smoother, float _timeTo90Percent);
    void SetTimeTo90PercentFloat(FSmootherFloat& _smoother, float _timeTo90Percent);
    void ResetSmootherVectorByComponent(FSmootherVectorByComponent& _smoother, FVector _value);
    void ResetSmootherVector(FSmootherVector& _smoother, FVector _value);
    void ResetSmootherTransform(FSmootherTransform& _smoother, FTransform _value);
    void ResetSmootherRotation(FSmootherRotation& _smoother, FRotator _value);
    void ResetSmootherFloat(FSmootherFloat& _smoother, float _value);
    void ResetNoiseSmootherVector2D(FNoiseSmootherVector2D& _noiseSmoother, FVector2D _value);
    void ResetNoiseSmootherVector(FNoiseSmootherVector& _noiseSmoother, FVector _value);
    void ResetNoiseSmootherRotation(FNoiseSmootherRotation& _noiseSmoother, FRotator _value);
    void ResetNoiseSmootherFloat(FNoiseSmootherFloat& _noiseSmoother, float _value);
    FRotator GetRotator(const FSmootherRotation& _smoother);
    FVector GetNoiseSmootherVectorValue(FNoiseSmootherVector& _noiseSmoother);
    FVector2D GetNoiseSmootherVector2DValue(FNoiseSmootherVector2D& _noiseSmoother);
    FRotator GetNoiseSmootherRotationValue(FNoiseSmootherRotation& _noiseSmoother);
    float GetNoiseSmootherFloatValue(FNoiseSmootherFloat& _noiseSmoother);
};

class USplineTool : public UBlueprintFunctionLibrary
{

    FVector FindLocationAheadOnSpline(const class USplineComponent* _spline, const FVector& _location, const float _distance, TEnumAsByte<ESplineCoordinateSpace::Type> _splineCoordinateSpace);
    float FindDistanceFromLocationOnSplineToEndOfSpline(const class USplineComponent* _spline, const FVector& _location);
    float FindDistanceAlongSplineClosestToWorldLocation(const class USplineComponent* _spline, const FVector& _worldLocation, int32 _distanceSolverIterations);
    void DrawSplineComponent(const class USplineComponent* _spline, float _thickness, FColor _color, bool _persistentLines, float _lifeTime);
};

class UStringTools : public UBlueprintFunctionLibrary
{

    FString ReplaceStringTableTokens(FString _string, FString _defaultNamespace);
    FString GetSubstringWithoutMarkup(FString _string, int32 _startIndex, int32 _length);
    FString GetSubstringWhilePreservingMarkup(FString _string, int32 _startIndex, int32 _length);
};

struct FInterpolatorTickFunction : public FTickFunction
{
};

struct FNoiseSmootherDouble
{
    float SamplingTime;
    int32 SampleCount;

};

#endif
