#ifndef UE4SS_SDK_VictoryBPLibrary_HPP
#define UE4SS_SDK_VictoryBPLibrary_HPP

#include "VictoryBPLibrary_enums.hpp"

class UTKMathFunctionLibrary : public UBlueprintFunctionLibrary
{

    FVector VectorRadiansToDegrees(FVector RadVector);
    FVector VectorDegreesToRadians(FVector DegVector);
    bool SphereBoxIntersection(FVector SphereOrigin, float SphereRadius, FVector BoxOrigin, FVector BoxExtent);
    float SignedDistancePlanePoint(FVector PlaneNormal, FVector planePoint, FVector Point);
    FVector SetVectorLength(FVector A, float Size);
    void SetCenterOfMassOffset(class UPrimitiveComponent* Target, FVector Offset, FName BoneName);
    int32 RoundToUpperMultiple(int32 A, int32 Multiple, bool skipSelf);
    int32 RoundToNearestMultiple(int32 A, int32 Multiple);
    int32 RoundToLowerMultiple(int32 A, int32 Multiple, bool skipSelf);
    FVector ProjectPointOnLine(FVector LineOrigin, FVector LineDirection, FVector Point);
    int32 PointOnWhichSideOfLineSegment(FVector LinePoint1, FVector LinePoint2, FVector Point);
    FVector2D NegateVector2D(FVector2D A);
    int32 NegateInt(int32 A);
    float NegateFloat(float A);
    bool LineToLineIntersection(FVector& IntersectionPoint, FVector LinePoint1, FVector LineDir1, FVector LinePoint2, FVector LineDir2);
    bool LineExtentBoxIntersection(FBox InBox, FVector Start, FVector End, FVector Extent, FVector& HitLocation, FVector& HitNormal, float& HitTime);
    bool IsPowerOfTwo(int32 X);
    bool IsPointInsideBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);
    bool IsMultipleOf(int32 A, int32 Multiple);
    bool IsLineInsideSphere(FVector LineStart, FVector LineDir, float LineLength, FVector SphereOrigin, float SphereRadius);
    bool IsEvenNumber(float A);
    FVector GridSnap(FVector A, float grid);
    FVector GetVelocityAtPoint(class UPrimitiveComponent* Target, FVector Point, FName BoneName, bool DrawDebugInfo);
    int32 GetConsoleVariableInt(FString VariableName);
    float GetConsoleVariableFloat(FString VariableName);
    float ConvertPhysicsLinearVelocity(FVector Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit);
    void ConvertAnchorToAnchor(class UObject* WorldContextObject, FAnchors CurrentAnchor, FMargin Offsets, FAnchors TargetAnchor, FMargin& ConvertedOffsets);
    bool ClosestPointsOnTwoLines(FVector& closestPointLine1, FVector& closestPointLine2, FVector LinePoint1, FVector lineVec1, FVector LinePoint2, FVector lineVec2);
    void ClosestPointsOfLineSegments(FVector Line1Start, FVector Line1End, FVector Line2Start, FVector Line2End, FVector& LinePoint1, FVector& LinePoint2);
    FVector ClosestPointOnSphereToLine(FVector SphereOrigin, float SphereRadius, FVector LineOrigin, FVector LineDir);
    FVector ClosestPointOnLineSeqment(FVector Point, FVector LineStart, FVector LineEnd);
    bool AreLineSegmentsCrossing(FVector pointA1, FVector pointA2, FVector pointB1, FVector pointB2);
}; // Size: 0x28

class URamaVictoryPluginCreateProcessPipe : public UObject
{

    bool ReadFromPipe(FString& PipeContents);
    bool PipeIsValid();
    bool CreatePipe();
    void ClosePipe();
}; // Size: 0x38

