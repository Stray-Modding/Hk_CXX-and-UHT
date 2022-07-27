#include "KismetSystemLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;
class UPrimitiveComponent;
class APlayerController;
class USceneComponent;
class UTexture2D;
class ACameraActor;
class UInterface;
class IInterface;

void UKismetSystemLibrary::UnregisterForRemoteNotifications() {
}

void UKismetSystemLibrary::UnloadPrimaryAssetList(const TArray<FPrimaryAssetId>& PrimaryAssetIdList) {
}

void UKismetSystemLibrary::UnloadPrimaryAsset(FPrimaryAssetId PrimaryAssetId) {
}

void UKismetSystemLibrary::TransactObject(UObject* Object) {
}

void UKismetSystemLibrary::StackTrace() {
}

bool UKismetSystemLibrary::SphereTraceSingleForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::SphereTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::SphereTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::SphereTraceMultiForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::SphereTraceMultiByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::SphereTraceMulti(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::SphereOverlapComponents(const UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UKismetSystemLibrary::SphereOverlapActors(const UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}

void UKismetSystemLibrary::SnapshotObject(UObject* Object) {
}

void UKismetSystemLibrary::ShowPlatformSpecificLeaderboardScreen(const FString& CategoryName) {
}

void UKismetSystemLibrary::ShowPlatformSpecificAchievementsScreen(const APlayerController* SpecificPlayer) {
}

void UKismetSystemLibrary::ShowInterstitialAd() {
}

void UKismetSystemLibrary::ShowAdBanner(int32 AdIdIndex, bool bShowOnBottomOfScreen) {
}

void UKismetSystemLibrary::SetWindowTitle(const FText& Title) {
}

void UKismetSystemLibrary::SetVolumeButtonsHandledBySystem(bool bEnabled) {
}

void UKismetSystemLibrary::SetVectorPropertyByName(UObject* Object, FName PropertyName, const FVector& Value) {
}

void UKismetSystemLibrary::SetUserActivity(const FUserActivity& UserActivity) {
}

void UKismetSystemLibrary::SetTransformPropertyByName(UObject* Object, FName PropertyName, const FTransform& Value) {
}

void UKismetSystemLibrary::SetTextPropertyByName(UObject* Object, FName PropertyName, const FText& Value) {
}

void UKismetSystemLibrary::SetSuppressViewportTransitionMessage(const UObject* WorldContextObject, bool bState) {
}

void UKismetSystemLibrary::SetStructurePropertyByName(UObject* Object, FName PropertyName, const FGenericStruct& Value) {
}

void UKismetSystemLibrary::SetStringPropertyByName(UObject* Object, FName PropertyName, const FString& Value) {
}

void UKismetSystemLibrary::SetSoftObjectPropertyByName(UObject* Object, FName PropertyName, const TSoftObjectPtr<UObject>& Value) {
}

void UKismetSystemLibrary::SetSoftClassPropertyByName(UObject* Object, FName PropertyName, const TSoftClassPtr<UObject>& Value) {
}

void UKismetSystemLibrary::SetRotatorPropertyByName(UObject* Object, FName PropertyName, const FRotator& Value) {
}

void UKismetSystemLibrary::SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value) {
}

void UKismetSystemLibrary::SetNamePropertyByName(UObject* Object, FName PropertyName, const FName& Value) {
}

void UKismetSystemLibrary::SetLinearColorPropertyByName(UObject* Object, FName PropertyName, const FLinearColor& Value) {
}

void UKismetSystemLibrary::SetIntPropertyByName(UObject* Object, FName PropertyName, int32 Value) {
}

void UKismetSystemLibrary::SetInterfacePropertyByName(UObject* Object, FName PropertyName, const FScriptInterface& Value) {
}

void UKismetSystemLibrary::SetInt64PropertyByName(UObject* Object, FName PropertyName, int64 Value) {
}

void UKismetSystemLibrary::SetGamepadsBlockDeviceFeedback(bool bBlock) {
}

void UKismetSystemLibrary::SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value) {
}

void UKismetSystemLibrary::SetFieldPathPropertyByName(UObject* Object, FName PropertyName, const TFieldPath<FField>& Value) {
}

void UKismetSystemLibrary::SetColorPropertyByName(UObject* Object, FName PropertyName, const FColor& Value) {
}

