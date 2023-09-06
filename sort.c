#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i, j;
	int list[SIZE] = { 55, 33, 77, 11, 8 };

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE-1-i; j++) {
			if (list[j] > list[j + 1]) {
				int tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < SIZE; i++) {
		printf("list[%d]=%d\t,", i, list[i]);
	}
	printf("\n");
	return 0;
}