// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Turret.generated.h"

UCLASS()
class TOONTANKS_API ATurret : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TurretBody;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TurretHead;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Rotate();

	UPROPERTY(BlueprintReadWrite, Category = "Detection")
	bool Detect;
};