struct FVictoryInputAxis
{
    FString AxisName;                                                                 // 0x0000 (size: 0x10)
    FString KeyAsString;                                                              // 0x0010 (size: 0x10)
    FKey Key;                                                                         // 0x0020 (size: 0x18)
    float Scale;                                                                      // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FVictoryInput
{
    FString ActionName;                                                               // 0x0000 (size: 0x10)
    FKey Key;                                                                         // 0x0010 (size: 0x18)
    FString KeyAsString;                                                              // 0x0028 (size: 0x10)
    uint8 bShift;                                                                     // 0x0038 (size: 0x1)
    uint8 bCtrl;                                                                      // 0x0038 (size: 0x1)
    uint8 bAlt;                                                                       // 0x0038 (size: 0x1)
    uint8 bCmd;                                                                       // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FLevelStreamInstanceInfo
{
    FName PackageName;                                                                // 0x0000 (size: 0x8)
    FName PackageNameToLoad;                                                          // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0xC)
    FRotator Rotation;                                                                // 0x001C (size: 0xC)
    uint8 bShouldBeLoaded;                                                            // 0x0028 (size: 0x1)
    uint8 bShouldBeVisible;                                                           // 0x0028 (size: 0x1)
    uint8 bShouldBlockOnLoad;                                                         // 0x0028 (size: 0x1)
    int32 LODIndex;                                                                   // 0x002C (size: 0x4)

}; // Size: 0x30

class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool WorldType__InPIEWorld(class UObject* WorldContextObject);
    bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
    bool WorldType__InEditorWorld(class UObject* WorldContextObject);
    bool WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent);
    class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
    void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>& ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly);
    void Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>& CurrentlyRenderedActors, float MinRecentTime);
    void Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>& CurrentlyNotRenderedActors, float MinRecentTime);
    bool ViewportPositionDeproject(class UObject* WorldContextObject, const FVector2D& ViewportPosition, FVector& OutWorldOrigin, FVector& OutWorldDirection);
    bool Viewport__SetMousePosition(const class APlayerController* ThePC, const float& PosX, const float& PosY);
    bool Viewport__GetMousePosition(const class APlayerController* ThePC, float& PosX, float& PosY);
    bool Viewport__GetCenterOfViewport(const class APlayerController* ThePC, float& PosX, float& PosY);
    bool Viewport__EnableWorldRendering(const class APlayerController* ThePC, bool RenderTheWorld);
    bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
    void VictorySortIntArray(TArray<int32>& IntArray, TArray<int32>& IntArrayRef);
    void VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>& FloatArrayRef);
    void VictorySimulateMouseWheel(const float& Delta);
    void VictorySimulateKeyPress(class APlayerController* ThePC, FKey Key, TEnumAsByte<EInputEvent> EventType);
    void VictorySetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, FVector2D Value);
    void VictorySetCustomConfigVar_Vector(FString SectionName, FString VariableName, FVector Value);
    void VictorySetCustomConfigVar_String(FString SectionName, FString VariableName, FString Value);
    void VictorySetCustomConfigVar_Rotator(FString SectionName, FString VariableName, FRotator Value);
    void VictorySetCustomConfigVar_Int(FString SectionName, FString VariableName, int32 Value);
    void VictorySetCustomConfigVar_Float(FString SectionName, FString VariableName, float Value);
    void VictorySetCustomConfigVar_Color(FString SectionName, FString VariableName, FLinearColor Value);
    void VictorySetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool Value);
    void VictoryRemoveAxisKeyBind(FVictoryInputAxis ToRemove);
    void VictoryRemoveActionKeyBind(FVictoryInput ToRemove);
    bool VictoryReBindAxisKey(FVictoryInputAxis Original, FVictoryInputAxis NewBinding);
    bool VictoryReBindActionKey(FVictoryInput Original, FVictoryInput NewBinding);
    bool VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping);
    FString VictoryPaths__WindowsNoEditorDir();
    FString VictoryPaths__Win64Dir_BinaryLocation();
    FString VictoryPaths__ScreenShotsDir();
    FString VictoryPaths__SavedDir();
    FString VictoryPaths__LogsDir();
    FString VictoryPaths__GameRootDirectory();
    FString VictoryPaths__ConfigDir();
    class ULevelStreaming* VictoryLoadLevelInstance(class UObject* WorldContextObject, FString MapFolderOffOfContent, FString LevelName, int32 InstanceNumber, FVector Location, FRotator Rotation, bool& Success);
    void VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>& Out);
    void VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, TArray<class AVictoryISM*>& CreatedISMActors, bool DestroyOriginalActors, int32 MinCountToCreateISM);
    bool VictoryIsApplicationRunning(int32 ProcessId);
    void VictoryIntPlusEquals(int32& Int, int32 Add, int32& IntOut);
    void VictoryIntMinusEquals(int32& Int, int32 Sub, int32& IntOut);
    FVictoryInputAxis VictoryGetVictoryInputAxis(const FKeyEvent& KeyEvent);
    FVictoryInput VictoryGetVictoryInput(const FKeyEvent& KeyEvent);
    float VictoryGetSoundVolume(class USoundClass* SoundClassObject);
    FVector2D VictoryGetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid);
    FVector VictoryGetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid);
    FString VictoryGetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);
    FRotator VictoryGetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid);
    int32 VictoryGetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid);
    float VictoryGetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid);
    FLinearColor VictoryGetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid);
    bool VictoryGetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid);
    FString VictoryGetApplicationName(int32 ProcessId);
    void VictoryGetAllAxisKeyBindings(TArray<FVictoryInputAxis>& Bindings);
    void VictoryGetAllAxisAndActionMappingsForKey(FKey Key, TArray<FVictoryInput>& ActionBindings, TArray<FVictoryInputAxis>& AxisBindings);
    void VictoryGetAllActionKeyBindings(TArray<FVictoryInput>& Bindings);
    void VictoryFloatPlusEquals(float& Float, float Add, float& FloatOut);
    void VictoryFloatMinusEquals(float& Float, float Sub, float& FloatOut);
    bool VictoryDestructible_DestroyChunk(class UDestructibleComponent* DestructibleComp, int32 HitItem);
    void VictoryCreateProc(int32& ProcessId, FString FullPathOfProgramToRun, TArray<FString> CommandlineArgs, bool Detach, bool Hidden, int32 Priority, FString OptionalWorkingDirectory, class URamaVictoryPluginCreateProcessPipe* ReadPipeObject);
    void VictoryAppendInline(FString& String, FString ToAppend, FString& Result, bool AppendNewline);
    FString Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes);
    void Victory_SaveStringToOSClipboard(FString ToClipboard);
    bool Victory_SavePixels(FString FullFilePath, int32 Width, int32 Height, const TArray<FLinearColor>& ImagePixels, bool SaveAsBMP, bool sRGB, FString& ErrorString);
    class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(FString FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height, TArray<FLinearColor>& OutPixels);
    class UTexture2D* Victory_LoadTexture2D_FromFile(FString FullFilePath, EJoyImageFormats ImageFormat, bool& IsValid, int32& Width, int32& Height);
    void Victory_GetStringFromOSClipboard(FString& FromClipboard);
    bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32& TextureWidth, int32& TextureHeight, TArray<FLinearColor>& PixelArray);
    bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int32 X, int32 Y, FLinearColor& PixelColor);
    FString Victory_GetGRHIAdapterName();
    void Victory_GetGPUInfo(FString& DeviceDescription, FString& Provider, FString& DriverVersion, FString& DriverDate);
    FString Victory_GetGPUBrand();
    bool Victory_Get_Pixel(const TArray<FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, FLinearColor& FoundColor);
    TEnumAsByte<EPathFollowingRequestResult::Type> Victory_AI_MoveToWithFilter(class APawn* Pawn, const FVector& Dest, TSubclassOf<class UNavigationQueryFilter> FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe);
    float VerticalFOV(float HorizontalFOV, float AspectRatio);
    FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);
    void UTCToLocal(const FDateTime& UTCTime, FDateTime& LocalTime);
    void UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance);
    FRotator TransformVectorToActorSpaceAngle(class AActor* Actor, const FVector& InVector);
    FVector TransformVectorToActorSpace(class AActor* Actor, const FVector& InVector);
    class AActor* Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, const class AActor* TraceOwner, const FVector& TraceStart, const FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestSocketName, FVector& SocketLocation, bool& IsValid);
    class AActor* Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, const FVector& TraceStart, const FVector& TraceEnd, FVector& OutImpactPoint, FVector& OutImpactNormal, FName& ClosestBoneName, FVector& ClosestBoneLocation, bool& IsValid);
    bool TraceData__GetTraceDataFromSkeletalMeshSocket(FVector& TraceStart, FVector& TraceEnd, class USkeletalMeshComponent* Mesh, const FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness);
    bool TraceData__GetTraceDataFromCharacterSocket(FVector& TraceStart, FVector& TraceEnd, class AActor* TheCharacter, const FRotator& TraceRotation, float TraceLength, FName Socket, bool DrawTraceData, FLinearColor TraceDataColor, float TraceDataThickness);
    int32 Text_ToInt(const FText& Text, bool UseDotForThousands);
    float Text_ToFloat(const FText& Text, bool UseDotForThousands);
    bool Text_IsNumeric(const FText& Text);
    bool StringIsEmpty(FString Target);
    void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32 Precision, bool IncludeLeadingZero);
    void String__ExplodeString(TArray<FString>& OutputStrings, FString InputString, FString Separator, int32 Limit, bool bTrimElements);
    FString String__CombineStrings_Multi(FString A, FString B);
    FString String__CombineStrings(FString StringFirst, FString StringSecond, FString Separator, FString StringFirstLabel, FString StringSecondLabel);
    class AActor* SpawnActorIntoLevel(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, FName Level, FVector Location, FRotator Rotation, bool SpawnEvenIfColliding);
    void SetGenericTeamId(class AActor* Target, uint8 NewTeamId);
    void SetComponentTickRate(class UActorComponent* Component, float Seconds);
    void SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity);
    void ServerTravel(class UObject* WorldContextObject, FString MapName, bool bSkipNotifyPlayers);
    void Selection_SelectionBox(class UObject* WorldContextObject, TArray<class AActor*>& SelectedActors, FVector2D AnchorPoint, FVector2D DraggedPoint, TSubclassOf<class AActor> ClassFilter);
    void seedRandWithTime();
    void seedRandWithEntropy();
    void seedRand(int32 Seed);
    bool ScreenShots_Rename_Move_Most_Recent(FString& OriginalFileName, FString NewName, FString NewAbsoluteFolderPath, bool HighResolution);
    void SaveGameObject_GetMostRecentSaveSlotFileName(FString& Filename, bool& bFound);
    void SaveGameObject_GetAllSaveSlotFileNames(TArray<FString>& FileNames);
    void Rendering__UnFreezeGameRendering();
    void Rendering__FreezeGameRendering();
    void RemoveFromStreamingLevels(class UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo);
    void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
    void RealWorldTime__GetTimePassedSincePreviousTime(FString PreviousTime, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours);
    void RealWorldTime__GetDifferenceBetweenTimes(FString PreviousTime1, FString PreviousTime2, float& MilliSeconds, float& Seconds, float& Minutes, float& Hours);
    FString RealWorldTime__GetCurrentOSTime(int32& MilliSeconds, int32& Seconds, int32& Minutes, int32& Hours12, int32& Hours24, int32& Day, int32& Month, int32& Year);
    int32 RandInt_uniDis_MT();
    int32 RandInt_uniDis();
    int32 RandInt_MINMAX_uniDis_MT(int32 iMin, int32 iMax);
    int32 RandInt_MINMAX_uniDis(int32 iMin, int32 iMax);
    float RandFloat_uniDis_MT();
    float RandFloat_uniDis();
    float RandFloat_MINMAX_uniDis_MT(float iMin, float iMax);
    float RandFloat_MINMAX_uniDis(float iMin, float iMax);
    bool RandBool_Bernoulli_MT(float fBias);
    bool RandBool_Bernoulli(float fBias);
    FVector2D ProjectWorldToScreenPosition(const FVector& WorldLocation);
    void PointDistanceToPlane(const FPlane& Plane, FVector Point, float& Distance);
    class UAudioComponent* PlaySoundAttachedFromFile(FString FilePath, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
    void PlaySoundAtLocationFromFile(class UObject* WorldContextObject, FString FilePath, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
    bool PlayerState_GetPlayerID(class APlayerController* ThePC, int32& PlayerId);
    bool PlayerController_GetControllerID(class APlayerController* ThePC, int32& ControllerId);
    bool Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed);
    bool Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const FVector& InitLocation, const FRotator& InitRotation);
    bool Physics__IsRagDoll(class AActor* TheCharacter);
    bool Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, FVector& InitLocation, FRotator& InitRotation);
    bool Physics__GetLocationofRagDoll(class AActor* TheCharacter, FVector& RagdollLocation);
    bool Physics__EnterRagDoll(class AActor* TheCharacter);
    bool OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32>& Widths, TArray<int32>& Heights, TArray<int32>& RefreshRates, bool IncludeRefreshRates);
    void OperatingSystem__GetCurrentPlatform(bool& Windows_, bool& Mac, bool& Linux, bool& IOS, bool& Android, bool& Android_ARM, bool& Android_Vulkan, bool& PS4, bool& XboxOne, bool& HTML5, bool& APPLE);
    void Open_URL_In_Web_Browser(FString TheURL);
    bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    bool Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, TEnumAsByte<EComponentMobility::Type> NewMobility);
    void MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue);
    void MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue);
    void MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue);
    void MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue);
    float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    void Loops_ResetBPRunawayCounter();
    class UTexture2D* LoadTexture2D_FromFileByExtension(FString ImagePath, bool& IsValid, int32& OutWidth, int32& OutHeight);
    class UTexture2D* LoadTexture2D_FromDDSFile(FString FullFilePath);
    bool LoadStringFromFile(FString& Result, FString FullFilePath);
    bool LoadStringArrayFromFile(TArray<FString>& StringArray, int32& ArraySize, FString FullFilePath, bool ExcludeEmptyLines);
    class UObject* LoadObjectFromAssetPath(UClass* ObjectClass, FName Path, bool& IsValid);
    bool LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float& PitchOffset, float& YawOffset, float& RollOffset);
    void JoyIsKey(const FKeyEvent& KeyEvent, FKey Key, bool& Ctrl, bool& Shift, bool& Alt, bool& Cmd, bool& Match);
    void JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen::Type> NewSetting);
    TEnumAsByte<EJoyGraphicsFullScreen::Type> JoyGraphicsSettings__FullScreen_Get();
    bool JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);
    bool JoyFileIO_GetFiles(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);
    bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
    bool IsStandAlone(class UObject* WorldContextObject);
    bool IsPointOnPlane(const FPlane& Plane, FVector Point, float Tolerance);
    bool IsAlphaNumeric(FString String);
    class UPanelSlot* InsertChildAt(class UWidget* Parent, int32 Index, class UWidget* Content);
    float HorizontalFOV(float VerticalFOV, float AspectRatio);
    void HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance);
    bool HasSubstring(FString SearchIn, FString SubString, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    void GraphicsSettings__SetFrameRateToBeUnbound();
    void GraphicsSettings__SetFrameRateCap(float newValue);
    class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, const FName& Name);
    bool GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, FHitResult& OutHitResult);
    bool GetViewportPosition(class UObject* WorldContextObject, const FVector2D& ScreenPosition, FVector2D& OutViewportPosition);
    FVector GetVectorRelativeLocation(FVector ParentLocation, FRotator ParentRotation, FVector ChildLocation);
    void GetUTCFromUnixTimeStamp(int64 UnixTimeStamp, FDateTime& UTCTime);
    void GetUserDisplayAdapterBrand(bool& IsAMD, bool& IsNvidia, bool& IsIntel, bool& IsUnknown, int32& UnknownId);
    int64 GetUnixTimeStamp(const FDateTime& UTCTime);
    float GetTimeInPlay(class AActor* Actor);
    float GetTimeAlive(const class AActor* Target);
    bool GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<FVector>& VertexPositions);
    class USoundWave* GetSoundWaveFromFile(FString FilePath);
    FRotator GetRotatorRelativeRotation(FRotator ParentRotation, FRotator ChildRotation);
    int32 GetPlayerUniqueNetID();
    class APlayerStart* GetPlayerStart(class UObject* WorldContextObject, FString PlayerStartName);
    FName GetObjectPath(class UObject* Obj);
    void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<FString>& NamesOfLoadedLevels);
    FLevelStreamInstanceInfo GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance);
    FName GetHeadMountedDisplayDeviceType();
    uint8 GetGenericTeamId(class AActor* Target);
    class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
    float GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, const FVector& Point, FVector& ClosestPointOnCollision);
    float GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, FVector& PointOnSurface1, FVector& PointOnSurface2);
    float GetCreationTime(const class AActor* Target);
    FRotator GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
    FVector GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent);
    FString GetCommandLine();
    class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, FVector Center, float Radius, bool& IsValid);
    class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class AActor* ActorCenter, float Radius, bool& IsValid);
    void GetBoxContainingWorldPoints(const TArray<FVector>& Points, FVector& Center, FVector& Extent);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, TArray<class UUserWidget*>& FoundWidgets, bool TopLevelOnly);
    int32 GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, FName StartingBoneName, TArray<FName>& BoneNames);
    FRotator GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor);
    FVector GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor);
    void FlushPressedKeys(class APlayerController* PlayerController);
    void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32 MaxFlashCount, int32 FlashFrequencyMilliseconds);
    bool FileIO__SaveStringTextToFile(FString SaveDirectory, FString JoyfulFileName, FString SaveText, bool AllowOverWriting, bool AllowAppend);
    bool FileIO__SaveStringArrayToFile(FString SaveDirectory, FString JoyfulFileName, TArray<FString> SaveText, bool AllowOverWriting, bool AllowAppend);
    bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    void DrawCircle(class UObject* WorldContextObject, FVector Center, float Radius, int32 NumPoints, float Thickness, FLinearColor LineColor, FVector YAxis, FVector ZAxis, float Duration, bool PersistentLines);
    void Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, const FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration);
    void Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, const FVector& EndPoint, FName Socket, FLinearColor LineColor, float Thickness, float Duration);
    void Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, FLinearColor LineColor, float Thickness, float Duration);
    bool DoesMaterialHaveParameter(class UMaterialInterface* Mat, FName Parameter);
    float DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, const FVector& TestPoint, FVector& ClosestSurfacePoint);
    bool Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<FVector>& BoneLocations);
    class UTextureRenderTarget2D* CreateTextureRenderTarget2D(int32 Width, int32 Height, FLinearColor ClearColor, float Gamma);
    class UPrimitiveComponent* CreatePrimitiveComponent(class UObject* WorldContextObject, TSubclassOf<class UPrimitiveComponent> CompClass, FName Name, FVector Location, FRotator Rotation);
    FPlane CreatePlane(FVector Center, FVector Normal);
    class UObject* CreateObject(class UObject* WorldContextObject, UClass* TheObjectClass);
    bool CreateMD5Hash(FString FileToHash, FString FileToStoreHashTo);
    int32 CountOccurrancesOfSubString(FString Source, FString SubString, TEnumAsByte<ESearchCase::Type> SearchCase);
    FRotator Conversions__VectorToRotator(const FVector& TheVector);
    void Conversions__StringToVector(FString String, FVector& ConvertedVector, bool& IsValid);
    void Conversions__StringToRotator(FString String, FRotator& ConvertedRotator, bool& IsValid);
    void Conversions__StringToColor(FString String, FLinearColor& ConvertedColor, bool& IsValid);
    FVector Conversions__RotatorToVector(const FRotator& TheRotator);
    void Conversions__ColorToString(const FLinearColor& Color, FString& ColorAsString);
    int32 Conversion__FloatToRoundedInteger(float IN_Float);
    void constructRand();
    void Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    bool CompareMD5Hash(FString MD5HashFile1, FString MD5HashFile2);
    class AStaticMeshActor* Clone__StaticMeshActor(class UObject* WorldContextObject, bool& IsValid, class AStaticMeshActor* ToClone, FVector LocationOffset, FRotator RotationOffset);
    bool ClientWindow__GameWindowIsForeGroundInOS();
    bool CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed);
    FRotator Character__GetControllerRotation(class AActor* TheCharacter);
    bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const FString ImagePath, const FLinearColor ClearColour);
    bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, FVector Location, FVector2D& OutPixelLocation);
    bool Capture2D_SaveImage(class ASceneCapture2D* Target, const FString ImagePath, const FLinearColor ClearColour);
    bool Capture2D_Project(class ASceneCapture2D* Target, FVector Location, FVector2D& OutPixelLocation);
    float Calcs__ClosestPointToSourcePoint(const FVector& Source, const TArray<FVector>& OtherPoints, FVector& ClosestPoint);
    void Array_Sort(const TArray<int32>& TargetArray, bool bAscendingOrder, FName VariableName);
    bool Array_IsValidIndex(const TArray<int32>& TargetArray, int32 Index);
    FString AppendMultiple(FString A, FString B);
    bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const FRotator& TheRotation, float& Pitch, float& Yaw);
    bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float& Pitch, float& Yaw);
    void AddToStreamingLevels(class UObject* WorldContextObject, const FLevelStreamInstanceInfo& LevelInstanceInfo);
    void AddToActorRotation(class AActor* TheActor, FRotator AddRot);
    void Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    bool Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor);
    void Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>& ActorsArray);
    class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool& IsValid);
    FString Accessor__GetNameAsString(const class UObject* TheObject);
    class USkeletalMeshComponent* Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool& IsValid);
}; // Size: 0x28

