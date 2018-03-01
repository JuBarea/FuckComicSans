#pragma once
#include "InputComponent.h"
class RotationInputComponent :
	public InputComponent
{
public:
	RotationInputComponent(float angle,SDL_Keycode counterClockwise,SDL_Keycode Clockwise);
	virtual ~RotationInputComponent();
	virtual void handleInput(GameObject* o, Uint32 time, const SDL_Event& event);
private:
	float angle_;
	SDL_Keycode counterClockwise_;
	SDL_Keycode Clockwise_;
	
};

