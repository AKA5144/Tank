#include "Tank.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ATank::ATank()
{
    PrimaryActorTick.bCanEverTick = true;

    TankBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TankBody"));
    RootComponent = TankBody;

    TankTurret = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TankTurret"));
    TankTurret->SetupAttachment(TankBody);

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ArmSpring"));
    SpringArm->SetupAttachment(TankBody);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);

    MovementComponent = CreateDefaultSubobject<UPawnMovementComponent>(TEXT("MovementComponent"));
}

void ATank::BeginPlay()
{
    Super::BeginPlay();
}

void ATank::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}
