#include <stdio.h>
int mainz()
{
	int num, sum = 0;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for(int k=1; k<=num-i; k++)
		{
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = num - 1; i > 0; i--)
	{
		for(int k=1; k<=num-i; k++)
		{
			printf(" ");
		}

		for (int j = 2 * i - 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
