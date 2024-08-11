/*BANKING APPLICATION IN C LANGUAGE*/
#include<stdio.h>
void deposit(int);
void withdraw(int);
int showbal();
int balance;
main()
{
	int choice,amt;
	balance=0;
	do
	{
		printf("\n----------WELCOME-----------");
		printf("\n---------------------");
		printf("\n 1.DEPOSUT\n2.WITHDRAW\n3.SHOW BALANCE\n4.EXIT(press '0')");
		printf("\n SELECT YOUR CHOICE");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("\n ENTER THE AMOUNT YOU WANT TO DEPOSIT");
			scanf("%d",&amt);
			deposit(amt);
			break;
			case 2:
			printf("\n ENTER THE AMLOUNT YPOU WANT TO WITHDRAW");
			scanf("%d",&amt);
			if (balance-amt<=500)
			printf("\n INSUFFICIENT MIN BALANCE");
			else 
			withdraw(amt);
			break;
			case 3:
			amt = showbal();
			printf("\n BALANCE IS %d",amt);
			break;
		}
	}
	while (choice!=0);
}
void deposit(amt)
{
	balance+=amt;
	printf("\n BALANCE IS %d",balance);
}
void withdraw(amt)
{
	balance=balance-amt;
	printf("\n BALANCE IS %d",balance);
}
int showbal()
{
	return balance;
}
