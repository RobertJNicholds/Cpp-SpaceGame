#pragma once
#include <iostream>

class Entity
{

public:

	Entity();
	Entity(int x, int y, char character);
	virtual void Update();
	virtual void Display();

	int GetX() { return x; }
	int GetY() { return y; }

protected:

	char character;
	int x;
	int y;
	
};
