#include <stdio.h>
#include <math.h>
// Prime number theorem states that the number of prime numbers less than given number N is approximately N/log(N)//
//This a program is just a way to verify the theorem//
int prime_check(int n);
int main()
{
	int j, up;int count = 0;int pi_n;
	printf("Enter limit: ");scanf("%d", &up);
	for (j=low; j <= up; ++j)
	{
		if (j == 1)
		{
			continue;
		}
		else if (prime_check(j) == 0)
		{
			printf("%d\t", j);
			count = count + 1
		}
	}
	printf("\n\nThe total number of primes from 2 to %d is %d\n", low, count);
	printf(""
}

int prime_check(int n)
{
	int flag = 0, i; 
	for (i=2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			flag = 1;
			return 1;
			break;
		}
		else
		{
			flag = 0;
		}

	}
	if (flag == 0)
	{
		return 0;
	}
}
 
