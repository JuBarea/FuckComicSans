#pragma once
#include "InputComponent.h"
class AccelerationInputComponent :
	public InputComponent
{
public:
	AccelerationInputComponent(SDL_Keycode a, SDL_Keycode d,double thrts, double limit,double fctReduc);
	~AccelerationInputComponent();
	virtual void handleInput(GameObject* o, Uint32 time, const SDL_Event& event);

private:
	SDL_Keycode a;
	SDL_Keycode d;
	double thrust;
	double limit;
	double reductionFactor;
};

