#include<stdio.h>
#include<conio.h>

void main()
{
	int n,count=0;
	printf("Enter The Value of N :");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("The Sum Of Digit In Number = %d",count);
	
}