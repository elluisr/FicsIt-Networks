// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWorldSettings.h"

#if WITH_EDITOR
void AFGWorldSettings::CheckForErrors(){ }
void AFGWorldSettings::PostEditChangeProperty(  FPropertyChangedEvent& propertyChangedEvent){ }
#endif 
#if WITH_EDITOR
void AFGWorldSettings::HandleMapChanged(  UWorld* newWorld, EMapChangeType mapChangeType){ }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
AFGWorldSettings::AFGWorldSettings(){ }
void AFGWorldSettings::BeginDestroy(){ Super::BeginDestroy(); }
void AFGWorldSettings::PostActorCreated(){ }
void AFGWorldSettings::PostLoad(){ Super::PostLoad(); }
void AFGWorldSettings::PreInitializeComponents(){ }
void AFGWorldSettings::NotifyBeginPlay(){ }
void AFGWorldSettings::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGWorldSettings::PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGWorldSettings::PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGWorldSettings::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGWorldSettings::GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects){ }
bool AFGWorldSettings::NeedTransform_Implementation(){ return bool(); }
bool AFGWorldSettings::ShouldSave_Implementation() const{ return bool(); }
void AFGWorldSettings::UpdateWorldBounds(){ }
void AFGWorldSettings::OnActorSpawned( AActor* actor){ }
