// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGEnemy.h"

void AFGEnemy::GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
AFGEnemy::AFGEnemy( const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }
FVector AFGEnemy::GetAttackLocation_Implementation(){ return FVector(); }
void AFGEnemy::PerformCustomRadialAttack_Implementation(){ }
void AFGEnemy::SetCurrentAggroTarget( AActor* newTarget){ }
void AFGEnemy::OnCurrentAggroTargetReplicated_Implementation(){ }
void AFGEnemy::OnRep_CurrentAggroTarget(){ }
