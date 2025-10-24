#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 100

int shunxu(){
	int score[NUM] = {};
	int i;

	srand(time(0));
	for (i = 0; i < NUM; i++) {
		score[i] = rand()%100;
		printf("%d ", score[i]);
	}

	for (i = 0; i < NUM; i++) {
		if(score[i]==60)
			printf("\n找到及格分数60，位置在第%d个", i + 1);
	}

	return 0;
}
