#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ESearchCase -FallbackName=ESearchCase
#include "BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ESearchDir -FallbackName=ESearchDir
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "KismetStringLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class ENGINE_API UKismetStringLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKismetStringLibrary();
    UFUNCTION(BlueprintPure)
    static FString TrimTrailing(const FString& SourceString);
    
    UFUNCTION(BlueprintPure)
    static FString Trim(const FString& SourceString);
    
    UFUNCTION(BlueprintPure)
    static FString ToUpper(const FString& SourceString);
    
    UFUNCTION(BlueprintPure)
    static FString ToLower(const FString& SourceString);
    
    UFUNCTION(BlueprintPure)
    static FString TimeSecondsToString(float InSeconds);
    
    UFUNCTION(BlueprintPure)
    static bool StartsWith(const FString& SourceString, const FString& InPrefix, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintPure)
    static bool Split(const FString& SourceString, const FString& InStr, FString& LeftS, FString& RightS, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    
    UFUNCTION(BlueprintPure)
    static FString RightPad(const FString& SourceString, int32 ChCount);
    
    UFUNCTION(BlueprintPure)
    static FString RightChop(const FString& SourceString, int32 Count);
    
    UFUNCTION(BlueprintPure)
    static FString Right(const FString& SourceString, int32 Count);
    
    UFUNCTION(BlueprintPure)
    static FString Reverse(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable)
    static int32 ReplaceInline(UPARAM(Ref) FString& SourceString, const FString& SearchText, const FString& ReplacementText, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintPure)
    static FString Replace(const FString& SourceString, const FString& From, const FString& To, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> ParseIntoArray(const FString& SourceString, const FString& Delimiter, const bool CullEmptyStrings);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_StriStri(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static FString Mid(const FString& SourceString, int32 Start, int32 Count);
    
    UFUNCTION(BlueprintPure)
    static bool MatchesWildcard(const FString& SourceString, const FString& Wildcard, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintPure)
    static int32 Len(const FString& S);
    
    UFUNCTION(BlueprintPure)
    static FString LeftPad(const FString& SourceString, int32 ChCount);
    
    UFUNCTION(BlueprintPure)
    static FString LeftChop(const FString& SourceString, int32 Count);
    
    UFUNCTION(BlueprintPure)
    static FString Left(const FString& SourceString, int32 Count);
    
    UFUNCTION(BlueprintPure)
    static FString JoinStringArray(const TArray<FString>& SourceArray, const FString& Separator);
    
    UFUNCTION(BlueprintPure)
    static bool IsNumeric(const FString& SourceString);
    
    UFUNCTION(BlueprintPure)
    static bool IsEmpty(const FString& inString);
    
    UFUNCTION(BlueprintPure)
    static FString GetSubstring(const FString& SourceString, int32 StartIndex, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCharacterAsNumber(const FString& SourceString, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetCharacterArrayFromString(const FString& SourceString);
    
    UFUNCTION(BlueprintPure)
    static int32 FindSubstring(const FString& SearchIn, const FString& SubString, bool bUseCase, bool bSearchFromEnd, int32 StartPosition);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_StriStri(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool EndsWith(const FString& SourceString, const FString& InSuffix, TEnumAsByte<ESearchCase::Type> SearchCase);
    
    UFUNCTION(BlueprintPure)
    static int32 CullArray(const FString& SourceString, TArray<FString>& inArray);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_VectorToString(FVector InVec);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_Vector2dToString(FVector2D InVec);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_TransformToString(const FTransform& InTrans);
    
    UFUNCTION(BlueprintPure)
    static void Conv_StringToVector2D(const FString& inString, FVector2D& OutConvertedVector2D, bool& OutIsValid);
    
    UFUNCTION(BlueprintPure)
    static void Conv_StringToVector(const FString& inString, FVector& OutConvertedVector, bool& OutIsValid);
    
    UFUNCTION(BlueprintPure)
    static void Conv_StringToRotator(const FString& inString, FRotator& OutConvertedRotator, bool& OutIsValid);
    
    UFUNCTION(BlueprintPure)
    static FName Conv_StringToName(const FString& inString);
    
    UFUNCTION(BlueprintPure)
    static int32 Conv_StringToInt(const FString& inString);
    
    UFUNCTION(BlueprintPure)
    static float Conv_StringToFloat(const FString& inString);
    
    UFUNCTION(BlueprintPure)
    static void Conv_StringToColor(const FString& inString, FLinearColor& OutConvertedColor, bool& OutIsValid);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_RotatorToString(FRotator InRot);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_ObjectToString(UObject* InObj);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_NameToString(FName InName);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_MatrixToString(const FMatrix& InMatrix);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_IntVectorToString(FIntVector InIntVec);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_IntToString(int32 inInt);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_IntPointToString(FIntPoint InIntPoint);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_FloatToString(float InFloat);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_ColorToString(FLinearColor InColor);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_ByteToString(uint8 InByte);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_BoolToString(bool InBool);
    
    UFUNCTION(BlueprintPure)
    static bool Contains(const FString& SearchIn, const FString& SubString, bool bUseCase, bool bSearchFromEnd);
    
    UFUNCTION(BlueprintPure)
    static FString Concat_StrStr(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Vector2d(const FString& AppendTo, const FString& Prefix, FVector2D InVector2D, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Vector(const FString& AppendTo, const FString& Prefix, FVector InVector, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Rotator(const FString& AppendTo, const FString& Prefix, FRotator InRot, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Object(const FString& AppendTo, const FString& Prefix, UObject* InObj, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Name(const FString& AppendTo, const FString& Prefix, FName InName, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_IntVector(const FString& AppendTo, const FString& Prefix, FIntVector InIntVector, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Int(const FString& AppendTo, const FString& Prefix, int32 inInt, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Float(const FString& AppendTo, const FString& Prefix, float InFloat, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Color(const FString& AppendTo, const FString& Prefix, FLinearColor InColor, const FString& Suffix);
    
    UFUNCTION(BlueprintPure)
    static FString BuildString_Bool(const FString& AppendTo, const FString& Prefix, bool InBool, const FString& Suffix);
    
};

