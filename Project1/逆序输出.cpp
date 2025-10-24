#include <stdio.h>
int nixushuchu() {
	int num, i, yushu;
	scanf_s("%d", &num);
	while (num != 0) {
		yushu = num % 10;
		printf("%d ", yushu);
		num = num / 10;
	}
	return 0;
}