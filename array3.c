//display elements in a array odd,even,odd,even etc
#include<stdio.h>
int main()
{
	int array[10],i,n;
printf("enter the limit\n");
scanf("%d",&n);
printf("enter array elements\n");
	for(i=1;i<n;i++)
	{
	scanf("%d",&array[i]);	
    }
  
	for(i=0;i<n;i+=2)
	{ 
	printf("%d",array[i]);
	}
	

	}
