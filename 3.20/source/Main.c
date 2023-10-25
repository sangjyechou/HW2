#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hours;
	float rate,t;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hours);
		if (hours != -1)
		{
			printf("Enter hourly rate of the worker ($00.00): ");
			scanf("%f", &rate);
			if (hours <= 40)
				printf("Salary is $%.2f\n\n", rate*hours);
			else
			{
				t = (hours - 40)*rate / 2;
				printf("Salary is $%.2f\n\n", rate*hours+t);
			}
		}
		else
			break;
	}
	system("pause");
	return 0;
}