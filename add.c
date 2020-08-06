//program to add numbers from 1 to n(n<=101) using loop
#include <stdio.h>
void main()
{
	int n, sum = 0;
	printf("Please enter an integer between 1 to 100:");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		sum += i;
	printf("\nThe sum of integers from 1 to %d is: %d \n", n,sum);
	return 0;
}