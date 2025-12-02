// MyActor.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
<<<<<<< HEAD
class SProject_API AMyActor : public AActor
=======
class SPROJECT_API AMyActor : public AActor

>>>>>>> 21aa610a97ad3a91294e200c46ca4cf97dbb4af4
{
	GENERATED_BODY()

public:
	AMyActor();

	virtual void BeginPlay() override;

};
