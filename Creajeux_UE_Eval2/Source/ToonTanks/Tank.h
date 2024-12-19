// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Tank.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UPawnMovementComponent;

UCLASS()
class TOONTANKS_API ATank : public APawn
{
    GENERATED_BODY()

public:
    // Sets default values for this pawn's properties
    ATank();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* TankBody;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* TankTurret;

    UPROPERTY(VisibleAnywhere)
    USpringArmComponent* SpringArm;

    UPROPERTY(VisibleAnywhere)
    UCameraComponent* Camera;

    UPROPERTY(VisibleAnywhere)
    UPawnMovementComponent* MovementComponent;
public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;



private:


};
