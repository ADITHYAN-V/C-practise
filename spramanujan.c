#include<stdio.h>
int main()
{
      long int i,j;int flag=0; 
	for (i = 1; i <= 30000; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (i%j==0)
			{
				flag=flag+1;
			}
		}
		if (flag==10)
 		{ 
			printf("%ld\t", &i);
		}	
	}
}
