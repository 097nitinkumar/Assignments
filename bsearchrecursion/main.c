#include <stdio.h>
int arr[100],flag=0,search,mid;
void bsearch(int left,int right)
{
	mid=(left+right)/2;
		if(left<=right)
		{
			if(arr[mid]<search)
			left=mid+1;
			else if(arr[mid]>search) right=mid-1;
			else if(arr[mid]==search)
			{
				 flag=mid+1;
			}
		       if(!flag)bsearch(left,right);
		}

}
void main()
{
	int i,n,left,right,found,mid;
	clrscr();
	printf("Enter size of array:");
	scanf("%d",&n);
	left=0;
	right=n-1;
	printf("Enter elements of array in sorted order:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter elements to be searched:");
	scanf("%d",&search);
	bsearch(left,right);
	if(!flag)
		printf("Element not found");
	else    
    printf("Element found at:%d",flag);
	getch();
}
