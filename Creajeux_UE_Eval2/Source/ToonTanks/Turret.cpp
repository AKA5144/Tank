// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TurretBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBody"));
	RootComponent = TurretBody;

	TurretHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretHead"));
	TurretHead->SetupAttachment(TurretBody);
}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ATurret::Rotate();
}

// Called every frame
void ATurret::Rotate()
{
    // Récupérer le DefaultPawn
    APawn* DefaultPawn = UGameplayStatics::GetPlayerPawn(this, 0);
    if (!DefaultPawn)
    {
        return; // Si pas de DefaultPawn, ne rien faire
    }

    // Récupérer la position du DefaultPawn et de la tourelle
    FVector PawnLocation = DefaultPawn->GetActorLocation();
    FVector TurretLocation = TurretHead->GetComponentLocation();

    // Calculer la distance entre la tourelle et le DefaultPawn
    float Distance = FVector::Dist(PawnLocation, TurretLocation);

    // Si la distance est inférieure au seuil, commencer la rotation de la tourelle
    if (Distance < 1000.f)
    {
        Detect = true;
        // Calculer la direction entre la tourelle et le DefaultPawn
        FVector Direction = (PawnLocation - TurretLocation).GetSafeNormal();

        // Créer une rotation à partir de la direction calculée
        FRotator TargetRotation = Direction.Rotation();

        // Obtenir la rotation actuelle de la tourelle
        FRotator CurrentRotation = TurretHead->GetComponentRotation();

        // Appliquer uniquement le yaw (rotation autour de l'axe vertical), garder le pitch et roll inchangés
        FRotator NewRotation = FRotator(CurrentRotation.Pitch, TargetRotation.Yaw, CurrentRotation.Roll);

        // Appliquer la rotation à la tourelle
        TurretHead->SetWorldRotation(NewRotation);
    }
    else
    {
        Detect = false;
    }
}