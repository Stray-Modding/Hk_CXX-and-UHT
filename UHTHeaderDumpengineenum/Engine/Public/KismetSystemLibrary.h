#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EObjectTypeQuery.h"
#include "BlueprintFunctionLibrary.h"
#include "DebugFloatHistory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "TimerDynamicDelegateDelegate.h"
#include "LatentActionInfo.h"
#include "ETraceTypeQuery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetType -FallbackName=PrimaryAssetType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "HitResult.h"
#include "EDrawDebugTrace.h"
#include "GenericStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UserActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "CollisionProfileName.h"
#include "EQuitPreference.h"
#include "EMoveComponentAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "TimerHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
#include "KismetSystemLibrary.generated.h"

class UObject;
class AActor;
class UPrimitiveComponent;
class APlayerController;
class USceneComponent;
class UTexture2D;
class ACameraActor;
class UInterface;
class IInterface;

UCLASS(BlueprintType)
class ENGINE_API UKismetSystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetLoaded, UObject*, Loaded);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAssetClassLoaded, UClass*, Loaded);
    
    UKismetSystemLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnregisterForRemoteNotifications();
    
    UFUNCTION(BlueprintCallable)
    static void UnloadPrimaryAssetList(const TArray<FPrimaryAssetId>& PrimaryAssetIdList);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadPrimaryAsset(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintCallable)
    static void TransactObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void StackTrace();
    
    UFUNCTION(BlueprintCallable)
    static bool SphereTraceSingleForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SphereTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SphereTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SphereTraceMultiForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SphereTraceMultiByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SphereTraceMulti(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SphereOverlapComponents(const UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool SphereOverlapActors(const UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void SnapshotObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void ShowPlatformSpecificLeaderboardScreen(const FString& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static void ShowPlatformSpecificAchievementsScreen(const APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void ShowInterstitialAd();
    
    UFUNCTION(BlueprintCallable)
    static void ShowAdBanner(int32 AdIdIndex, bool bShowOnBottomOfScreen);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowTitle(const FText& Title);
    
    UFUNCTION(BlueprintCallable)
    static void SetVolumeButtonsHandledBySystem(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorPropertyByName(UObject* Object, FName PropertyName, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserActivity(const FUserActivity& UserActivity);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformPropertyByName(UObject* Object, FName PropertyName, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextPropertyByName(UObject* Object, FName PropertyName, const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSuppressViewportTransitionMessage(const UObject* WorldContextObject, bool bState);
    
    UFUNCTION(BlueprintCallable)
    static void SetStructurePropertyByName(UObject* Object, FName PropertyName, const FGenericStruct& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringPropertyByName(UObject* Object, FName PropertyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftObjectPropertyByName(UObject* Object, FName PropertyName, const TSoftObjectPtr<UObject>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSoftClassPropertyByName(UObject* Object, FName PropertyName, const TSoftClassPtr<UObject>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorPropertyByName(UObject* Object, FName PropertyName, const FRotator& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNamePropertyByName(UObject* Object, FName PropertyName, const FName& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearColorPropertyByName(UObject* Object, FName PropertyName, const FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetIntPropertyByName(UObject* Object, FName PropertyName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInterfacePropertyByName(UObject* Object, FName PropertyName, const FScriptInterface& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInt64PropertyByName(UObject* Object, FName PropertyName, int64 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGamepadsBlockDeviceFeedback(bool bBlock);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFieldPathPropertyByName(UObject* Object, FName PropertyName, const TFieldPath<FField>& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorPropertyByName(UObject* Object, FName PropertyName, const FColor& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionProfileNameProperty(UObject* Object, FName PropertyName, const FCollisionProfileName& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetClassPropertyByName(UObject* Object, FName PropertyName, UClass* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBytePropertyByName(UObject* Object, FName PropertyName, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void RetriggerableDelay(const UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ResetGamepadAssignmentToController(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetGamepadAssignments();
    
    UFUNCTION(BlueprintCallable)
    static void RegisterForRemoteNotifications();
    
    UFUNCTION(BlueprintCallable)
    static void QuitGame(const UObject* WorldContextObject, APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference::Type> QuitPreference, bool bIgnorePlatformRestrictions);
    
    UFUNCTION(BlueprintCallable)
    static void PrintWarning(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static void PrintText(const UObject* WorldContextObject, const FText InText, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void PrintString(const UObject* WorldContextObject, const FString& inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintPure)
    static bool ParseParamValue(const FString& inString, const FString& InParam, FString& OutValue);
    
    UFUNCTION(BlueprintPure)
    static bool ParseParam(const FString& inString, const FString& InParam);
    
    UFUNCTION(BlueprintCallable)
    static void ParseCommandLine(const FString& InCmdLine, TArray<FString>& OutTokens, TArray<FString>& OutSwitches, TMap<FString, FString>& OutParams);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
    
    UFUNCTION(BlueprintPure)
    static FString NormalizeFilename(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable)
    static void MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction::Type> MoveAction, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    static FSoftObjectPath MakeSoftObjectPath(const FString& PathString);
    
    UFUNCTION(BlueprintPure)
    static FSoftClassPath MakeSoftClassPath(const FString& PathString);
    
    UFUNCTION(BlueprintPure)
    static FText MakeLiteralText(FText Value);
    
    UFUNCTION(BlueprintPure)
    static FString MakeLiteralString(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static FName MakeLiteralName(FName Value);
    
    UFUNCTION(BlueprintPure)
    static int32 MakeLiteralInt(int32 Value);
    
    UFUNCTION(BlueprintPure)
    static float MakeLiteralFloat(float Value);
    
    UFUNCTION(BlueprintPure)
    static uint8 MakeLiteralByte(uint8 Value);
    
    UFUNCTION(BlueprintPure)
    static bool MakeLiteralBool(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void LoadInterstitialAd(int32 AdIdIndex);
    
    UFUNCTION(BlueprintCallable)
    static UClass* LoadClassAsset_Blocking(TSoftClassPtr<UObject> AssetClass);
    
    UFUNCTION(BlueprintCallable)
    static void LoadAssetClass(const UObject* WorldContextObject, TSoftClassPtr<UObject> AssetClass, UKismetSystemLibrary::FOnAssetClassLoaded OnLoaded, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadAsset_Blocking(TSoftObjectPtr<UObject> Asset);
    
    UFUNCTION(BlueprintCallable)
    static void LoadAsset(const UObject* WorldContextObject, TSoftObjectPtr<UObject> Asset, UKismetSystemLibrary::FOnAssetLoaded OnLoaded, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceSingleForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceMultiForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceMultiByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool LineTraceMulti(const UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static void LaunchURL(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void K2_UnPauseTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void K2_UnPauseTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void K2_UnPauseTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintPure)
    static bool K2_TimerExistsHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintPure)
    static bool K2_TimerExistsDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintPure)
    static bool K2_TimerExists(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle K2_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle K2_SetTimer(UObject* Object, const FString& FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    
    UFUNCTION(BlueprintCallable)
    static void K2_PauseTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void K2_PauseTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void K2_PauseTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintPure)
    static bool K2_IsValidTimerHandle(FTimerHandle Handle);
    
    UFUNCTION(BlueprintPure)
    static bool K2_IsTimerPausedHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintPure)
    static bool K2_IsTimerPausedDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintPure)
    static bool K2_IsTimerPaused(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintPure)
    static bool K2_IsTimerActiveHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintPure)
    static bool K2_IsTimerActiveDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintPure)
    static bool K2_IsTimerActive(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle K2_InvalidateTimerHandle(UPARAM(Ref) FTimerHandle& Handle);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetTimerRemainingTimeHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetTimerRemainingTimeDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetTimerRemainingTime(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetTimerElapsedTimeHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetTimerElapsedTimeDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintPure)
    static float K2_GetTimerElapsedTime(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearAndInvalidateTimerHandle(const UObject* WorldContextObject, UPARAM(Ref) FTimerHandle& Handle);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidSoftObjectReference(const TSoftObjectPtr<UObject>& SoftObjectReference);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidSoftClassReference(const TSoftClassPtr<UObject>& SoftClassReference);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidPrimaryAssetType(FPrimaryAssetType PrimaryAssetType);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintPure)
    static bool IsValidClass(UClass* Class);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static bool IsUnattended();
    
    UFUNCTION(BlueprintPure)
    static bool IsStandAlone(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsSplitScreen(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsScreensaverEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsPackagedForDistribution();
    
    UFUNCTION(BlueprintPure)
    static bool IsLoggedIn(const APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInterstitialAdRequested();
    
    UFUNCTION(BlueprintCallable)
    static bool IsInterstitialAdAvailable();
    
    UFUNCTION(BlueprintPure)
    static bool IsDedicatedServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsControllerAssignedToGamepad(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    static void HideAdBanner();
    
    UFUNCTION(BlueprintPure)
    static bool GetVolumeButtonsHandledBySystem();
    
    UFUNCTION(BlueprintPure)
    static FString GetUniqueDeviceId();
    
    UFUNCTION(BlueprintPure)
    static FString GetSystemPath(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSupportedFullscreenResolutions(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintPure)
    static TSoftObjectPtr<UObject> GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintPure)
    static TSoftClassPtr<UObject> GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintPure)
    static int32 GetRenderingMaterialQualityLevel();
    
    UFUNCTION(BlueprintPure)
    static int32 GetRenderingDetailMode();
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectSavedDirectory();
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectDirectory();
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectContentDirectory();
    
    UFUNCTION(BlueprintCallable)
    static void GetPrimaryAssetsWithBundleState(const TArray<FName>& RequiredBundles, const TArray<FName>& ExcludedBundles, const TArray<FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);
    
    UFUNCTION(BlueprintCallable)
    static void GetPrimaryAssetIdList(FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);
    
    UFUNCTION(BlueprintPure)
    static FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(TSoftObjectPtr<UObject> SoftObjectReference);
    
    UFUNCTION(BlueprintPure)
    static FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(TSoftClassPtr<UObject> SoftClassReference);
    
    UFUNCTION(BlueprintPure)
    static FPrimaryAssetId GetPrimaryAssetIdFromObject(UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static FPrimaryAssetId GetPrimaryAssetIdFromClass(UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetPreferredLanguages();
    
    UFUNCTION(BlueprintPure)
    static FString GetPlatformUserName();
    
    UFUNCTION(BlueprintPure)
    static FString GetPlatformUserDir();
    
    UFUNCTION(BlueprintPure)
    static FString GetPathName(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetOuterObject(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static FString GetObjectName(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetObjectFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinYResolutionForUI();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinYResolutionFor3DView();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLocalCurrencySymbol();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLocalCurrencyCode();
    
    UFUNCTION(BlueprintPure)
    static float GetGameTimeInSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetGamepadControllerName(int32 ControllerId);
    
    UFUNCTION(BlueprintPure)
    static UTexture2D* GetGamepadButtonGlyph(const FString& ButtonKey, int32 ControllerIndex);
    
    UFUNCTION(BlueprintPure)
    static FString GetGameName();
    
    UFUNCTION(BlueprintPure)
    static FString GetGameBundleId();
    
    UFUNCTION(BlueprintPure)
    static int64 GetFrameCount();
    
    UFUNCTION(BlueprintPure)
    static FString GetEngineVersion();
    
    UFUNCTION(BlueprintPure)
    static FString GetDisplayName(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static FString GetDeviceId();
    
    UFUNCTION(BlueprintPure)
    static FString GetDefaultLocale();
    
    UFUNCTION(BlueprintPure)
    static FString GetDefaultLanguage();
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentBundleState(FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<FName>& OutBundles);
    
    UFUNCTION(BlueprintCallable)
    static bool GetConvenientWindowedResolutions(TArray<FIntPoint>& Resolutions);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetConsoleVariableIntValue(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable)
    static float GetConsoleVariableFloatValue(const FString& VariableName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetConsoleVariableBoolValue(const FString& VariableName);
    
    UFUNCTION(BlueprintPure)
    static void GetComponentBounds(const USceneComponent* Component, FVector& Origin, FVector& BoxExtent, float& SphereRadius);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCommandLine();
    
    UFUNCTION(BlueprintPure)
    static UClass* GetClassFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintPure)
    static FString GetClassDisplayName(UClass* Class);
    
    UFUNCTION(BlueprintPure)
    static int32 GetAdIDCount();
    
    UFUNCTION(BlueprintCallable)
    static void GetActorListFromComponentList(const TArray<UPrimitiveComponent*>& ComponentList, UClass* ActorClassFilter, TArray<AActor*>& OutActorList);
    
    UFUNCTION(BlueprintPure)
    static void GetActorBounds(const AActor* Actor, FVector& Origin, FVector& BoxExtent);
    
    UFUNCTION(BlueprintCallable)
    static void ForceCloseAdBanner();
    
    UFUNCTION(BlueprintCallable)
    static void FlushPersistentDebugLines(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FlushDebugStrings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteConsoleCommand(const UObject* WorldContextObject, const FString& Command, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
    
    UFUNCTION(BlueprintCallable)
    static int32 EndTransaction();
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugString(const UObject* WorldContextObject, const FVector TextLocation, const FString& Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugSphere(const UObject* WorldContextObject, const FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugPoint(const UObject* WorldContextObject, const FVector Position, float Size, FLinearColor PointColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugPlane(const UObject* WorldContextObject, const FPlane& PlaneCoordinates, const FVector Location, float Size, FLinearColor PlaneColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugLine(const UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugFrustum(const UObject* WorldContextObject, const FTransform& FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugFloatHistoryTransform(const UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, const FTransform& DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugFloatHistoryLocation(const UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCylinder(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCoordinateSystem(const UObject* WorldContextObject, const FVector AxisLoc, const FRotator AxisRot, float Scale, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugConeInDegrees(const UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCone(const UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCircle(const UObject* WorldContextObject, FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCapsule(const UObject* WorldContextObject, const FVector Center, float HalfHeight, float Radius, const FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCamera(const ACameraActor* CameraActor, FLinearColor CameraColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugBox(const UObject* WorldContextObject, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugArrow(const UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintPure)
    static bool DoesImplementInterface(const UObject* TestObject, TSubclassOf<UInterface> Interface);
    
    UFUNCTION(BlueprintCallable)
    static void Delay(const UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void CreateCopyForUndoBuffer(UObject* ObjectToModify);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertToRelativePath(const FString& Filename);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertToAbsolutePath(const FString& Filename);
    
    UFUNCTION(BlueprintPure)
    static TSoftObjectPtr<UObject> Conv_SoftObjPathToSoftObjRef(const FSoftObjectPath& SoftObjectPath);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_SoftObjectReferenceToString(const TSoftObjectPtr<UObject>& SoftObjectReference);
    
    UFUNCTION(BlueprintPure)
    static UObject* Conv_SoftObjectReferenceToObject(const TSoftObjectPtr<UObject>& SoftObject);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_SoftClassReferenceToString(const TSoftClassPtr<UObject>& SoftClassReference);
    
    UFUNCTION(BlueprintPure)
    static UClass* Conv_SoftClassReferenceToClass(const TSoftClassPtr<UObject>& SoftClass);
    
    UFUNCTION(BlueprintPure)
    static TSoftClassPtr<UObject> Conv_SoftClassPathToSoftClassRef(const FSoftClassPath& SoftClassPath);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_PrimaryAssetTypeToString(FPrimaryAssetType PrimaryAssetType);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_PrimaryAssetIdToString(FPrimaryAssetId PrimaryAssetId);
    
    UFUNCTION(BlueprintPure)
    static TSoftObjectPtr<UObject> Conv_ObjectToSoftObjectReference(UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static UObject* Conv_InterfaceToObject(const FScriptInterface& Interface);
    
    UFUNCTION(BlueprintPure)
    static TSoftClassPtr<UObject> Conv_ClassToSoftClassReference(const UClass*& Class);
    
    UFUNCTION(BlueprintCallable)
    static void ControlScreensaver(bool bAllowScreenSaver);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentOverlapComponents(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentOverlapActors(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void CollectGarbage();
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleTraceSingleForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleTraceMultiForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleTraceMultiByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleTraceMulti(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleOverlapComponents(const UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool CapsuleOverlapActors(const UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static bool CanLaunchURL(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    static void CancelTransaction(const int32 Index);
    
    UFUNCTION(BlueprintPure)
    static void BreakSoftObjectPath(FSoftObjectPath InSoftObjectPath, FString& PathString);
    
    UFUNCTION(BlueprintPure)
    static void BreakSoftClassPath(FSoftClassPath InSoftClassPath, FString& PathString);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxTraceSingleForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxTraceMultiForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxTraceMultiByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxTraceMulti(const UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxOverlapComponents(const UObject* WorldContextObject, const FVector BoxPos, FVector Extent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxOverlapActors(const UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static int32 BeginTransaction(const FString& Context, FText Description, UObject* PrimaryObject);
    
    UFUNCTION(BlueprintCallable)
    static FDebugFloatHistory AddFloatHistorySample(float Value, const FDebugFloatHistory& FloatHistory);
    
};

