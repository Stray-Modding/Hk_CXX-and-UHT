#include "CheatManager.h"
#include "Templates/SubclassOf.h"
#include "DebugCameraController.h"

class AActor;
class APawn;

void UCheatManager::Walk() {
}

void UCheatManager::ViewSelf() {
}

void UCheatManager::ViewPlayer(const FString& S) {
}

void UCheatManager::ViewClass(TSubclassOf<AActor> DesiredClass) {
}

void UCheatManager::ViewActor(FName ActorName) {
}

void UCheatManager::UpdateSafeArea() {
}

void UCheatManager::ToggleServerStatReplicatorUpdateStatNet() {
}

void UCheatManager::ToggleServerStatReplicatorClientOverwrite() {
}

void UCheatManager::ToggleDebugCamera() {
}

void UCheatManager::ToggleAILogging() {
}

void UCheatManager::TestCollisionDistance() {
}

void UCheatManager::Teleport() {
}

void UCheatManager::Summon(const FString& ClassName) {
}

void UCheatManager::StreamLevelOut(FName PackageName) {
}

void UCheatManager::StreamLevelIn(FName PackageName) {
}

void UCheatManager::SpawnServerStatReplicator() {
}

void UCheatManager::Slomo(float NewTimeDilation) {
}

void UCheatManager::SetWorldOrigin() {
}

void UCheatManager::SetMouseSensitivityToDefault() {
}

void UCheatManager::ServerToggleAILogging_Implementation() {
}
bool UCheatManager::ServerToggleAILogging_Validate() {
    return true;
}



void UCheatManager::PlayersOnly() {
}

void UCheatManager::OnlyLoadLevel(FName PackageName) {
}

void UCheatManager::LogLoc() {
}

void UCheatManager::InvertMouse() {
}

void UCheatManager::God() {
}

void UCheatManager::Ghost() {
}

void UCheatManager::FreezeFrame(float Delay) {
}

void UCheatManager::Fly() {
}

void UCheatManager::FlushLog() {
}

void UCheatManager::EnableDebugCamera() {
}

void UCheatManager::DumpVoiceMutingState() {
}

void UCheatManager::DumpPartyState() {
}

void UCheatManager::DumpOnlineSessionState() {
}

void UCheatManager::DumpChatState() {
}

void UCheatManager::DisableDebugCamera() {
}

void UCheatManager::DestroyTarget() {
}

void UCheatManager::DestroyServerStatReplicator() {
}

void UCheatManager::DestroyPawns(TSubclassOf<APawn> aClass) {
}

void UCheatManager::DestroyAllPawnsExceptTarget() {
}

void UCheatManager::DestroyAll(TSubclassOf<AActor> aClass) {
}

void UCheatManager::DebugCapsuleSweepSize(float HalfHeight, float Radius) {
}

void UCheatManager::DebugCapsuleSweepPawn() {
}

void UCheatManager::DebugCapsuleSweepComplex(bool bTraceComplex) {
}

void UCheatManager::DebugCapsuleSweepClear() {
}

void UCheatManager::DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel) {
}

void UCheatManager::DebugCapsuleSweepCapture() {
}

void UCheatManager::DebugCapsuleSweep() {
}

void UCheatManager::DamageTarget(float DamageAmount) {
}

void UCheatManager::CheatScript(const FString& ScriptName) {
}

void UCheatManager::ChangeSize(float F) {
}

void UCheatManager::BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString& GoString, FString& LocString) {
}

void UCheatManager::BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll) {
}

void UCheatManager::BugIt(const FString& ScreenShotDescription) {
}

UCheatManager::UCheatManager() {
    this->DebugCameraControllerRef = NULL;
    this->DebugCameraControllerClass = ADebugCameraController::StaticClass();
}

