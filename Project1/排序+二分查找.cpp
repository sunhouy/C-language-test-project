#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 1000

int main() {
	int score[NUM];
	int i, j, min, temp;

	srand(time(0));
	for (i = 0; i < NUM; i++) {
		score[i] = rand() % 1000;
	}

	for (i = 0; i < NUM - 1; i++) {
		min = i;
		for (j = i + 1; j < NUM; j++) {
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

	scanf_s("%d", &i);
	return 0;
}