// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletActor.h"

// Sets default values
ABulletActor::ABulletActor()
{
    PrimaryActorTick.bCanEverTick = true;

    // Colisión como raíz
    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    CollisionSphere->InitSphereRadius(5.0f);
    CollisionSphere->SetCollisionProfileName(TEXT("BlockAllDynamic"));
    RootComponent = CollisionSphere;

    // Mesh visual
    BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
    BulletMesh->SetupAttachment(RootComponent);
    BulletMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Movimiento projectile
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->InitialSpeed = InitialSpeed;
    ProjectileMovement->MaxSpeed = InitialSpeed;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->ProjectileGravityScale = 0.1f;

    // Auto-destruir después de LifeSpan segundos
    InitialLifeSpan = LifeSpan;
}

void ABulletActor::BeginPlay()
{
    Super::BeginPlay();
}

void ABulletActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

