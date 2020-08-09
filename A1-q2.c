//program to print the factorial of a number

#include <stdio.h>
void main()
{
	int n, fac = 1, i = 1;
	printf("Please enter a number:\n");
	scanf_s("%d", &n);

	if (n < 0)
	{
		do
		{
			printf("Please enter a valid number:\n");
			scanf_s("%d", &n);
		} while (n < 0);
	}

	while (n > 0 && i <= n)
	{
		fac = fac * i;
		i++;
	}

	printf("The factorial for the number %d is: %d \n", n, fac);
	return 0;
}
