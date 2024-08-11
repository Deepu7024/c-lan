#include<stdio.h>
main()
{
	int eid;
    char ename[10];
	float sal,da,ta,hra,gross,it,net;
	printf("ENTER EMPLOYEE ID");
	scanf("%d",&eid);
	printf("\n ENTER EMPLOYEE NAME");
	scanf("%s",&ename);
	printf("\n ENTER EMPLOYEE SALARY");
	scanf("%f",&sal);
	if(sal<=10000)
	{
	da=sal*0.01;
	ta=sal*0.02;
	hra=sal*0.03;
	it=0;
	}
	else if(sal>=10000&&sal<=25000)
	{
	da=sal*0.02;
	ta=sal*0.03;
	hra=sal*0.04;
	it=sal*0.04;
	}
	else if(sal>=25000&&sal<=50000)
	{
	da=sal*0.03;
	ta=sal*0.04;
	hra=sal*0.05;
	it=sal*0.06;
	}
    else
    {
    da=sal*0.04;
	ta=sal*0.05;
	hra=sal*0.06;
	it=sal*0.07;
	}
	gross=sal+da+hra+ta;
	net=gross-it;
	printf("\n------------------------------------");
	printf("\n EMPLOYEE PAY SLIP");
	printf("\n------------------------------------");
	printf("\n EMPLOYEE ID              :%d",eid);
	printf("\n EMPLOYEE NAME            :%s",ename);
	printf("\n EMPLOYEE SALARY          :%f",sal);
	printf("\n DEARANCE ALLOWANCE       :%f",da);
	printf("\n HOUSING RENT ALLOWANCE   :%f",hra);
	printf("\n TRAVEL ALLOWANCE         :%f",ta);
	printf("\n INCOME TAX               :%f",it);
	printf("\n\n NET SALARY               :%f",net);
			
}
