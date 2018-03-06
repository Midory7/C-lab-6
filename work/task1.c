#include <stdio.h>
#include <stdlib.h>
#include"task1.h"

void clearCanvas()
{
	for (int i = 0; i<M; i++)
	{
		for (int j = 0; j<M; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

int power(int size)
{
	int i;
	int val = 1;
	for (i = 0; i < size; i++)
		val *= 3;

	return val;
}

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
	{
		arr[x][y] = '*';
	}
	else
	{
		arr[x][y] = '*';
		drawFractal(arr, x, y + power(size - 1), size - 1);
		drawFractal(arr, x, y - power(size - 1), size - 1);
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x + power(size - 1), y, size - 1);
		drawFractal(arr, x - power(size - 1), y, size - 1);
	}
}
