#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float loan, rate;
	int day;
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &loan);
		if (loan != -1)
		{
			printf("Enter interest rate: ");
			scanf("%f", &rate);
			printf("Enter term of the loan in day: ");
			scanf("%d", &day);
			printf("The interest charge is $%.2f\n\n",loan * rate*day / 365);
		}
		else
			break;
	}
	system("pause");
	return 0;
}