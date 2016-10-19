#include "Console.h"

Console::Console(int size_x, int size_y) : x_size(size_x), y_size(size_y)
{
	for (int x = 0; x < default_x_size; ++x)
	{
		for (int y = 0; y < default_y_size; ++y)
		{
			entities[x][y] = Entity(x, y, 'O');
		}
	}
}

void Console::Display()
{
	for (int x = 0; x < x_size; ++x)
	{
		for (int y = 0; y < y_size; ++y)
		{			
			entities[x][y].Display();
		}		
		std::cout << "\n";
	}	
}

void Console::Update()
{
	for (int x = 0; x < y_size; ++x)
	{
		for (int y = 0; y < x_size; ++y)
		{
			entities[x][y].Update();
		}
	}
}

void Console::InsertEntity(Entity entity)
{
	entities[entity.GetX()][entity.GetY()] = entity;
}

void Console::ClearScreen()
{
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

void Console::ShowConsoleCursor(bool show_flag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = show_flag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

void Console::SetCursorPosition(int x, int y)
{	
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}

void Console::SetFontSize(int font_size)
{
	CONSOLE_FONT_INFOEX info = { 0 };
	info.cbSize = sizeof(info);
	info.dwFontSize.Y = font_size;
	info.FontWeight = FW_NORMAL;
	wcscpy_s(info.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}