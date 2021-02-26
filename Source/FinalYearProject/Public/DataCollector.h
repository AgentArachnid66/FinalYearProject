// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DataCollector.generated.h"


UCLASS()
class FINALYEARPROJECT_API ADataCollector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADataCollector();

	// Reference to the turret to get the score
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = 'Data Collection')
		int test;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
