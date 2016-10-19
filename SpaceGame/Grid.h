#pragma once
#include <iostream>
#include "Entity.h"

class Grid
{
public: 
	
	Grid(int size_x = default_x_size, int size_y = default_y_size);
	static const int default_x_size = 20;
	static const int default_y_size = 6;

	void Display();

private:
	
	int x_size;
	int y_size;
	Entity entities[default_x_size * default_y_size];
	
};
