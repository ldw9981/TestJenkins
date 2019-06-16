// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadWriteTextFile.generated.h"

/**
 * 
 */
UCLASS()
class TESTJENKINS_API UReadWriteTextFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
	static bool LoadText(FString FileName, FString& SaveText);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
	static bool SaveText(FString SaveText, FString FileName);
};
