// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "BulletActor.generated.h"

UCLASS()
class CLASS66_API ABulletActor : public AActor
{
    GENERATED_BODY()

public:
    ABulletActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Colisión
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USphereComponent* CollisionSphere;

    // Mesh visual de la bala
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* BulletMesh;

    // Movimiento del proyectil
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UProjectileMovementComponent* ProjectileMovement;

    // Vida útil de la bala (segundos)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bullet")
    float LifeSpan = 3.0f;

    // Velocidad inicial
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bullet")
    float InitialSpeed = 3000.0f;
};