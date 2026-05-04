// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SystemUtils.generated.h"

/**
 * */
UCLASS()
class MYPROJECT3_API USystemUtils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "System Execution")
    static void RunBatFile(FString FilePath);
};