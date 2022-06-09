#include <stdio.h>
//#include <math.h>
int factorial(int a);
int main()
{
        int d, n, temp, sum = 0;
        printf("Enter required number: ");
        scanf("%d",&n);
        temp = n;
        while (temp > 0)
        {
                d = temp % 10;
                sum = sum + factorial(d);
                temp = temp / 10;
        }
        if (sum == n)
        {
                printf("The number %d is a Krishnamoorthy number or a Strong number\n", n);
        }
        else
        {
                printf("The number %d is NOT a Krishamoorthy number or a Strong number %d\n", n);
        }
}
int factorial(int a)
{
	int i,fac = 1;
	for (i=1; i <= a; ++i)
	{
		fac = fac * i;
	}
	return fac;
}
