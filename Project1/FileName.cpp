#include <stdio.h>
int sushu() {
	int num;
	
	printf("������һ��������");
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("��������");
			return 0;
		}
	}
	printf("������");
	return 0;
}