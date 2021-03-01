// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "UObject/Class.h"
#include "Math/Vector2D.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "read_write_text.generated.h"

/**
 * 
 */

UCLASS()
class FINALYEARPROJECT_API Uread_write_text : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadText"))
		static bool LoadTxt(FString FileNameA, FString& SaveTextA);

		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveText"))
		static bool SaveTxt(FString SaveTextB, FString FileNameB);

		UFUNCTION(BlueprintCallable, Category = "Custom")
			/*
			* Gets the Pixel Locations in a circular area
			* @param centre  - The centre of the location
			* @param radius - The radius of the circle
			* @returns Array of the Locations
			*/
		static TArray<FVector2D> CircularPixels(FVector2D centre, int radius);

		UFUNCTION(BlueprintCallable, Category = "Custom")
			/*
			* Gets the Locations in a circular area, in UV space
			* @param centre - The centre of the area to get the location in UV Space
			* @param radius - The radius of the area in Pixel Space
			* @param resolution - The resolution of the texture
			* @returns Array of locations in the area
			*/
		static TArray<FVector2D> CircularUV(FVector2D centre, int radius, FVector2D resolution);

		UFUNCTION(BlueprintCallable, Category = "Custom")
			/*
			* Gets the area around each location
			* @param locations - The centre of each circle
			* @param radius - The radius of the circle
			* @param resolution - The resolution of the texture
			* @returns the formatted array, with only unique instances
			*/
			static TArray<FVector2D> CircularUVLocations(TArray<FVector2D> locations, int radius, FVector2D resolution);
};
