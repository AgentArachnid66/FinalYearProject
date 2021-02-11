// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreAndDataCollector.h"

// Sets default values for this component's properties
UScoreAndDataCollector::UScoreAndDataCollector()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UScoreAndDataCollector::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UScoreAndDataCollector::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


TArray<FColor> UScoreAndDataCollector::GetPixelData(UTextureRenderTarget2D* TextureRenderTarget) {
	// Creates Texture2D to store TextureRenderTarget content
	UTexture2D *Texture = UTexture2D::CreateTransient(TextureRenderTarget->SizeX, TextureRenderTarget->SizeY, PF_B8G8R8A8);
#if WITH_EDITORONLY_DATA
	Texture->MipGenSettings = TMGS_NoMipmaps;
#endif
	Texture->SRGB = TextureRenderTarget->SRGB;

	// Read the pixels from the RenderTarget and store them in a FColor array
	TArray<FColor> SurfData;
	FRenderTarget *RenderTarget = TextureRenderTarget->GameThread_GetRenderTargetResource();
	RenderTarget->ReadPixels(SurfData);

	// Lock and copies the data between the textures
	void* TextureData = Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	const int32 TextureDataSize = SurfData.Num() * 4;
	FMemory::Memcpy(TextureData, SurfData.GetData(), TextureDataSize);
	Texture->PlatformData->Mips[0].BulkData.Unlock();
	// Apply Texture changes to GPU memory
	Texture->UpdateResource();

	return SurfData;
}