#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Console.generated.h"

class ULocalPlayer;
class UTexture2D;

UCLASS(Transient, Config=Input, Within=GameViewportClient)
class ENGINE_API UConsole : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    ULocalPlayer* ConsoleTargetPlayer;
    
    UPROPERTY()
    UTexture2D* DefaultTexture_Black;
    
    UPROPERTY()
    UTexture2D* DefaultTexture_White;
    
    UPROPERTY(Config)
    TArray<FString> HistoryBuffer;
    
    UConsole();
};

