#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void StandardDev(int* param, int len)
{
	int i;
	double aver,add=0,var=0,StD;
	for (i = 0; i < len; i++)
		add += param[i];
	printf("%lf", add);
	aver = add / 5;
	printf("%lf", aver);

	for (i = 0; i < len; i++)
		var += pow(param[i] - aver, 2)/5;

	printf("%lf\n", var);
	StD=sqrt(var);
	printf("Standard Deviation = %.3lf", StD);
}

int main(void)
{
	int arr[5];
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	StandardDev(arr, sizeof(arr) / sizeof(int));
	return 0;
}