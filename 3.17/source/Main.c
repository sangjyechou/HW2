#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b, c, d, e;
	while (1)
	{
		printf("Enter account number (-1 to end):  ");
		scanf("%d", &a);
		if (a != -1)
		{
			printf("Enter beginning balance: ");
			scanf("%f", &b);
			printf("Enter total charges: ");
			scanf("%f", &c);
			printf("Enter total credits: ");
			scanf("%f", &d);
			printf("Enter credit limit: ");
			scanf("%f", &e);
			if (b + c - d > e)
			{
				printf("Account:\t%d\n", a);
				printf("Credit Limit:\t%.2f\n", e);
				printf("Balance:\t%.2f\n", b + d);
				printf("Credit Limit Exceeded.\n\n");
			}
			else
				printf("\n");
				continue;
		}
		else
			break;
	}
	system("pause");
	return 0;
}