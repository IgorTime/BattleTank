// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ATank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	AATank* GetControlledTank() const;
	AATank* GetPlayerTank() const;
};