void UKismetSystemLibrary::SetCollisionProfileNameProperty(UObject* Object, FName PropertyName, const FCollisionProfileName& Value) {
}

void UKismetSystemLibrary::SetClassPropertyByName(UObject* Object, FName PropertyName, UClass* Value) {
}

void UKismetSystemLibrary::SetBytePropertyByName(UObject* Object, FName PropertyName, uint8 Value) {
}

void UKismetSystemLibrary::SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value) {
}

void UKismetSystemLibrary::RetriggerableDelay(const UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
}

void UKismetSystemLibrary::ResetGamepadAssignmentToController(int32 ControllerId) {
}

void UKismetSystemLibrary::ResetGamepadAssignments() {
}

void UKismetSystemLibrary::RegisterForRemoteNotifications() {
}

void UKismetSystemLibrary::QuitGame(const UObject* WorldContextObject, APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference::Type> QuitPreference, bool bIgnorePlatformRestrictions) {
}

void UKismetSystemLibrary::PrintWarning(const FString& inString) {
}

void UKismetSystemLibrary::PrintText(const UObject* WorldContextObject, const FText InText, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration) {
}

void UKismetSystemLibrary::PrintString(const UObject* WorldContextObject, const FString& inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration) {
}

bool UKismetSystemLibrary::ParseParamValue(const FString& inString, const FString& InParam, FString& OutValue) {
    return false;
}

bool UKismetSystemLibrary::ParseParam(const FString& inString, const FString& InParam) {
    return false;
}

void UKismetSystemLibrary::ParseCommandLine(const FString& InCmdLine, TArray<FString>& OutTokens, TArray<FString>& OutSwitches, TMap<FString, FString>& OutParams) {
}

bool UKismetSystemLibrary::NotEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B) {
    return false;
}

bool UKismetSystemLibrary::NotEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B) {
    return false;
}

bool UKismetSystemLibrary::NotEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B) {
    return false;
}

bool UKismetSystemLibrary::NotEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B) {
    return false;
}

FString UKismetSystemLibrary::NormalizeFilename(const FString& InFilename) {
    return TEXT("");
}

void UKismetSystemLibrary::MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction::Type> MoveAction, FLatentActionInfo LatentInfo) {
}

FSoftObjectPath UKismetSystemLibrary::MakeSoftObjectPath(const FString& PathString) {
    return FSoftObjectPath{};
}

FSoftClassPath UKismetSystemLibrary::MakeSoftClassPath(const FString& PathString) {
    return FSoftClassPath{};
}

FText UKismetSystemLibrary::MakeLiteralText(FText Value) {
    return FText::GetEmpty();
}

FString UKismetSystemLibrary::MakeLiteralString(const FString& Value) {
    return TEXT("");
}

FName UKismetSystemLibrary::MakeLiteralName(FName Value) {
    return NAME_None;
}

int32 UKismetSystemLibrary::MakeLiteralInt(int32 Value) {
    return 0;
}

float UKismetSystemLibrary::MakeLiteralFloat(float Value) {
    return 0.0f;
}

uint8 UKismetSystemLibrary::MakeLiteralByte(uint8 Value) {
    return 0;
}

bool UKismetSystemLibrary::MakeLiteralBool(bool Value) {
    return false;
}

void UKismetSystemLibrary::LoadInterstitialAd(int32 AdIdIndex) {
}

UClass* UKismetSystemLibrary::LoadClassAsset_Blocking(TSoftClassPtr<UObject> AssetClass) {
    return NULL;
}

void UKismetSystemLibrary::LoadAssetClass(const UObject* WorldContextObject, TSoftClassPtr<UObject> AssetClass, UKismetSystemLibrary::FOnAssetClassLoaded OnLoaded, FLatentActionInfo LatentInfo) {
}

UObject* UKismetSystemLibrary::LoadAsset_Blocking(TSoftObjectPtr<UObject> Asset) {
    return NULL;
}

void UKismetSystemLibrary::LoadAsset(const UObject* WorldContextObject, TSoftObjectPtr<UObject> Asset, UKismetSystemLibrary::FOnAssetLoaded OnLoaded, FLatentActionInfo LatentInfo) {
}

bool UKismetSystemLibrary::LineTraceSingleForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::LineTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::LineTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::LineTraceMultiForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::LineTraceMultiByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::LineTraceMulti(const UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

void UKismetSystemLibrary::LaunchURL(const FString& URL) {
}

void UKismetSystemLibrary::K2_UnPauseTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle) {
}

