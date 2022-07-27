#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "BlueprintPathsLibrary.generated.h"

UCLASS(BlueprintType)
class ENGINE_API UBlueprintPathsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintPathsLibrary();
    UFUNCTION(BlueprintPure)
    static FString VideoCaptureDir();
    
    UFUNCTION(BlueprintPure)
    static void ValidatePath(const FString& InPath, bool& bDidSucceed, FText& OutReason);
    
    UFUNCTION(BlueprintPure)
    static void Split(const FString& InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart);
    
    UFUNCTION(BlueprintPure)
    static FString SourceConfigDir();
    
    UFUNCTION(BlueprintPure)
    static bool ShouldSaveToUserDir();
    
    UFUNCTION(BlueprintPure)
    static FString ShaderWorkingDir();
    
    UFUNCTION(BlueprintCallable)
    static void SetProjectFilePath(const FString& NewGameProjectFilePath);
    
    UFUNCTION(BlueprintPure)
    static FString SetExtension(const FString& InPath, const FString& InNewExtension);
    
    UFUNCTION(BlueprintPure)
    static FString ScreenShotDir();
    
    UFUNCTION(BlueprintPure)
    static FString SandboxesDir();
    
    UFUNCTION(BlueprintPure)
    static FString RootDir();
    
    UFUNCTION(BlueprintPure)
    static void RemoveDuplicateSlashes(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintPure)
    static FString ProjectUserDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectSavedDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectPluginsDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectPersistentDownloadDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectModsDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectLogDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectIntermediateDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectContentDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProjectConfigDir();
    
    UFUNCTION(BlueprintPure)
    static FString ProfilingDir();
    
    UFUNCTION(BlueprintPure)
    static void NormalizeFilename(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintPure)
    static void NormalizeDirectoryName(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintPure)
    static FString MakeValidFileName(const FString& inString, const FString& InReplacementChar);
    
    UFUNCTION(BlueprintPure)
    static void MakeStandardFilename(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintPure)
    static void MakePlatformFilename(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintPure)
    static bool MakePathRelativeTo(const FString& InPath, const FString& InRelativeTo, FString& OutPath);
    
    UFUNCTION(BlueprintPure)
    static FString LaunchDir();
    
    UFUNCTION(BlueprintPure)
    static bool IsSamePath(const FString& PathA, const FString& PathB);
    
    UFUNCTION(BlueprintPure)
    static bool IsRestrictedPath(const FString& InPath);
    
    UFUNCTION(BlueprintPure)
    static bool IsRelative(const FString& InPath);
    
    UFUNCTION(BlueprintPure)
    static bool IsProjectFilePathSet();
    
    UFUNCTION(BlueprintPure)
    static bool IsDrive(const FString& InPath);
    
    UFUNCTION(BlueprintPure)
    static bool HasProjectPersistentDownloadDir();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetToolTipLocalizationPaths();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetRestrictedFolderNames();
    
    UFUNCTION(BlueprintPure)
    static FString GetRelativePathToRoot();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetPropertyNameLocalizationPaths();
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectFilePath();
    
    UFUNCTION(BlueprintPure)
    static FString GetPath(const FString& InPath);
    
    UFUNCTION(BlueprintPure)
    static FString GetInvalidFileSystemChars();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetGameLocalizationPaths();
    
    UFUNCTION(BlueprintPure)
    static FString GetExtension(const FString& InPath, bool bIncludeDot);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetEngineLocalizationPaths();
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetEditorLocalizationPaths();
    
    UFUNCTION(BlueprintPure)
    static FString GetCleanFilename(const FString& InPath);
    
    UFUNCTION(BlueprintPure)
    static FString GetBaseFilename(const FString& InPath, bool bRemovePath);
    
    UFUNCTION(BlueprintPure)
    static FString GeneratedConfigDir();
    
    UFUNCTION(BlueprintPure)
    static FString GameUserDeveloperDir();
    
    UFUNCTION(BlueprintPure)
    static FString GameSourceDir();
    
    UFUNCTION(BlueprintPure)
    static FString GameDevelopersDir();
    
    UFUNCTION(BlueprintPure)
    static FString GameAgnosticSavedDir();
    
    UFUNCTION(BlueprintPure)
    static bool FileExists(const FString& InPath);
    
    UFUNCTION(BlueprintPure)
    static FString FeaturePackDir();
    
    UFUNCTION(BlueprintPure)
    static FString EnterprisePluginsDir();
    
    UFUNCTION(BlueprintPure)
    static FString EnterpriseFeaturePackDir();
    
    UFUNCTION(BlueprintPure)
    static FString EnterpriseDir();
    
    UFUNCTION(BlueprintPure)
    static FString EngineVersionAgnosticUserDir();
    
    UFUNCTION(BlueprintPure)
    static FString EngineUserDir();
    
    UFUNCTION(BlueprintPure)
    static FString EngineSourceDir();
    
    UFUNCTION(BlueprintPure)
    static FString EngineSavedDir();
    
    UFUNCTION(BlueprintPure)
    static FString EnginePluginsDir();
    
    UFUNCTION(BlueprintPure)
    static FString EngineIntermediateDir();
    
    UFUNCTION(BlueprintPure)
    static FString EngineDir();
    
    UFUNCTION(BlueprintPure)
    static FString EngineContentDir();
    
    UFUNCTION(BlueprintPure)
    static FString EngineConfigDir();
    
    UFUNCTION(BlueprintPure)
    static bool DirectoryExists(const FString& InPath);
    
    UFUNCTION(BlueprintPure)
    static FString DiffDir();
    
    UFUNCTION(BlueprintPure)
    static FString CreateTempFilename(const FString& Path, const FString& Prefix, const FString& Extension);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertToSandboxPath(const FString& InPath, const FString& InSandboxName);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertRelativePathToFull(const FString& InPath, const FString& InBasePath);
    
    UFUNCTION(BlueprintPure)
    static FString ConvertFromSandboxPath(const FString& InPath, const FString& InSandboxName);
    
    UFUNCTION(BlueprintPure)
    static FString Combine(const TArray<FString>& InPaths);
    
    UFUNCTION(BlueprintPure)
    static bool CollapseRelativeDirectories(const FString& InPath, FString& OutPath);
    
    UFUNCTION(BlueprintPure)
    static FString CloudDir();
    
    UFUNCTION(BlueprintPure)
    static FString ChangeExtension(const FString& InPath, const FString& InNewExtension);
    
    UFUNCTION(BlueprintPure)
    static FString BugItDir();
    
    UFUNCTION(BlueprintPure)
    static FString AutomationTransientDir();
    
    UFUNCTION(BlueprintPure)
    static FString AutomationLogDir();
    
    UFUNCTION(BlueprintPure)
    static FString AutomationDir();
    
};

