#include <stdio.h>
int main()
{
	int m1[10][10], m2[10][10]; int x1, y1, x2, y2;
	int m3[10][10];
	printf("Enter the dimension of m1: ");
	scanf("%d%d", &x1, &y1);
	printf("Enter the dimension of m2: ");
	scanf("%d%d", &x2, &y2);
	if(x1==x2 && y1==y2)
	{
		for (int i=0; i<x1; i++)
		{
			for (int j=0; j<y1; j++)
			{
				printf("Enter element of m1: ");
				scanf("%d", &m1[i][j]);
			}
		}
		for (int i=0; i < x2; i++)
		{
			for (int j=0; j < y2; j++)
			{
				printf("Enter elements of m2: ");
				scanf("%d", &m2[i][j]);
			}
		} 	
		for( int k=0; k < x1; k++)
		{
			for (int l=0; l < y1; l++)
			{
				m3[k][l] = m1[k][l] + m2[k][l]; 
			}
		}
		for ( int q=0; q < x1; q++)
		{
			for ( int w=0; w < y1; w++)
			{
				printf("%d\t", m3[q][w]);	
			}
		}
	}
}
