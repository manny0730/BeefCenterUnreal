// Fill out your copyright notice in the Description page of Project Settings.

#include "SystemUtils.h"
#include "GenericPlatform/GenericPlatformProcess.h"

void USystemUtils::RunBatFile(FString FilePath)
{
    // Changed the second argument from nullptr to TEXT("")
    FPlatformProcess::CreateProc(*FilePath, TEXT(""), true, false, false, nullptr, 0, nullptr, nullptr);
}