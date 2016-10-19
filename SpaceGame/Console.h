#pragma once
#include <iostream>
#include <Windows.h>
#include "Entity.h"

class Console
{
public: 
	
	Console(int size_x = default_x_size, int size_y = default_y_size);
	static const int default_x_size = 20;
	static const int default_y_size = 6;

	void Display();
	void Update();

	void InsertEntity(Entity new_entity);

	void ClearScreen();
	void ShowConsoleCursor(bool showFlag);
	void SetCursorPosition(int x, int y);	
	void SetFontSize(int font_size);

private:
	
	
	int x_size;
	int y_size;
	Entity entities[default_x_size][default_y_size];
	
};
