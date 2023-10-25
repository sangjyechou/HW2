#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (j = 1; j < 5 - i; j++)
				printf(" ");
			for (j = 0; j < 2 * i + 1; j++)
				printf("*");
			printf("\n");
		}
		else
		{
			for (j = 1; j <= i - 4; j++)
				printf(" ");
			for (j = 7; j >= 2 * (i - 5) + 1; j--)
				printf("*");
			printf("\n");
		}
	}
	system("pause");
	return 0;
}