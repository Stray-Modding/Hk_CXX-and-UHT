#include "KismetMaterialLibrary.h"

class UMaterialInstanceDynamic;
class UObject;
class UMaterialParameterCollection;
class UMaterialInterface;

void UKismetMaterialLibrary::SetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, const FLinearColor& ParameterValue) {
}

void UKismetMaterialLibrary::SetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float ParameterValue) {
}

FLinearColor UKismetMaterialLibrary::GetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName) {
    return FLinearColor{};
}

float UKismetMaterialLibrary::GetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName) {
    return 0.0f;
}

UMaterialInstanceDynamic* UKismetMaterialLibrary::CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName, EMIDCreationFlags CreationFlags) {
    return NULL;
}

UKismetMaterialLibrary::UKismetMaterialLibrary() {
}

