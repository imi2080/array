#include <stdio.h>
#define SIZE 5
int main1(void)
{
	int scores[SIZE] = { 11, 22, 33, 44, 55 };
	int i;
	int sum = 0;

	for (i = 0; i < SIZE; i++) {
		sum += scores[i];
		printf("scores[%d] = %d\n", i, scores[i]);
	}
	printf("sum of scores = %d\n", sum);
	return 0;
}