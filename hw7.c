#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int i;
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	int* ptr1 = &arr1[0];
	int* ptr2 = &arr2[0];
	int temp;

	for (i = 0; i < 6; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2++;
	}

	printf("\n\naftet swap");
	printf("\narr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	return 0;
}