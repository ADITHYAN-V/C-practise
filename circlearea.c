#include <stdio.h>
#include <math.h>
int main()
{
	int xc,yc,xp,yp,radius;float area;
	printf("Enter x coordinate of centre :");
	scanf("%d", &xc);
	printf("Enter y coordinate of centre :");
	scanf("%d", &yc);
	printf("Enter x coordinate of point :");
	scanf("%d", &xp);
	printf("Enter y coordinate of centre :");
	scanf("%d", &yp);
	radius = sqrt(pow(xp-xc,2) + pow(yp-yc, 2));
	area = radius * radius * M_PI;
	printf("Area = %f\n", area);
}

