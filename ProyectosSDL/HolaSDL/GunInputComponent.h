#pragma once
#include "InputComponent.h"
#include "StarWarsBulletsManager.h"
class GunInputComponent :
	public InputComponent
{
public:
	GunInputComponent(StarWarsBulletsManager* pool, SDL_Keycode k);
	~GunInputComponent();

private:
	StarWarsBulletsManager * bulletPool;
	SDL_Keycode key;
};

