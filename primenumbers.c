#include <stdio.h>
#include <math.h>
int prime_check(int n);
int main()
{
	int j, low, up;
	printf("Enter Lower limit: ");scanf("%d",&low);
	printf("Enter Upper limit: ");scanf("%d", &up);
	for (j=low; j <= up; ++j)
	{
		if (j == 1)
		{
			continue;
		}
		else if (prime_check(j) == 0)
		{
			printf("%d\t", j);
		}
	}
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




