#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"task3.h"

#define N 10000
char* int2str(char *buf, UI value)
{	
	*buf-- = value % 10 + '0';
	if ((value/10) > 0)
	{
		value = value/10;
		int2str(buf, value);
	}
	return ++buf;	
}

int schet(int n)
{
	int count = 0;
	while (n = n / 10)
		count++;
	return count;
}
