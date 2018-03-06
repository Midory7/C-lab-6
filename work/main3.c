#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"task3.h"

#define N 10000

int main()
{
	char buf[N] = { "\0" };
	UI value;
	//char *p;
	int count = 0;

	printf("Enter the number from 1 to 1000\n");

	while (!scanf("%d", &value))
	{
		printf("Enter the number from 1 to 1000\n");
		scanf("%d", &value);
	}

	//int2str(&buf[count],value);
	count = schet(value);
	int2str(&buf[count], value);
	 //printf("STR_P: %s\n", p);
	//printf("Str:%s\n", int2str(&buf[count], value));
	printf("STR:= %s\n", buf);
	return 0;
}
