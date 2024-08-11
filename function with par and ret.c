/*FUNCTION WITH PARAMETER AND WITH RETURN VALUE*/
#include<stdio.h>
int add(int,int);
int sub(int,int);
main()
{
	int a,b,x,y;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	x=add(a,b);
	printf("\n SUM IS %d",x);
	y=sub(a,b);
	printf("\n DIFF IS %d",y);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}




