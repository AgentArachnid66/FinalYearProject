// Fill out your copyright notice in the Description page of Project Settings.

#include "read_write_text.h"

bool Uread_write_text::LoadTxt(FString FileNameA, FString&SaveTextA) {
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool Uread_write_text::SaveTxt(FString SaveTextB, FString FileNameB) {
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}

TArray<FVector2D> Uread_write_text::CircularPixels(FVector2D centre, int radius) {
    int x = centre.X;
    int y = centre.Y;
    TArray<FVector2D> result;
    for (int px = x - radius; px <= x + radius; px++) {
        for (int py = y - radius; py <= y + radius; py++) {
            int dx = x - px, dy = y - py;
            FString test = FVector2D((float)px, (float(py))).ToString();
            if (dx * dx + dy * dy <= radius * radius) {
                result.Add(FVector2D((float)px, (float)py));
                UE_LOG(LogTemp, Warning, TEXT("Position: %s"), *test);

            }
        }
    }

    return result;

}

TArray<FVector2D> Uread_write_text::CircularUV(FVector2D centre, int radius, FVector2D resolution) {
    TArray<FVector2D> uvs;

    // Iterate through pixel space, by getting the centre in UV space and finding it's
    // equilavent in pixel space and then find the extents.
    for (int i = FGenericPlatformMath::TruncToInt((centre.X * resolution.X) - radius);
        i < FGenericPlatformMath::TruncToInt((centre.X * resolution.X) + radius);
        i++) {

        for (int j = FGenericPlatformMath::TruncToInt((centre.Y * resolution.Y) - radius);
            j < FGenericPlatformMath::TruncToInt((centre.Y * resolution.Y) + radius);
            j++) {

            if (FGenericPlatformMath::Sqrt((i * i) + (j * j)) <= radius) {


                // Does the final conversion back to UV space once it has been confirmed that it is
                // a correct coordinate
                float x = i / resolution.X;
                float y = j / resolution.Y;

                // Adds it to the return value
                uvs.Add(FVector2D(x, y));

            }
            
        }

    }


    return uvs;
}

TArray<FVector2D> Uread_write_text::CircularUVLocations(TArray<FVector2D> locations, int radius, FVector2D resolution) {
    TArray<FVector2D> uvs;
    // Let's me skip locations that already exist, so don't need to regenerate them
    uvs.Append(locations);

    for (FVector2D centre : locations) {
        // Iterate through pixel space, by getting the centre in UV space and finding it's
        // equilavent in pixel space and then find the extents.
        FString test = centre.ToString();
        UE_LOG(LogTemp, Warning, TEXT("Current Centre: %s"), *test);
        for (int i = FGenericPlatformMath::TruncToInt((centre.X * resolution.X) - radius);
            i < FGenericPlatformMath::TruncToInt((centre.X * resolution.X) + radius);
            i++) {
            test = FString::FromInt(i);
            UE_LOG(LogTemp, Warning, TEXT("i: %s"), *test);
            

            for (int j = FGenericPlatformMath::TruncToInt((centre.Y * resolution.Y) - radius);
                j < FGenericPlatformMath::TruncToInt((centre.Y * resolution.Y) + radius);
                j++) {

                test = FString::FromInt(j);
                UE_LOG(LogTemp, Warning, TEXT("j: %s"), *test);

                float x = i / resolution.X;
                float y = j / resolution.Y;
                x = FMath::Clamp(x, 0.0f, 1.0f);
                y = FMath::Clamp(y, 0.0f, 1.0f);
                FVector2D loc = FVector2D(x, y);

                test = loc.ToString();
                UE_LOG(LogTemp, Warning, TEXT("UV Location: %s"), *test);

                // Skips to the next element if the array already contains this element
                if (uvs.Contains(loc)) {
                    UE_LOG(LogTemp, Warning, TEXT("Already in array, skipping"));
                    continue;
                }

                // To check if it is within the circle, I'll get the distance from the centre
                // Using Pythagoras' Theorem.

                // I need to put it into local space first so that I can get the right distance, 
                // then translate into pixel space.
                float relativeX = (x - centre.X) * resolution.X;
                float relativeY = (y - centre.Y) * resolution.Y;
                // c = (b^2 + a^2)^(1/2)
                float distance = UKismetMathLibrary::Sqrt((float)((relativeX * relativeX) + (relativeY * relativeY)));

                test = FString::SanitizeFloat(distance);
                UE_LOG(LogTemp, Warning, TEXT("Distance from centre: %s"), *test);

                if (distance <= radius) {
                    UE_LOG(LogTemp, Warning, TEXT("Adding to Array"));
                    uvs.Add(loc);
                }
            }

        }

    }

    return uvs;


}