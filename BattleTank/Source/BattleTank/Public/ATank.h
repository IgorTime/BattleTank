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
	AATank();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void AimAt(FVector HitLocation);

private:	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
