/*BASIC ARTHIMETIC OPERATION*/
#include<stdio.h>
main()
{
  int a,b,c;
  char symbol;
  printf("\n ENTER TWO NUMBERS");
  scanf("%d%d",&a,&b);
  fflush(stdin);
  printf("\n SELECT YOUR CHOICE");
  printf("\n 1.+ ADDITION\n2.- SUBTRACTION\n3.* MULTIPLICATION\n4./ DIVISION");	
  scanf("%c",&symbol);
  switch(symbol)
  {
  	case '+':
  	c=a+b;
  	printf("\n SUM IS %d",c);
  	break;
  	case '-':
  	c=a-b;
  	printf("\n DIFF IS %d",c);
  	break;
  	case '*':
  	c=a*b;
  	printf("\n PRODUCT IS %d",c);
  	break;
  	case '/':
  	c=a/b;
  	printf("\n DIVISION IS %d",c);
  	break;
    default:
    printf("\n INVALID CHOICE");
  }
}

