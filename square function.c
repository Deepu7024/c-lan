#include<stdio.h>
double square(double num)
{
	return (num*num);
}
int main()
{
	int num;
	double n;
	printf(" enter the number\n");
	scanf("%d",&num);
	n=square(num);
	printf(" SQUARE OF NUMBER IS %lf",n);
	return 0;
}
