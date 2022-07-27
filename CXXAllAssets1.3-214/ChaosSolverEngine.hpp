#ifndef UE4SS_SDK_ChaosSolverEngine_HPP
#define UE4SS_SDK_ChaosSolverEngine_HPP

#include "ChaosSolverEngine_enums.hpp"

class UChaosDebugDrawComponent : public UActorComponent
{
}; // Size: 0xB8

class UChaosEventListenerComponent : public UActorComponent
{
}; // Size: 0xB8

struct FChaosHandlerSet
{
    TSet<UObject*> ChaosHandlers;                                                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FBreakEventCallbackWrapper
{
}; // Size: 0x40

class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
    TMap<class UPrimitiveComponent*, class FChaosHandlerSet> CollisionEventRegistrations; // 0x01C8 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x0218 (size: 0x50)

}; // Size: 0x270

class IChaosNotifyHandlerInterface : public IInterface
{
}; // Size: 0x28

struct FChaosPhysicsCollisionInfo
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    class UPrimitiveComponent* OtherComponent;                                        // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0xC)
    FVector Normal;                                                                   // 0x001C (size: 0xC)
    FVector AccumulatedImpulse;                                                       // 0x0028 (size: 0xC)
    FVector Velocity;                                                                 // 0x0034 (size: 0xC)
    FVector OtherVelocity;                                                            // 0x0040 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x004C (size: 0xC)
    FVector OtherAngularVelocity;                                                     // 0x0058 (size: 0xC)
    float Mass;                                                                       // 0x0064 (size: 0x4)
    float OtherMass;                                                                  // 0x0068 (size: 0x4)

}; // Size: 0x70

class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
}; // Size: 0x28

class UChaosSolver : public UObject
{
}; // Size: 0x28

struct FChaosDebugSubstepControl
{
    bool bPause;                                                                      // 0x0000 (size: 0x1)
    bool bSubstep;                                                                    // 0x0001 (size: 0x1)
    bool bStep;                                                                       // 0x0002 (size: 0x1)

}; // Size: 0x3

class AChaosSolverActor : public AActor
{
    FChaosSolverConfiguration Properties;                                             // 0x0228 (size: 0x68)
    float TimeStepMultiplier;                                                         // 0x0290 (size: 0x4)
    int32 CollisionIterations;                                                        // 0x0294 (size: 0x4)
    int32 PushOutIterations;                                                          // 0x0298 (size: 0x4)
    int32 PushOutPairIterations;                                                      // 0x029C (size: 0x4)
    float ClusterConnectionFactor;                                                    // 0x02A0 (size: 0x4)
    EClusterConnectionTypeEnum ClusterUnionConnectionType;                            // 0x02A4 (size: 0x1)
    bool DoGenerateCollisionData;                                                     // 0x02A5 (size: 0x1)
    FSolverCollisionFilterSettings CollisionFilterSettings;                           // 0x02A8 (size: 0x10)
    bool DoGenerateBreakingData;                                                      // 0x02B8 (size: 0x1)
    FSolverBreakingFilterSettings BreakingFilterSettings;                             // 0x02BC (size: 0x10)
    bool DoGenerateTrailingData;                                                      // 0x02CC (size: 0x1)
    FSolverTrailingFilterSettings TrailingFilterSettings;                             // 0x02D0 (size: 0x10)
    float MassScale;                                                                  // 0x02E0 (size: 0x4)
    bool bGenerateContactGraph;                                                       // 0x02E4 (size: 0x1)
    bool bHasFloor;                                                                   // 0x02E5 (size: 0x1)
    float FloorHeight;                                                                // 0x02E8 (size: 0x4)
    FChaosDebugSubstepControl ChaosDebugSubstepControl;                               // 0x02EC (size: 0x3)
    class UBillboardComponent* SpriteComponent;                                       // 0x02F0 (size: 0x8)
    class UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;            // 0x0310 (size: 0x8)

    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
}; // Size: 0x320

class UChaosSolverSettings : public UDeveloperSettings
{
    FSoftClassPath DefaultChaosSolverActorClass;                                      // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FChaosBreakEvent
{
    class UPrimitiveComponent* Component;                                             // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FVector Velocity;                                                                 // 0x0014 (size: 0xC)
    FVector AngularVelocity;                                                          // 0x0020 (size: 0xC)
    float Mass;                                                                       // 0x002C (size: 0x4)

}; // Size: 0x30

#endif
