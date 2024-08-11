#include<stdio.h>
main()
{
	int n1,n2,i;
	printf("\n ENTER A NUMBER FOR TABLE");
	scanf("%d",&n2);
    for(n1=1;n1<=n2;n1++)
	{
	printf("\n\n");
	for (i=1;i<=10;i++)
	printf("%d*%d=%d\n",n1,i,n1*i);
	}
}
	
