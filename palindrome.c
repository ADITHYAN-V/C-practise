#include<stdio.h>
#include <math.h>
int reverse(int a);
int main()
{
	int num, rev_num;
	printf("Input required number to be checked: ");
	scanf("%d", &num);
	rev_num = reverse(num); //Function reverse() was called//
	if (num == rev_num)
	{
		printf("The number %d is a Palindrome\n", num);
	}
	else 
	{
		printf("The number %d is not a Palindrome\n", num);
	}
	
	
}

int reverse(int n)
{
	int rev = 0,temp,d;
	temp = n;
	while (temp != 0)
	{
		d = temp % 10;
		rev = rev*10 + d;
		temp = temp / 10;
	}
	return rev;
}

