#include "GunInputComponent.h"



GunInputComponent::GunInputComponent(StarWarsBulletsManager* pool, SDL_Keycode k): bulletPool(pool), key(k)
{
}


GunInputComponent::~GunInputComponent()
{
}