void UKismetSystemLibrary::K2_UnPauseTimerDelegate(FTimerDynamicDelegate Delegate) {
}

void UKismetSystemLibrary::K2_UnPauseTimer(UObject* Object, const FString& FunctionName) {
}

bool UKismetSystemLibrary::K2_TimerExistsHandle(const UObject* WorldContextObject, FTimerHandle Handle) {
    return false;
}

bool UKismetSystemLibrary::K2_TimerExistsDelegate(FTimerDynamicDelegate Delegate) {
    return false;
}

bool UKismetSystemLibrary::K2_TimerExists(UObject* Object, const FString& FunctionName) {
    return false;
}

FTimerHandle UKismetSystemLibrary::K2_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance) {
    return FTimerHandle{};
}

FTimerHandle UKismetSystemLibrary::K2_SetTimer(UObject* Object, const FString& FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance) {
    return FTimerHandle{};
}

void UKismetSystemLibrary::K2_PauseTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle) {
}

void UKismetSystemLibrary::K2_PauseTimerDelegate(FTimerDynamicDelegate Delegate) {
}

void UKismetSystemLibrary::K2_PauseTimer(UObject* Object, const FString& FunctionName) {
}

bool UKismetSystemLibrary::K2_IsValidTimerHandle(FTimerHandle Handle) {
    return false;
}

bool UKismetSystemLibrary::K2_IsTimerPausedHandle(const UObject* WorldContextObject, FTimerHandle Handle) {
    return false;
}

bool UKismetSystemLibrary::K2_IsTimerPausedDelegate(FTimerDynamicDelegate Delegate) {
    return false;
}

bool UKismetSystemLibrary::K2_IsTimerPaused(UObject* Object, const FString& FunctionName) {
    return false;
}

bool UKismetSystemLibrary::K2_IsTimerActiveHandle(const UObject* WorldContextObject, FTimerHandle Handle) {
    return false;
}

bool UKismetSystemLibrary::K2_IsTimerActiveDelegate(FTimerDynamicDelegate Delegate) {
    return false;
}

bool UKismetSystemLibrary::K2_IsTimerActive(UObject* Object, const FString& FunctionName) {
    return false;
}

FTimerHandle UKismetSystemLibrary::K2_InvalidateTimerHandle(FTimerHandle& Handle) {
    return FTimerHandle{};
}

float UKismetSystemLibrary::K2_GetTimerRemainingTimeHandle(const UObject* WorldContextObject, FTimerHandle Handle) {
    return 0.0f;
}

float UKismetSystemLibrary::K2_GetTimerRemainingTimeDelegate(FTimerDynamicDelegate Delegate) {
    return 0.0f;
}

float UKismetSystemLibrary::K2_GetTimerRemainingTime(UObject* Object, const FString& FunctionName) {
    return 0.0f;
}

float UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(const UObject* WorldContextObject, FTimerHandle Handle) {
    return 0.0f;
}

float UKismetSystemLibrary::K2_GetTimerElapsedTimeDelegate(FTimerDynamicDelegate Delegate) {
    return 0.0f;
}

float UKismetSystemLibrary::K2_GetTimerElapsedTime(UObject* Object, const FString& FunctionName) {
    return 0.0f;
}

void UKismetSystemLibrary::K2_ClearTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle) {
}

void UKismetSystemLibrary::K2_ClearTimerDelegate(FTimerDynamicDelegate Delegate) {
}

void UKismetSystemLibrary::K2_ClearTimer(UObject* Object, const FString& FunctionName) {
}

void UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(const UObject* WorldContextObject, FTimerHandle& Handle) {
}

bool UKismetSystemLibrary::IsValidSoftObjectReference(const TSoftObjectPtr<UObject>& SoftObjectReference) {
    return false;
}

bool UKismetSystemLibrary::IsValidSoftClassReference(const TSoftClassPtr<UObject>& SoftClassReference) {
    return false;
}

bool UKismetSystemLibrary::IsValidPrimaryAssetType(FPrimaryAssetType PrimaryAssetType) {
    return false;
}

bool UKismetSystemLibrary::IsValidPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {
    return false;
}

bool UKismetSystemLibrary::IsValidClass(UClass* Class) {
    return false;
}

