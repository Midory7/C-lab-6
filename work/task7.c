#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"task7.h"
char lab[M][N] = { "############################",
"#           #   #          #",
"##########  #   #          #",
"#           #   #######  ###",
"# ######    #              #",
"#      #    #   ######    ##",
"#####  #    #   #         ##",
"       #        #     ######",
"############################" };

void printLab(int x, int y)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (x == i && y == j)
				printf("%c", lab[i][j]);

			else if (lab[i][j] == 'x')
			{
				lab[i][j] = ' ';
				printf("%c", lab[i][j]);
				lab[i][j] = 'x';
			}
			else
				printf("%c", lab[i][j]);
		}
		printf("\n");
	}
}
void place(int x, int y)
{
	printLab(x, y);
	printf("LAB[X][Y] = %c\n", lab[x][y]);
	if (y == 0 && lab[x][y] == ' ')
	{
		lab[x][y] = 'x';
		printLab(x, y);
		printf("Exit\n");
		exit(0);
	}
	else if (lab[x][y] == ' ')
	{
		lab[x][y] = 'x';
		place(x - 1, y);
		place(x, y + 1);
		place(x + 1, y);
		place(x, y - 1);
	}

	return 0;
}
