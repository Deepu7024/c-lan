#include<stdio.h>
main()
{
	int sno,m1,m2,m3,avg;
	char sname;
	printf("ENTER STUDENT ROLL NUMBER");
	scanf("%d",&sno);
	printf("\n ENTER STUDENT NAME");
	scanf("%s",&sname);
	printf("\n ENTER STUDENT THREE SUBJECT MARKS");
	scanf("%d%d%d",&m1,&m2,&m3);
	avg=(m1+m2+m3)/3;
	if(m1>=35&&m2>=35&&m3>=35)
	{
		printf("\n STUDENT PASS");
		if(avg>=70)
		{
			printf("\n DISTINCTION");
		}
		else if (avg<=70&&avg>=50)
		{
		printf("\n FIRST CLASS");
		}
		else if (avg<=50&&avg>=35)
		{
		printf("\n SECOND CLASS");
		}
	}
	else
	printf("\n STUDENT FAIL");	
}