bool UKismetSystemLibrary::IsValid(const UObject* Object) {
    return false;
}

bool UKismetSystemLibrary::IsUnattended() {
    return false;
}

bool UKismetSystemLibrary::IsStandAlone(const UObject* WorldContextObject) {
    return false;
}

bool UKismetSystemLibrary::IsSplitScreen(const UObject* WorldContextObject) {
    return false;
}

bool UKismetSystemLibrary::IsServer(const UObject* WorldContextObject) {
    return false;
}

bool UKismetSystemLibrary::IsScreensaverEnabled() {
    return false;
}

bool UKismetSystemLibrary::IsPackagedForDistribution() {
    return false;
}

bool UKismetSystemLibrary::IsLoggedIn(const APlayerController* SpecificPlayer) {
    return false;
}

bool UKismetSystemLibrary::IsInterstitialAdRequested() {
    return false;
}

bool UKismetSystemLibrary::IsInterstitialAdAvailable() {
    return false;
}

bool UKismetSystemLibrary::IsDedicatedServer(const UObject* WorldContextObject) {
    return false;
}

bool UKismetSystemLibrary::IsControllerAssignedToGamepad(int32 ControllerId) {
    return false;
}

void UKismetSystemLibrary::HideAdBanner() {
}

bool UKismetSystemLibrary::GetVolumeButtonsHandledBySystem() {
    return false;
}

FString UKismetSystemLibrary::GetUniqueDeviceId() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetSystemPath(const UObject* Object) {
    return TEXT("");
}

bool UKismetSystemLibrary::GetSupportedFullscreenResolutions(TArray<FIntPoint>& Resolutions) {
    return false;
}

TSoftObjectPtr<UObject> UKismetSystemLibrary::GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {
    return NULL;
}

TSoftClassPtr<UObject> UKismetSystemLibrary::GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {
    return NULL;
}

int32 UKismetSystemLibrary::GetRenderingMaterialQualityLevel() {
    return 0;
}

int32 UKismetSystemLibrary::GetRenderingDetailMode() {
    return 0;
}

FString UKismetSystemLibrary::GetProjectSavedDirectory() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetProjectDirectory() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetProjectContentDirectory() {
    return TEXT("");
}

void UKismetSystemLibrary::GetPrimaryAssetsWithBundleState(const TArray<FName>& RequiredBundles, const TArray<FName>& ExcludedBundles, const TArray<FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList) {
}

void UKismetSystemLibrary::GetPrimaryAssetIdList(FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList) {
}

FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromSoftObjectReference(TSoftObjectPtr<UObject> SoftObjectReference) {
    return FPrimaryAssetId{};
}

FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromSoftClassReference(TSoftClassPtr<UObject> SoftClassReference) {
    return FPrimaryAssetId{};
}

FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromObject(UObject* Object) {
    return FPrimaryAssetId{};
}

FPrimaryAssetId UKismetSystemLibrary::GetPrimaryAssetIdFromClass(UClass* Class) {
    return FPrimaryAssetId{};
}

TArray<FString> UKismetSystemLibrary::GetPreferredLanguages() {
    return TArray<FString>();
}

FString UKismetSystemLibrary::GetPlatformUserName() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetPlatformUserDir() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetPathName(const UObject* Object) {
    return TEXT("");
}

UObject* UKismetSystemLibrary::GetOuterObject(const UObject* Object) {
    return NULL;
}

FString UKismetSystemLibrary::GetObjectName(const UObject* Object) {
    return TEXT("");
}

UObject* UKismetSystemLibrary::GetObjectFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {
    return NULL;
}

int32 UKismetSystemLibrary::GetMinYResolutionForUI() {
    return 0;
}

int32 UKismetSystemLibrary::GetMinYResolutionFor3DView() {
    return 0;
}

FString UKismetSystemLibrary::GetLocalCurrencySymbol() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetLocalCurrencyCode() {
    return TEXT("");
}

float UKismetSystemLibrary::GetGameTimeInSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

FString UKismetSystemLibrary::GetGamepadControllerName(int32 ControllerId) {
    return TEXT("");
}

UTexture2D* UKismetSystemLibrary::GetGamepadButtonGlyph(const FString& ButtonKey, int32 ControllerIndex) {
    return NULL;
}

FString UKismetSystemLibrary::GetGameName() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetGameBundleId() {
    return TEXT("");
}

