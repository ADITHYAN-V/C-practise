//ARMSTRONG NUMBER CHECK//
#include<stdio.h>
#include <math.h>
int main()
{
	int sum = 0; int n; int temp; int d; int poww = 0; int temp2; int d2;
	printf("Enter required number : ");
	scanf("%d", &n);
	temp = n; temp2 = n;
	while (temp2 != 0)
	{
		d2 = temp % 10;
		poww = poww + 1;
		temp2 = temp2 / 10;
	}
	
	
	while (temp != 0)
	{
		d = temp % 10;
		sum = sum + pow(d, poww);
		temp = temp / 10;
	}
	if (n == sum)
	{
		printf("The number %d is an Armstrong number\n", n);
	}
	else
	{
		printf("The number %d is not an Armstrong number\n",n);
	}
}	

