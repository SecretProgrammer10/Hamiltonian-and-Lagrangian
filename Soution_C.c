#include<stdio.h>
#include<stdlib.h>

int main()
{
	long int n = 0, count = 0;
	scanf("%li", &n);
	int a[n], result[1000000] = {0}; 
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[j]>a[i])
			{
				if(result[i]!=0)
				{
					result[i]=0;
					count--;
				}
				break;
			}
			result[i]=a[i];
			count++;
		}
	}
	result[n-1] = a[n-1];
	count++;
	for(int i=0; i<n; i++)
	{
		if(result[i]!=0)
		{
			printf("%d ", result[i]);
			count--;
		}
		if(count==0)
		{
			break;
		}
	}
	return 0;
}