int64 UKismetSystemLibrary::GetFrameCount() {
    return 0;
}

FString UKismetSystemLibrary::GetEngineVersion() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetDisplayName(const UObject* Object) {
    return TEXT("");
}

FString UKismetSystemLibrary::GetDeviceId() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetDefaultLocale() {
    return TEXT("");
}

FString UKismetSystemLibrary::GetDefaultLanguage() {
    return TEXT("");
}

bool UKismetSystemLibrary::GetCurrentBundleState(FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<FName>& OutBundles) {
    return false;
}

bool UKismetSystemLibrary::GetConvenientWindowedResolutions(TArray<FIntPoint>& Resolutions) {
    return false;
}

int32 UKismetSystemLibrary::GetConsoleVariableIntValue(const FString& VariableName) {
    return 0;
}

float UKismetSystemLibrary::GetConsoleVariableFloatValue(const FString& VariableName) {
    return 0.0f;
}

bool UKismetSystemLibrary::GetConsoleVariableBoolValue(const FString& VariableName) {
    return false;
}

void UKismetSystemLibrary::GetComponentBounds(const USceneComponent* Component, FVector& Origin, FVector& BoxExtent, float& SphereRadius) {
}

FString UKismetSystemLibrary::GetCommandLine() {
    return TEXT("");
}

UClass* UKismetSystemLibrary::GetClassFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId) {
    return NULL;
}

FString UKismetSystemLibrary::GetClassDisplayName(UClass* Class) {
    return TEXT("");
}

int32 UKismetSystemLibrary::GetAdIDCount() {
    return 0;
}

void UKismetSystemLibrary::GetActorListFromComponentList(const TArray<UPrimitiveComponent*>& ComponentList, UClass* ActorClassFilter, TArray<AActor*>& OutActorList) {
}

void UKismetSystemLibrary::GetActorBounds(const AActor* Actor, FVector& Origin, FVector& BoxExtent) {
}

void UKismetSystemLibrary::ForceCloseAdBanner() {
}

void UKismetSystemLibrary::FlushPersistentDebugLines(const UObject* WorldContextObject) {
}

void UKismetSystemLibrary::FlushDebugStrings(const UObject* WorldContextObject) {
}

void UKismetSystemLibrary::ExecuteConsoleCommand(const UObject* WorldContextObject, const FString& Command, APlayerController* SpecificPlayer) {
}

bool UKismetSystemLibrary::EqualEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B) {
    return false;
}

bool UKismetSystemLibrary::EqualEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B) {
    return false;
}

bool UKismetSystemLibrary::EqualEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B) {
    return false;
}

bool UKismetSystemLibrary::EqualEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B) {
    return false;
}

int32 UKismetSystemLibrary::EndTransaction() {
    return 0;
}

void UKismetSystemLibrary::DrawDebugString(const UObject* WorldContextObject, const FVector TextLocation, const FString& Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration) {
}

