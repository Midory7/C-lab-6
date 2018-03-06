#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"task2.h"
#define MAX 19

ULL seqCollatz(UI *maxlen)
{
	*maxlen = 0;
	ULL num = 0;
	ULL min;
	for (min = 2; min <= MAX; min++)
	{
		UI count = 0;
		count = collatz(min);	

		if (count > *maxlen)
		{
			*maxlen = count;
			num = min;
		}
	}
	return num;
}

UI collatz(ULL num)
{
	static UI count=0;
	
	if (num % 2 == 0)
	{
		num = num / 2;
	}
	else
	{
		num = num * 3 + 1;
	}
	count++;
	
	if (num > 1)
		collatz(num);
	
	return count;
}
