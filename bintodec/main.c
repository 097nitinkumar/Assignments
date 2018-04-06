#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	long long a;
	int i,temp,sum;
	clrscr();
	printf("enter binary number:");
	scanf("%ld",&a);
	sum=0;
	for(i=0;a>0;i++)
	{
	   temp=a%2;
	   sum+=(int)pow(2,i)*temp;
	   a=a/10;
	}
	printf("Decimal equivalent is:%d",sum);
	getch();
}
