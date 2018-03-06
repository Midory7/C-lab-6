#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"task4.h"

#define TWO 2

int main()
{
	int power = 0;
	char *arr;
	int sizeArr = 0;
	int sum_C = 0, sum_R = 0;
	clock_t timeStart, timeEnd, timeC, timeR;

	printf("Enter power\n");
	scanf("%d", &power);
	sizeArr = pow(TWO, power); 

	arr= (char*)malloc(sizeArr * sizeof(int));
	
	srand(time(0));
	for (int i = 0; i<sizeArr; i++)
	{
		arr[i] = rand() % 10;
		//printf("arr[%d] = %d\n", i, arr[i]);
	}

	timeStart = 0;
	timeEnd = 0;
	
	timeStart = clock();
	sum_C=sumC(arr, sizeArr);
	printf("sum_C=%d\n",sum_C);
	timeEnd = clock();
	timeC = timeEnd - timeStart;
	printf("timeC=%f\n", (double)timeC / CLOCKS_PER_SEC);
	
	timeStart = 0;
	timeEnd = 0;

	timeStart = clock();
	sum_R = sumR(arr, sizeArr);
	printf("sum_R=%d\n", sum_R);
	timeEnd = clock();
	timeR = timeEnd - timeStart;
	printf("timeR=%f\n", (double)timeR / CLOCKS_PER_SEC);

	free(arr);
	return 0;
}
