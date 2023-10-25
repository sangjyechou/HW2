#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a;
	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &a);
		if (a != -1)
			printf("Salary is: %.2f\n\n", a*0.09+200);
		else
			break;
	}
	system("pause");
	return 0;
}