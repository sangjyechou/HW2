#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int paycode,hw,items;
	float a, b, c, d;
	while (1)
	{
		printf("Enter your code(1.Managers 2.hourly workers 3.commission workers 4.pieceworkerrs -1. to end): ");
		scanf("%d", &paycode);
		if (paycode != -1)
		{
			switch (paycode)
			{
			case 1:
				printf("Enter your weekly salary($00.00):");
				scanf("%f", &a);
				printf("Your weekly salary is $%.2f\n\n",a);
				break;
			case 2:
				printf("Enter your worked hours:");
				scanf("%d", &hw);
				printf("Enter hourly rate of the worker ($00.00):");
				scanf("%f", &b);
				if (hw <= 40)
					printf("Your weekly salary is $%.2f\n\n", hw*b);
				else
					printf("Your weekly salary is $%.2f\n\n", hw*b+(hw-40)*b/2);
				break;
			case 3:
				printf("Enter your gross weekly sales($00.00):");
				scanf("%f", &c);
				printf("Your weekly salary is $%.2f\n\n", c*0.057 + 250);
				break;
			case 4:
				printf("How much dose you produce items($00.00):");
				scanf("%f", &d);
				printf("How many have you made:");
				scanf("%d", &items);
				printf("Your weekly salary is $%.2f\n\n", d*items);
				break;
			default:
				break;
			}
		}
		else
			break;
	}
	system("pause");
	return 0;
}