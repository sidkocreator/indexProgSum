#include<stdio.h>


int main()
{
	
	int n,sum,i,j;
	int a[50];




	printf("\nenter no. of integers: ");
	scanf("%d",&n);

	printf("\nEnter the sum of the integers: ");
	scanf("%d",&sum);


	printf("\nEnter the values: ");
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}

	
	for(i = 0; i < n; i++)
	{
		for(j = i +1; j < n; j++)
		{
			if((a[i]+a[j]) == sum)
			{
				printf("\nThe indices are found at %d and %d",i,j);
			}
		}
	}



return 0;

}
