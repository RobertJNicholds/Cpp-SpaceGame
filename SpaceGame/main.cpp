#include <iostream>
#include <Windows.h>
#include "Console.h"
#include "Player.h"

void SetFontSize(int font_size);

int main()
{
	bool running = true;

	Console grid;
	grid.ShowConsoleCursor(false);
	grid.SetFontSize(20);

	Player player(3, 3, 5, 5);

	grid.InsertEntity(player);

	while (running)
	{
		grid.ClearScreen();
		grid.Display();
		//update

	}

	return 0;
}


