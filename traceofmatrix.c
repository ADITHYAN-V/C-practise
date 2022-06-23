#include <stdio.h>
int main()
{
	int m1[10][10]; int sum,x1,y1;
	printf("Enter the dimensions of the matrix: ");
	scanf("%d%d", &x1, &y1);
	for (int i=0; i<x1; i++)
                {
                        for (int j=0; j<y1; j++)
                        {
                                printf("Enter element : ");
                                scanf("%d", &m1[i][j]);
                        }
                }
	if (x1) 
	{
		for(int i=0; i<x1; i++)
		{
			for(int j=0; j < y1; j++)
			{
				if (i == j)
				{
					sum = sum + m1[i][j];
				}
			}
		}	
	}	
	printf("Trace of the given matrix is %d\n", sum);
}		
