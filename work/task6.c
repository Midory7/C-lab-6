#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <malloc.h>
#include<math.h>
#include"task6.h"

void fibonachi(ULL a1, ULL a2, int n)
{
	ULL sum;
	sum = a1 + a2;
	printf("%llu %llu\n", sum, a1);

	if (n-- > 0)
		fibonachi(a2, sum, n);

}

void fib2(int N)
{
	ULL a1=0, a2=1;
	fibonachi(a1,a2, N);
}
