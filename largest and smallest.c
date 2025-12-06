//Largest and smallest number in a list
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Please enter a positive number of the elements\n");
		return 1;
	}
	int a[n],i;
	printf("Enter %d integer values:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max = a[0];
	int min = a[0];
	for(i=1;i<n;i++)
	{ 
	   if(a[i]>max)
	   {
	   	  max=a[i];
	   }
	   if(a[i]<min)
	   {
	   	  min = a[i];
	   }
	}
	printf("The largest number is: %d\n",max);
	printf("The smallest number is: %d\n",min);
	return 0;
}
