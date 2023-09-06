#include <stdio.h>
#define SIZE 10

int main2(void)
{
	int prices[SIZE] = { 14, 56, 87, 34, 39, 92, 28, 2, 67, 21 };
	int i, min;

	for (i = 0; i < SIZE; i++) {
		printf("prices[%d] = %d,  ", i, prices[i]);
	}

	min = prices[0];
	for (i = 1; i < SIZE; i++) {
		min = (min > prices[i]) ? prices[i] : min;
	}
	printf("\nmin = %d\n", min);
	return 0;
}