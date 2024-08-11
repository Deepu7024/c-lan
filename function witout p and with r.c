/*FUNCTION WITHOUT PARAMETER AND WITH RETURN VALUE*/
#include<stdio.h>
int add();      //FUNCTION PROTOTYPE DECLARATION
int sub();
main()
{
	int x,y;
	x=add();    // FUNCTION CALL
	printf("\n SUM IS %d",x);
	y=sub();
	printf("\n DIFF IS %d",y);
}


int add()  //FUNCTION DEFINITION
{
	int a,b,c;
	printf("\n ENTER TWO NUMBERS");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
int sub()
{
	int a,b,c;
	printf("\n ENTER TWO NUMBERS");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}


