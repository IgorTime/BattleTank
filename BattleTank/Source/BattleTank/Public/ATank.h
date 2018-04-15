// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ATank.generated.h"

UCLASS()
class BATTLETANK_API AATank : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector HitLocation);

private:	
	AATank();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
