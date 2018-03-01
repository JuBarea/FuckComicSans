#include "AccelerationInputComponent.h"


AccelerationInputComponent::AccelerationInputComponent(SDL_Keycode a, SDL_Keycode d, double thrts, double limit, double fctReduc) :a(a), d(d), thrust(thrts), limit(limit),reductionFactor(fctReduc) {

}



AccelerationInputComponent::~AccelerationInputComponent()
{
}

void AccelerationInputComponent::handleInput(GameObject* o, Uint32 time, const SDL_Event& event){
	Vector2D vec = o->getVelocity();
	if (event.type == SDL_KEYDOWN) {
		if (event.key.keysym.sym == a) {
			vec = o->getVelocity() + (o->getDirection()*thrust);
			if (vec.magnitude() > limit){
				vec.normalize();
				vec = vec * limit;
			}
		}
		else if (event.key.keysym.sym == d) {
			vec = vec*reductionFactor;
			if (vec.magnitude() < 0.1) vec.set(0, 0);
		}
		o->setVelocity(vec);
	}
	
		
}