class UVictoryBPHTML : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class AVictoryISM : public AActor
{
    class UInstancedStaticMeshComponent* Mesh;                                        // 0x0228 (size: 0x8)

}; // Size: 0x230

struct FVictorySubtitleCue
{
    FText SubtitleText;                                                               // 0x0000 (size: 0x18)
    float Time;                                                                       // 0x0018 (size: 0x4)

}; // Size: 0x20

class AVictoryPC : public APlayerController
{

    class UAudioComponent* VictoryPlaySpeechSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    bool VictoryPC_GetMyIP_SendRequest();
    void VictoryPC_GetMyIP_DataReceived(FString YourIP);
    void Subtitles_CPPDelegate(const TArray<FSubtitleCue>& VictorySubtitles, float CueDuration);
    void OnVictorySubtitlesQueued(const TArray<FVictorySubtitleCue>& VictorySubtitles, float CueDuration);
}; // Size: 0x578

class UVictoryTMapComp : public UActorComponent
{

    void String_Vector__Remove(FString Key);
    FVector String_Vector__Get(FString Key, bool& IsValid);
    void String_Vector__Clear();
    void String_Vector__AddPair(FString Key, FVector Value);
    void String_String__Remove(FString Key);
    FString String_String__Get(FString Key, bool& IsValid);
    void String_String__Clear();
    void String_String__AddPair(FString Key, FString Value);
    void String_Rotator__Remove(FString Key);
    FRotator String_Rotator__Get(FString Key, bool& IsValid);
    void String_Rotator__Clear();
    void String_Rotator__AddPair(FString Key, FRotator Value);
    void String_Int__Remove(FString Key);
    int32 String_Int__Get(FString Key, bool& IsValid);
    void String_Int__Clear();
    void String_Int__AddPair(FString Key, int32 Value);
    void String_Actor__Remove(FString Key);
    class AActor* String_Actor__Get(FString Key, bool& IsValid);
    void String_Actor__Clear();
    void String_Actor__AddPair(FString Key, class AActor* Value);
    void Int_Vector__Remove(int32 Key);
    FVector Int_Vector__Get(int32 Key, bool& IsValid);
    void Int_Vector__Clear();
    void Int_Vector__AddPair(int32 Key, FVector Value);
    void Int_Float__Remove(int32 Key, float Value);
    float Int_Float__Get(int32 Key, bool& IsValid);
    void Int_Float__Clear();
    void Int_Float__AddPair(int32 Key, float Value);
}; // Size: 0x2E0

#endif
