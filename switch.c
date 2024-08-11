/* MENU DRIVEN PROGRAM*/
#include<stdio.h>
main()
{
 int choice;
 printf("\n ------------------------------");
 printf("\n WELCOME TO CAT COMPUTER POINT"); 
 printf("\n ------------------------------");
 printf("\n\n COURCES OFFERED");
 printf("\n1.C LANGUAGE\n2.C++ LANGUAGE\n3.PYTHON");
 printf("\n SELECT YOUR COURSE");
 scanf("%d",&choice);
 switch(choice)
 {
 	case 1:
 	printf("\n SELECTED COURSE:C");
 	printf("\n COURSE DURATION:45 DAYS");
 	printf("\n COURSE FEES:3600");
 	break;
 	case 2:
 	printf("\n SELECTED COURSE:C++");
 	printf("\n COURSE DURATION:45 DAYS");
 	printf("\n COURSE FEES:5000");
 	break;
 	case 3:
 	printf("\n SELECTED COURSE:PYTHON");
 	printf("\n COURSE DURATION:60DAYS");
 	printf("\n COURSE FEES:5000");
 	break;
 	default:
 	printf("\n INVALID CHOICE");
 }
}

