#include "StarWarsBulletsManager.h"
#include "GameComponent.h"
#include "FillRectRenderer.h"
#include "BasicMotionPhysics.h"


StarWarsBulletsManager::StarWarsBulletsManager(SDLGame* game) : GameObject(game)
{
}


StarWarsBulletsManager::~StarWarsBulletsManager()
{
}

void StarWarsBulletsManager::render()
{
	for (GameObject* it : bulletpool) { it->render(0); }
}

void StarWarsBulletsManager::update()
{
	for (GameObject* it : bulletpool) { it->update(0); }//Recorremos la lista con el update
}

void StarWarsBulletsManager::shoot()
{
	GameComponent *bullet = new GameComponent(this->getGame());//creamos bala
	bullet->setHeight(2.0);//Set size
	bullet->setWidth(2.0);
	bullet->addRenderComponent(new FillRectRenderer());//Añadimos render
	bullet->addPhysicsComponent(new BasicMotionPhysics());//añadimos movimiento
	bulletpool.push_back(bullet);//La metemos en la bulletpool
}
