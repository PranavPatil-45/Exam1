#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter Value a : ");
	scanf("%d",&a);
	printf("Enter Value b : ");
	scanf("%d",&b);
	printf("Enter Value c : ");
	scanf("%d",&c);
	
	if(a<b)//a and b
	{
		if(a<c)
		{
			printf("a is Minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	{
		printf("b is minimum");
	}
}