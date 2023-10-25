#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float a,j;
	int i;
	a = 5000;
	j = 0.1;
	for (i = 0; i < 15; i++)
	{
		
		a = a * (1+j);
		j = j + 0.005;
		printf("%d year is %f\n", i + 1,a);
	}
	system("pause");
	return 0;
}