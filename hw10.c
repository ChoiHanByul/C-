# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct city
{
	char Name[20];
	char Contry[20];
	int Population;
}City;

int main(void)
{
	City arr[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		scanf_s("%s", arr[i].Name, sizeof(arr[i].Name));
		printf("Country> ");
		scanf_s("%s",arr[i].Contry, sizeof(arr[i].Contry));
		printf("Population> ");
		scanf_s("%d", &arr[i].Population);
	}
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n", i+1,arr[i].Name, arr[i].Contry, arr[i].Population);
	}
	return 0;
}