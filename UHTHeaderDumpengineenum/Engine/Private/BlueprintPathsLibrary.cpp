#include "BlueprintPathsLibrary.h"

FString UBlueprintPathsLibrary::VideoCaptureDir() {
    return TEXT("");
}

void UBlueprintPathsLibrary::ValidatePath(const FString& InPath, bool& bDidSucceed, FText& OutReason) {
}

void UBlueprintPathsLibrary::Split(const FString& InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart) {
}

FString UBlueprintPathsLibrary::SourceConfigDir() {
    return TEXT("");
}

bool UBlueprintPathsLibrary::ShouldSaveToUserDir() {
    return false;
}

FString UBlueprintPathsLibrary::ShaderWorkingDir() {
    return TEXT("");
}

void UBlueprintPathsLibrary::SetProjectFilePath(const FString& NewGameProjectFilePath) {
}

FString UBlueprintPathsLibrary::SetExtension(const FString& InPath, const FString& InNewExtension) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ScreenShotDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::SandboxesDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::RootDir() {
    return TEXT("");
}

void UBlueprintPathsLibrary::RemoveDuplicateSlashes(const FString& InPath, FString& OutPath) {
}

FString UBlueprintPathsLibrary::ProjectUserDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectSavedDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectPluginsDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectPersistentDownloadDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectModsDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectLogDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectIntermediateDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectContentDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProjectConfigDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ProfilingDir() {
    return TEXT("");
}

void UBlueprintPathsLibrary::NormalizeFilename(const FString& InPath, FString& OutPath) {
}

void UBlueprintPathsLibrary::NormalizeDirectoryName(const FString& InPath, FString& OutPath) {
}

FString UBlueprintPathsLibrary::MakeValidFileName(const FString& inString, const FString& InReplacementChar) {
    return TEXT("");
}

void UBlueprintPathsLibrary::MakeStandardFilename(const FString& InPath, FString& OutPath) {
}

void UBlueprintPathsLibrary::MakePlatformFilename(const FString& InPath, FString& OutPath) {
}

bool UBlueprintPathsLibrary::MakePathRelativeTo(const FString& InPath, const FString& InRelativeTo, FString& OutPath) {
    return false;
}

FString UBlueprintPathsLibrary::LaunchDir() {
    return TEXT("");
}

bool UBlueprintPathsLibrary::IsSamePath(const FString& PathA, const FString& PathB) {
    return false;
}

bool UBlueprintPathsLibrary::IsRestrictedPath(const FString& InPath) {
    return false;
}

bool UBlueprintPathsLibrary::IsRelative(const FString& InPath) {
    return false;
}

bool UBlueprintPathsLibrary::IsProjectFilePathSet() {
    return false;
}

bool UBlueprintPathsLibrary::IsDrive(const FString& InPath) {
    return false;
}

bool UBlueprintPathsLibrary::HasProjectPersistentDownloadDir() {
    return false;
}

TArray<FString> UBlueprintPathsLibrary::GetToolTipLocalizationPaths() {
    return TArray<FString>();
}

TArray<FString> UBlueprintPathsLibrary::GetRestrictedFolderNames() {
    return TArray<FString>();
}

FString UBlueprintPathsLibrary::GetRelativePathToRoot() {
    return TEXT("");
}

TArray<FString> UBlueprintPathsLibrary::GetPropertyNameLocalizationPaths() {
    return TArray<FString>();
}

FString UBlueprintPathsLibrary::GetProjectFilePath() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::GetPath(const FString& InPath) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::GetInvalidFileSystemChars() {
    return TEXT("");
}

TArray<FString> UBlueprintPathsLibrary::GetGameLocalizationPaths() {
    return TArray<FString>();
}

FString UBlueprintPathsLibrary::GetExtension(const FString& InPath, bool bIncludeDot) {
    return TEXT("");
}

TArray<FString> UBlueprintPathsLibrary::GetEngineLocalizationPaths() {
    return TArray<FString>();
}

TArray<FString> UBlueprintPathsLibrary::GetEditorLocalizationPaths() {
    return TArray<FString>();
}

FString UBlueprintPathsLibrary::GetCleanFilename(const FString& InPath) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::GetBaseFilename(const FString& InPath, bool bRemovePath) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::GeneratedConfigDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::GameUserDeveloperDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::GameSourceDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::GameDevelopersDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::GameAgnosticSavedDir() {
    return TEXT("");
}

bool UBlueprintPathsLibrary::FileExists(const FString& InPath) {
    return false;
}

FString UBlueprintPathsLibrary::FeaturePackDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EnterprisePluginsDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EnterpriseFeaturePackDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EnterpriseDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EngineVersionAgnosticUserDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EngineUserDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EngineSourceDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EngineSavedDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EnginePluginsDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EngineIntermediateDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EngineDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EngineContentDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::EngineConfigDir() {
    return TEXT("");
}

bool UBlueprintPathsLibrary::DirectoryExists(const FString& InPath) {
    return false;
}

FString UBlueprintPathsLibrary::DiffDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::CreateTempFilename(const FString& Path, const FString& Prefix, const FString& Extension) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ConvertToSandboxPath(const FString& InPath, const FString& InSandboxName) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ConvertRelativePathToFull(const FString& InPath, const FString& InBasePath) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ConvertFromSandboxPath(const FString& InPath, const FString& InSandboxName) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::Combine(const TArray<FString>& InPaths) {
    return TEXT("");
}

bool UBlueprintPathsLibrary::CollapseRelativeDirectories(const FString& InPath, FString& OutPath) {
    return false;
}

FString UBlueprintPathsLibrary::CloudDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::ChangeExtension(const FString& InPath, const FString& InNewExtension) {
    return TEXT("");
}

FString UBlueprintPathsLibrary::BugItDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::AutomationTransientDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::AutomationLogDir() {
    return TEXT("");
}

FString UBlueprintPathsLibrary::AutomationDir() {
    return TEXT("");
}

UBlueprintPathsLibrary::UBlueprintPathsLibrary() {
}

