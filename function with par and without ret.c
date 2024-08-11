/*FUNCTION WITH PARAMETER AND WITHOUT RETURN VALUE*/
#include<stdio.h>
void add(int,int);      //FUNCTION PROTOTYPE DECLARATION
void sub(int,int);
main()
{
	int a,b,x,y;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	add(a,b);    //FUNCTION CALL
	sub(a,b);
}
void add(int a,int b)  //FUNCTION DEFINITION
{
	int c;
	c=a+b;
	printf("\n SUM IS %d",c);

}
void sub(int a,int b)
{
	int c;
	c=a-b;
	printf("\n DIFF IS %d",c);
}

