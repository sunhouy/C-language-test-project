#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 100000

int mainssss() {
	int score[NUM];
	int i, j, min, temp;
	int low, high, mid, key;

	srand(time(0));
	for (i = 0; i < NUM; i++) {
		score[i] = rand() % 1000;
	}

	for (i = 0; i < NUM - 1; i++) {
		min = i;
		for (j = i + 1; j < 100000; j++) {
			if (score[j] < score[min])
				min = j;
			if (min != i) {
				temp = score[i];
				score[i] = score[min];
				score[min] = temp;	
			}
		}

	}

	for(i=0; i<NUM;i++)
		printf("%d ", score[i]);

	printf("\nEnter key to search: ");
	scanf_s("%d", &key);

	low = 0;
	high = NUM - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (score[mid] == key) {
			break;
		}
		if (score[mid] < key) {
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	if(low<=high)
		printf("\nFound key %d at index %d\n", key, mid);
	else
		printf("\nKey %d not found\n", key);

	scanf_s("\n");
	return 0;
}