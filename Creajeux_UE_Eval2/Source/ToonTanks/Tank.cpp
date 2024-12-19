// Fill out your copyright notice in the Description page of Project Settings.
#include "Tank.h"

// Sets default values
ATank::ATank()
{
    // Set this pawn to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    TankBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TankBody"));
    TankBody->SetupAttachment(RootComponent);

    TankTurret = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TankTurret"));
    TankTurret->SetupAttachment(TankBody);

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArm->SetupAttachment(TankBody);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Rotate the turret towards the mouse
    RotateTurretTowardsMouse();

}

void ATank::RotateTurretTowardsMouse()
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if (!PlayerController)
    {
        return;
    }

    FVector MouseWorldPosition, MouseWorldDirection;

    // Deproject the mouse position to world space
    if (PlayerController->DeprojectMousePositionToWorld(MouseWorldPosition, MouseWorldDirection))
    {
        // Project the mouse position onto the ground plane (at turret's Z level)
        FVector TankTurretLocation = TankTurret->GetComponentLocation();
        float Z = TankTurretLocation.Z;
        FVector MouseProjected = MouseWorldPosition + (MouseWorldDirection * ((Z - MouseWorldPosition.Z) / MouseWorldDirection.Z));

        // Calculate the direction and rotation
        FVector ToTarget = MouseProjected - TankTurretLocation;
        FRotator TargetRotation = FRotator(0.f, ToTarget.Rotation().Yaw, 0.f);

        // Set the turret's rotation
        TankTurret->SetWorldRotation(TargetRotation);
    }
}