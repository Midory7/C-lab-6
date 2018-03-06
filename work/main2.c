#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"task2.h"


int main()
{
	ULL num=0;
	UI max_count=0;

	num = seqCollatz(&max_count);
	printf("For number - %llu\n", num);
	printf("Max length - %u\n", max_count);

	return 0;
}
