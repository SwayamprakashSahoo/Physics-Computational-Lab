//program to sum the series 1 + 1/2 + 1/3 + ... till the sum doesn't change by more than .001
#include <stdio.h>
void main()
{
	int n = 0;
	float f=1, sum = 0;
	printf("The terms in the series are:\n  ");

	while ((1 /f) > 0.001)
	{
		printf("1/%d   ", n+1);
		sum += (1 / f);
		n+=1;
		f++;
	}

	printf("\n\nThe no. of terms in the series : %d\n", n);
	printf("The Sum of the series : %f\n", sum);
	return 0;
}