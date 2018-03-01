#pragma once
#include "GameObject.h"

class BulletManager
{
public:
	BulletManager();
	~BulletManager();
	virtual void shoot(GameObject* o, Vector2D p, Vector2D v) = 0;
};

