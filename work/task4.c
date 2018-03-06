#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

long long sumC(char *arr, int len)
{
	//printf("len =%d\n", len);
	int sum = 0;
	for (int i = 0; i < len; i++)
	{   
		//printf("arr[%d] = %d\n", i, arr[i]);
		sum += arr[i];
	}
	//printf("SumC=%d\n", sum);
	return sum;
}

long long sumR(char *arr, int len)
{
	int sum = 0;
	if (len > 0)
		sum = arr[len-1] + sumR(arr, len - 1);
	return sum;
}