void UKismetSystemLibrary::DrawDebugSphere(const UObject* WorldContextObject, const FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugPoint(const UObject* WorldContextObject, const FVector Position, float Size, FLinearColor PointColor, float Duration) {
}

void UKismetSystemLibrary::DrawDebugPlane(const UObject* WorldContextObject, const FPlane& PlaneCoordinates, const FVector Location, float Size, FLinearColor PlaneColor, float Duration) {
}

void UKismetSystemLibrary::DrawDebugLine(const UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugFrustum(const UObject* WorldContextObject, const FTransform& FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugFloatHistoryTransform(const UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, const FTransform& DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration) {
}

void UKismetSystemLibrary::DrawDebugFloatHistoryLocation(const UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float Duration) {
}

void UKismetSystemLibrary::DrawDebugCylinder(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugCoordinateSystem(const UObject* WorldContextObject, const FVector AxisLoc, const FRotator AxisRot, float Scale, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugConeInDegrees(const UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugCone(const UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugCircle(const UObject* WorldContextObject, FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis) {
}

void UKismetSystemLibrary::DrawDebugCapsule(const UObject* WorldContextObject, const FVector Center, float HalfHeight, float Radius, const FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugCamera(const ACameraActor* CameraActor, FLinearColor CameraColor, float Duration) {
}

void UKismetSystemLibrary::DrawDebugBox(const UObject* WorldContextObject, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation, float Duration, float Thickness) {
}

void UKismetSystemLibrary::DrawDebugArrow(const UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness) {
}

bool UKismetSystemLibrary::DoesImplementInterface(const UObject* TestObject, TSubclassOf<UInterface> Interface) {
    return false;
}

void UKismetSystemLibrary::Delay(const UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
}

void UKismetSystemLibrary::CreateCopyForUndoBuffer(UObject* ObjectToModify) {
}

FString UKismetSystemLibrary::ConvertToRelativePath(const FString& Filename) {
    return TEXT("");
}

FString UKismetSystemLibrary::ConvertToAbsolutePath(const FString& Filename) {
    return TEXT("");
}

TSoftObjectPtr<UObject> UKismetSystemLibrary::Conv_SoftObjPathToSoftObjRef(const FSoftObjectPath& SoftObjectPath) {
    return NULL;
}

FString UKismetSystemLibrary::Conv_SoftObjectReferenceToString(const TSoftObjectPtr<UObject>& SoftObjectReference) {
    return TEXT("");
}

UObject* UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(const TSoftObjectPtr<UObject>& SoftObject) {
    return NULL;
}

FString UKismetSystemLibrary::Conv_SoftClassReferenceToString(const TSoftClassPtr<UObject>& SoftClassReference) {
    return TEXT("");
}

UClass* UKismetSystemLibrary::Conv_SoftClassReferenceToClass(const TSoftClassPtr<UObject>& SoftClass) {
    return NULL;
}

TSoftClassPtr<UObject> UKismetSystemLibrary::Conv_SoftClassPathToSoftClassRef(const FSoftClassPath& SoftClassPath) {
    return NULL;
}

FString UKismetSystemLibrary::Conv_PrimaryAssetTypeToString(FPrimaryAssetType PrimaryAssetType) {
    return TEXT("");
}

FString UKismetSystemLibrary::Conv_PrimaryAssetIdToString(FPrimaryAssetId PrimaryAssetId) {
    return TEXT("");
}

TSoftObjectPtr<UObject> UKismetSystemLibrary::Conv_ObjectToSoftObjectReference(UObject* Object) {
    return NULL;
}

UObject* UKismetSystemLibrary::Conv_InterfaceToObject(const FScriptInterface& Interface) {
    return NULL;
}

TSoftClassPtr<UObject> UKismetSystemLibrary::Conv_ClassToSoftClassReference(const UClass*& Class) {
    return NULL;
}

void UKismetSystemLibrary::ControlScreensaver(bool bAllowScreenSaver) {
}

bool UKismetSystemLibrary::ComponentOverlapComponents(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UKismetSystemLibrary::ComponentOverlapActors(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}

void UKismetSystemLibrary::CollectGarbage() {
}

bool UKismetSystemLibrary::CapsuleTraceSingleForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::CapsuleTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::CapsuleTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::CapsuleTraceMultiForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::CapsuleTraceMultiByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::CapsuleTraceMulti(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::CapsuleOverlapComponents(const UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UKismetSystemLibrary::CapsuleOverlapActors(const UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}

bool UKismetSystemLibrary::CanLaunchURL(const FString& URL) {
    return false;
}

void UKismetSystemLibrary::CancelTransaction(const int32 Index) {
}

void UKismetSystemLibrary::BreakSoftObjectPath(FSoftObjectPath InSoftObjectPath, FString& PathString) {
}

void UKismetSystemLibrary::BreakSoftClassPath(FSoftClassPath InSoftClassPath, FString& PathString) {
}

bool UKismetSystemLibrary::BoxTraceSingleForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::BoxTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::BoxTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::BoxTraceMultiForObjects(const UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::BoxTraceMultiByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::BoxTraceMulti(const UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}

bool UKismetSystemLibrary::BoxOverlapComponents(const UObject* WorldContextObject, const FVector BoxPos, FVector Extent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UKismetSystemLibrary::BoxOverlapActors(const UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors) {
    return false;
}

int32 UKismetSystemLibrary::BeginTransaction(const FString& Context, FText Description, UObject* PrimaryObject) {
    return 0;
}

FDebugFloatHistory UKismetSystemLibrary::AddFloatHistorySample(float Value, const FDebugFloatHistory& FloatHistory) {
    return FDebugFloatHistory{};
}

UKismetSystemLibrary::UKismetSystemLibrary() {
}

