#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "FieldObjectCommands.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldPhysicsType -FallbackName=EFieldPhysicsType
#include "FieldSystemComponent.generated.h"

class AChaosSolverActor;
class UFieldSystem;
class UFieldSystemMetaData;
class UFieldNodeBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    UFieldSystem* FieldSystem;
    
    UPROPERTY(EditAnywhere)
    bool bIsWorldField;
    
    UPROPERTY(EditAnywhere)
    bool bIsChaosField;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;
    
    UPROPERTY()
    FFieldObjectCommands ConstructionCommands;
    
    UPROPERTY()
    FFieldObjectCommands BufferCommands;
    
    UFieldSystemComponent();
    UFUNCTION(BlueprintCallable)
    void ResetFieldSystem();
    
    UFUNCTION(BlueprintCallable)
    void RemovePersistentFields();
    
    UFUNCTION(BlueprintCallable)
    void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32 Iterations);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFUNCTION(BlueprintCallable)
    void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFUNCTION(BlueprintCallable)
    void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
};

