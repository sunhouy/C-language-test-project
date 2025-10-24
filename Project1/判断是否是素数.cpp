#include <stdio.h>
int sushu() {
	int num;
	
	printf("请输入一个整数：");
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("不是素数");
			return 0;
		}
	}
	printf("是素数");
	return 0;
}