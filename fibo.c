#include <stdio.h>
#include <math.h>
int main()
{
	int n; int fiblow = 0, fibhigh = 1; int fib = 0;
	printf("Enter the number upto which user wants: ");
	scanf("%d",&n); 
	do	
	{
		fib = fiblow + fibhigh;
		if (fib <= n)
		{
			printf("%d\n", fib);
		}
		fiblow = fibhigh;
		fibhigh = fib;
	}
	while (fib <= n);	
}
	
