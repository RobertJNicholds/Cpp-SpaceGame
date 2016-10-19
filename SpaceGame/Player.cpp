#include "Player.h"

Player::Player() : Entity(), health(0), ammo(0)
{

}

Player::Player(int health, int ammo) : Entity(), health(health), ammo(ammo)
{

}

Player::Player(int x, int y, int health, int ammo) : Entity(x, y), health(health), ammo(ammo)
{

}