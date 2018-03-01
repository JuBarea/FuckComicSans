#pragma once
#include "BulletManager.h"
class StarWarsBulletsManager :
	public BulletManager , GameObject
{
public:
	StarWarsBulletsManager(SDLGame* game);
	~StarWarsBulletsManager();
	void shoot();
	void update();
	void render();

private:
	std::vector<GameObject*> bulletpool;
};

