#include "RotationInputComponent.h"


RotationInputComponent::RotationInputComponent(float angle, SDL_Keycode counterClockwise, SDL_Keycode Clockwise)
: angle_(angle), counterClockwise_(counterClockwise), Clockwise_(Clockwise) {}


RotationInputComponent::~RotationInputComponent()
{
}

void RotationInputComponent::handleInput(GameObject* o, Uint32 time, const SDL_Event& event)
{

	Vector2D direction = o->getDirection();

	if (event.type == SDL_KEYDOWN) {
		if (event.key.keysym.sym == counterClockwise_) {
			direction.rotate(angle_);
		}
		else if (event.key.keysym.sym == Clockwise_) {
			direction.rotate(-angle_);
		}
		
	}
	o->setDirection(direction);
}