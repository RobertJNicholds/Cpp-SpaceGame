#include "Player.h"

Player::Player() : Entity(), health(0), ammo(0)
{

}

Player::Player(int health, int ammo) : Entity(), health(health), ammo(ammo)
{

}

Player::Player(int x, int y, int health, int ammo) : Entity(x, y, 'P'), health(health), ammo(ammo)
{

}

void Player::Update()
{
	char input;
	input = getchar();

	switch (input)
	{
	case 'w':
		y++;
		break;
	case 's':
		y--;
		break;
	case 'a':
		x--;
		break;
	case 'd':
		x++;
	}
}