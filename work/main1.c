#include <stdio.h>
#include <stdlib.h>
#include"task1.h"

int main()
{
	char arr[M][M] = {NULL};
	clearCanvas();
	drawFractal(arr, M / 2 + 1, M / 2 + 1, SIZE);
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
		{
			putchar(arr[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
