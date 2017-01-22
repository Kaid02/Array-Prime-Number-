/*
write a program to check whether the entered number is prime is not.
*/
#include<stdio.h>
int main()
{
	int a,i,b,c=0;
	
	printf("Enter any number : ");
	scanf("%d",&a);
	
	for(i=2;i<a/2;i++)
	{
		b=a%i;
		if(b==0)
		{
			c++;
		}
	}
	if(c==0)
	{
		printf("The given number is Prime Number");
	}
	else
	{
		printf("The given number is NOT Prime Number");	
	}
	return 0;
	}			
