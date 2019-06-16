// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWriteTextFile.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UReadWriteTextFile::LoadText(FString FileName, FString& SaveText)
{
	return FFileHelper::LoadFileToString(SaveText, *(FPaths::GameDir() + FileName));
}

bool UReadWriteTextFile::SaveText(FString SaveText, FString FileName)
{
	return FFileHelper::SaveStringToFile(SaveText, *(FPaths::GameDir() + FileName));
}