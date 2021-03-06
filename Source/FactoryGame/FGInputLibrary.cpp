// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGInputLibrary.h"

bool UFGInputLibrary::IsActionMappingUsingSameKeys( const FInputActionKeyMapping& mappingA, const FInputActionKeyMapping& mappingB){ return bool(); }
bool UFGInputLibrary::IsAxisMappingUsingSameKeys( const FInputAxisKeyMapping& mappingA, const FInputAxisKeyMapping& mappingB){ return bool(); }
bool UFGInputLibrary::IsActionAndAxisMappingUsingSameKeys( const FInputActionKeyMapping& actionMapping, const FInputAxisKeyMapping& axisMapping){ return bool(); }
FFGKeyMapping UFGInputLibrary::CreateFGKeyMappingStruct( FName actionName, bool isAxisMapping, bool positiveAxisScale, FInputEvent inputEvent, FKey keyPressed){ return FFGKeyMapping(); }
void UFGInputLibrary::NullKeyMappingWithSameKeyCombo( APlayerController* playerController, const FFGKeyMapping& keyMapping){ }
bool UFGInputLibrary::IsFGKeyMappingAvailable( APlayerController* playerController, const FFGKeyMapping& keyMapping){ return bool(); }
bool UFGInputLibrary::IsActionKeyMappingAvailable( APlayerController* playerController, const FFGKeyMapping& keyMapping){ return bool(); }
bool UFGInputLibrary::IsAxisKeyMappingAvailable( APlayerController* playerController, const FFGKeyMapping& keyMapping){ return bool(); }
FFGKeyMapping UFGInputLibrary::GetOverlappingKeyMapping( APlayerController* playerController, const FFGKeyMapping& keyMapping){ return FFGKeyMapping(); }
bool UFGInputLibrary::RebindKey( APlayerController* playerController, const FFGKeyMapping& newKeyMapping){ return bool(); }
void UFGInputLibrary::UpdateInputMappings( APlayerController* playerController){ }
FInputActionKeyMapping UFGInputLibrary::GetKeyMappingForAction( APlayerController* playerController, FName inAction, bool getGamepadKey){ return FInputActionKeyMapping(); }
FText UFGInputLibrary::GetKeyNameForAction( APlayerController* playerController, FName actionName, bool getGamepadKey, bool abbreviateKeyName ){ return FText(); }
FKey UFGInputLibrary::GetKeyForAxis( APlayerController* playerController, FName axisName, bool positiveAxisScale, bool getGamepadKey){ return FKey(); }
FText UFGInputLibrary::GetKeyNameForAxis( APlayerController* playerController, FName axisName, bool positiveAxisScale, bool getGamepadKey){ return FText(); }
FText UFGInputLibrary::GetAbbreviatedKeyName( FKey key){ return FText(); }
FText UFGInputLibrary::FormatStringWithKeyNames( APlayerController* playerController, FText textToFormat, bool abbreviateKeyNames ){ return FText(); }
bool UFGInputLibrary::IsKeyMappingRelevant( FName keyMappingName){ return bool(); }
