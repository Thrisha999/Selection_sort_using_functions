#include<stdio.h>
void main()
{
	int a[100],i,j,n;
	printf("enter the size of ana array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	printf("\nbefore sorting the array elements are:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
	printf("\nAfter sorting the array elements are:\n");
	selectionsort(a,n);
}
void selectionsort(int a[],int n)
{
	int i,j,min,temp=0;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
