#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EDragPivot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
#include "OnDragDropMulticastDelegate.h"
#include "DragDropOperation.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UMG_API UDragDropOperation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* Payload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UWidget* DefaultDragVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDragPivot Pivot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector2D Offset;
    
    UPROPERTY(BlueprintAssignable)
    FOnDragDropMulticast OnDrop;
    
    UPROPERTY(BlueprintAssignable)
    FOnDragDropMulticast OnDragCancelled;
    
    UPROPERTY(BlueprintAssignable)
    FOnDragDropMulticast OnDragged;
    
    UDragDropOperation();
    UFUNCTION(BlueprintNativeEvent)
    void Drop(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintNativeEvent)
    void Dragged(const FPointerEvent& PointerEvent);
    
    UFUNCTION(BlueprintNativeEvent)
    void DragCancelled(const FPointerEvent& PointerEvent);
    
};

