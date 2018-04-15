// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ATank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"


UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public: 
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
		 
	AATank* GetControlledTank() const;

private:
	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(OUT FVector &OutHitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, OUT FVector &OutLookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, OUT FVector &OutHitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = 0.5f;

	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = 0.3333f;

	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000.0f;
};
