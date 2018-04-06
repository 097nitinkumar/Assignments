//correct output for only 5 digits of octadecimal no.
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	long long a;
	int i,temp,sum;
	clrscr();
	printf("Enter Octal number:");
	scanf("%ld",&a);
	sum=0;
	for(i=0;a>0;i++)
	{
	   temp=a%10;
	   sum+=(int)pow(8,i)*temp;
	   a=a/10;
	}
	printf("Decimal equivalent is:%d",sum);
	getch();
}
