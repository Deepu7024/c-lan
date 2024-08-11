/*FUNCTION WITHOUT PARAMETER AND WITHOUT RETURN VALUE*/
#include<stdio.h>
void add();      //FUNCTION PROTOTYPE DECLARATION
void sub();
main()
{

	add();                         // FUNCTION CALL
	sub();
}


void add()  //FUNCTION DEFINITION
{
	int a,b,c;
	printf("\n ENTER TWO NUMBERS");
	scanf("%d%d",&a,&b);
	c=a+b;
printf("\n SUM IS %d",c);
}
void sub()
{
    int a,b,c;
	printf("\n ENTER TWO NUMBERS");
	scanf("%d%d",&a,&b);
	c=a-b; 
	printf("\n diff IS %d",c);
}

