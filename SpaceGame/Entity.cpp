#include "Entity.h"

Entity::Entity() : x(0), y(0), character('O')
{

}

Entity::Entity(int x, int y, char character) : x(x), y(y), character(character)
{

}

void Entity::Update()
{

}

void Entity::Display()
{
	std::cout << character;
}