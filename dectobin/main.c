#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	long long a;
	int i,temp,sum;
	clrscr();
	printf("Enter Decimal number:");
	scanf("%ld",&a);
	sum=0;
	for(i=0;a>0;i++)
	{
	   temp=a%2;
	   sum+=(int)pow(10,i)*temp;
	   a=a/2;
	}
	printf("Binary equivalent is:%d",sum);
	getch();
}
