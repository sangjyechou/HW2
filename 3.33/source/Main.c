#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, breadth,i,j;
	printf("Enter length: ");
	scanf("%d", &length);
	printf("Enter breadth: ");
	scanf("%d", &breadth);
	for (i = 1; i <= length; i++)
	{
		if (i == 1 || i == length)
		{
			for (j = 1; j <= breadth; j++)
				printf("+");
			printf("\n");
		}
		else if (i > 1 && i < length)
		{
			for (j = 1; j <= breadth; j++)
			{
				if (j == 1 || j == breadth)
					printf("+");
				else if (j > 1 && j < breadth)
					printf(" ");
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}