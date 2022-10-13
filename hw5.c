#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Bin(int n)
{
	if (n > 1)
		Bin(n / 2);
		printf("%d", n % 2);

}
int main(void)
{
	int n;
	printf("Please enter a number ");
	scanf("%d", &n);
	Bin(n);
	return 0;
}