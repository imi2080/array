#include <stdio.h>
#define SIZE 5

int main(void)
{
	int scores[SIZE] = { 11, 22, 33, 44, 55 };
	int i;
	int sum = 0;

	for (i = 0; i < SIZE; i++) {
		printf("score[%d]=%d, ", i, scores[i]);
		sum += scores[i];
	}
	printf("\n");
	printf("sum = %d\n", sum);

	return 0;
}
