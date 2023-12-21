#include<stdio.h>
int sum(int x,int y)
{
	int sum=x+y;
	return sum;
}
int sub(int x,int y)
{
	int sub=x-y;
	return sub;
}
int mul(int x,int y)
{
	int mul=x*y;
	return mul;
}
int div(int x,int y)
{
	int div=x/y;
	return div;
}
int module(int x,int y)
{
	int module=x%y;
	return module;
}

void main()
{
	int n,a,b;
	do{
		printf("Press 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for module\n");
		printf("Press 0 for exit\n\n");
		printf("Enter your choice :");
		scanf("%d",&n);
		
		switch(n)
		{
			case 1:
				printf("Enter your first no: ");
				scanf("%d",&a);
				printf("Enter your second no: ");
				scanf("%d",&b);
				printf("Addition of %d and %d number is :%d\n\n",a,b,sum(a,b));
				break;
				
			case 2:
				printf("Enter your first no: ");
				scanf("%d",&a);
				printf("Enter your second no: ");
				scanf("%d",&b);
				printf("subtraction of %d and %d number is :%d\n\n",a,b,sub(a,b));
				break;
				
			case 3:
				printf("Enter your first no: ");
				scanf("%d",&a);
				printf("Enter your second no: ");
				scanf("%d",&b);
				printf("multiplication of %d and %d number is :%d\n\n",a,b,mul(a,b));
				break;
				
			case 4:
				printf("Enter your first no: ");
				scanf("%d",&a);
				printf("Enter your second no: ");
				scanf("%d",&b);
				printf("division of %d and %d number is :%d\n\n",a,b,div(a,b));
				break;
				
			case 5:
				printf("Enter your first no: ");
				scanf("%d",&a);
				printf("Enter your second no: ");
				scanf("%d",&b);
				printf("modulas of %d and %d number is :%d\n\n",a,b,module(a,b));
				break;
				
			default:
				printf("you are exit in program");
		}
	}while(n != 0);
}
