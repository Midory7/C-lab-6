#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include"task6.h"

int main()
{
	int count;
	ULL num = 0;

	printf("Enter N fibonachi:");
	scanf("%d", &count);
	clock_t timeStart, timeEnd;
	double timeFib;
	timeStart = clock();
	fib2(count);
	timeEnd = clock();
	timeFib = timeEnd - timeStart;
	printf("Time %f\n", timeFib / CLOCKS_PER_SEC);
	
	return 0;
}
