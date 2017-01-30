#include<stdio.h>
#include<stdlib.h>
int main()
{
	int I_N,I_M;
	while(1)
	{
	printf("Choose any operation\n\n");
	printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.FACTORIAL\n6.a POWER b\n");
	scanf("%d",&I_N);
	if(I_N==1)
	{
		ADDITION();
		printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
		else 
		{
		printf("Invalid Entry\n");
			printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
	    }
	}
	else if(I_N==2)
	{
		SUBTRACTION();
		printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
		else 
		{
		printf("Invalid Entry");
			printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
	    }
	}
	else if(I_N==3)
	{
		MULTIPLICATION();
		printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
		else 
		{
		printf("Invalid Entry");
			printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
	    }
	}
	else if(I_N==4)
	{
		DIVISION();
		printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
		else 
		{
		printf("Invalid Entry");
	    printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
	    }
	}
	else if(I_N==5)
	{
		factorial();
			printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
		else 
		{
		printf("Invalid Entry");
	    printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
	    }		
	}
	else if(I_N==6)
	{
		POWER();
		printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
		else 
		{
		printf("Invalid Entry");
	    printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
	    }		
	}
	else
	{
		printf("Invalid Entry");
		printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
		else 
		{
		printf("Invalid Entry");
			printf("\nDo you want to continue\n1.YES\n2.NO\n");
		scanf("%d",&I_M);
		if(I_M==1)
		continue;
		else if(I_M==2)
		break;
	    }
	}
	}
	return 0;
}
ADDITION()
{   
    float F_A,F_B;
	printf("Enter two numbers\n");
	scanf("%f %f",&F_A,&F_B);
	printf("The sum of the two numbers is %f",F_A+F_B);
}
SUBTRACTION()
{
	float F_A,F_B;
	printf("Enter two numbers\n");
	scanf("%f %f",&F_A,&F_B);
	printf("The diffference of the two numbers is %f",F_A-F_B);
}
MULTIPLICATION()
{
	float F_A,F_B;
	printf("Enter two numbers\n");
	scanf("%f %f",&F_A,&F_B);
	printf("The product of the two numbers is %f",F_A*F_B);
}
DIVISION()
{
	float F_A,F_B;
	printf("Enter two numbers\n");
	scanf("%f %f",&F_A,&F_B);
	printf("The division of the two numbers is %f",F_A/F_B);
}
factorial()
{
	int I_A,i;
    unsigned long long int fact=1;
	printf("Enter any integer upto 12\n");
	scanf("%d",&I_A);
	for(i=1;i<=I_A;i++)
	{
		fact*=i;
	}
	printf("The factorial of %d is %d ",I_A,fact);
}
POWER()
{
	double I_A,I_B,i;
	 double value=1;
	printf("Enter two integer\n");
	scanf("%lf %lf",&I_A,&I_B);
	if(I_B>=0)
	{
	for(i=1;i<=I_B;i++)
	{
		value=value*I_A;
	}
}
else
{
	I_B=-I_B;
	for(i=1;i<=I_B;i++)
	{
		value=value/I_A;
	}
}
	printf("%lf raised to the power %lf is %lf",I_A,I_B,value);
}
