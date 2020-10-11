// Fill out your copyright notice in the Description page of Project Settings.

#include "read_write_text.h"

bool Uread_write_text::LoadTxt(FString FileNameA, FString&SaveTextA) {
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool Uread_write_text::SaveTxt(FString SaveTextB, FString FileNameB) {
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}
