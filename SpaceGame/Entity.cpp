#include "Entity.h"

Entity::Entity() : x(0), y(0)
{

}

Entity::Entity(int x, int y) : x(x), y(y)
{

}

void Entity::Update()
{

}

void Entity::Display()
{
	std::cout << " E " << std::endl;
}