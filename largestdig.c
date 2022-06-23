#include <stdio.h>
int main()
{
	long int n, dig;int pos = 0;int max = 0;long int temp;int flag;
	printf("Enter required number: ");scanf("%d",&n);
	temp = n;
	while (temp != 0)
	{
		dig = temp % 10;
		pos = pos + 1;
		if (dig >= max)
		{
			max = dig;
			flag = pos;
		}
		temp = temp / 10;
	}
	printf("%ld is the largest digit at the postion %ld\n", max, pos - flag + 1);
}
