// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h"
#include "TankAIController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController doesn't have a Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController possessing: %s"), *(ControlledTank->GetName()));
	}

	auto PlayerTank = GetPlayerTank();

	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController doesn't find a PlayerTank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController find a PlayerTank: %s"), *(PlayerTank->GetName()));
	}
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
/*
	auto PlayerTank = GetPlayerTank();

	if (PlayerTank)
	{
		GetControlledTank()->AimAt(PlayerTank->GetActorLocation());
	}*/
}

AATank* ATankAIController::GetControlledTank() const
{
	return Cast<AATank>(GetPawn());
}

AATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController) 
	{
		return Cast<AATank>(PlayerController->GetPawn());
	}

	return nullptr;
}

