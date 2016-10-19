#include "Grid.h"

Grid::Grid(int size_x, int size_y) : x_size(size_x), y_size(size_y)
{

}

void Grid::Display()
{
	for (int x = 0; x < x_size; ++x)
	{
		for (int y = 0; y < y_size; ++y)
		{
			std::cout << "   0   ";
		}

		std::cout << "\n";
	}
}