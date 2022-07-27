#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneFolder.generated.h"

class UMovieSceneFolder;
class UMovieSceneTrack;

UCLASS(DefaultToInstanced)
class MOVIESCENE_API UMovieSceneFolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FName FolderName;
    
    UPROPERTY(Export)
    TArray<UMovieSceneFolder*> ChildFolders;
    
    UPROPERTY(Export)
    TArray<UMovieSceneTrack*> ChildMasterTracks;
    
    UPROPERTY()
    TArray<FString> ChildObjectBindingStrings;
    
public:
    UMovieSceneFolder();
};

