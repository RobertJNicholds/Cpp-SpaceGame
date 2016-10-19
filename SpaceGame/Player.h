#pragma once
#include <conio.h>
#include "Entity.h"


class Player : public Entity
{
public:

	Player();
	Player(int health, int ammo);
	Player(int x, int y, int health, int ammo);
	
	void Update();	

private:	
	
	int health;
	int ammo;

};
