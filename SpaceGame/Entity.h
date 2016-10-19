#pragma once
#include <iostream>

class Entity
{

public:

	Entity();
	Entity(int x, int y);
	virtual void Update();
	virtual void Display();

protected:

	int x;
	int y;
	
};
