#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5];
	int evennum[ ] = { 0 }, oddnum[ ] = { 0 };
	int p = 0, q = 0, i;

	printf("Please input five integers:");
	scanf("%d %d %d %d %d", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);

	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evennum[p] = arr[i];
			p++;
		}
		else
		{
			oddnum[q] = arr[i];
			q++;
		}
	}

	printf("\n");
	printf("Odd numbers : ");
	for (i = 0; i < q; i++)
		printf("%d ", oddnum[i]);
	printf("\n");
	printf("Even numbers : ");
	for (i = 0; i < p; i++)
		printf("%d ", evennum[i]);

	return 0;

}