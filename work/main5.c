#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"task5.h"

int main()
{
	clock_t timeStart, timeEnd;
	double timeFib;
	FILE* fp;
	fp = fopen("fib.txt", "wt");
	int count=0, rez=0;
	
	for (count = 1; count <=40; count++)
	{
		timeStart = clock();
		rez = fib1(count);
		timeEnd = clock();
		timeFib = timeEnd - timeStart;
		printf("%d %d  %f\n", count, rez, timeFib / CLOCKS_PER_SEC);
		fprintf(fp, "%d %d %f\n", count, rez, timeFib / CLOCKS_PER_SEC);
		timeStart = 0;
		timeEnd = 0;
	    timeFib = 0;
	}

	fclose(fp);
	return 0;
}
