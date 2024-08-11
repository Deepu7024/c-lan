/*BASIC ARTHIMETIC OPERATION*/
#include<stdio.h>
main()
{
  int a,b,c,choice;
  printf("\n ENTER TWO NUMBERS");
  scanf("%d%d",&a,&b);
  printf("\n SELECT YOUR CHOICE");
  printf("\n 1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION");
  scanf("%d",&choice);	
  switch(choice)
  {
  	case 1:
  	c=a+b;
  	printf("\n SUM IS %d",c);
  	break;
  	case 2:
  	c=a-b;
  	printf("\n DIFF IS %d",c);
  	break;
  	case 3:
  	c=a*b;
  	printf("\n PRODUCT IS %d",c);
  	break;
  	case 4:
  	c=a/b;
  	printf("\n DIVISION IS %d",c);
  	break;
        default:
        printf("\n INVALID CHOICE");
  }
}
