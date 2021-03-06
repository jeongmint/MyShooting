// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerMove.generated.h"


UCLASS( ClassGroup=(JM), meta=(BlueprintSpawnableComponent) )
class MYSHOOTING_API UPlayerMove : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerMove();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Player Move 제어
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	void Horizontal(float value);
	void Vertical(float value);

public:
	// 필요속성 : 이동속도
	// UPROPERTY는 매크로 함수이므로 인자를 넣을 수 있음
	// EditAnywhere 어디서든 수정 가능
	// VisibleAnyWhere 보기만 가능
	UPROPERTY(EditAnywhere, Category = "Setting", BlueprintReadOnly)
		float speed = 500;

private:
	UPROPERTY()
		class AShootPlayer* me; // class 전방선언을 하게 되면 없더라도 있는 줄 알고 인식을 하게 된다.
		// 힙이라는 메모리 공간에 올라가기 때문에
		// UPROPERTY의 사용, 스마트 포인터를 사용해서 메모리를 동적으로 해제시켜 줘야 함

		// 방향키 입력 기억을 위한 속성
	float h;
	float v;
		
};
