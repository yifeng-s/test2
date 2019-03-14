#include<stdio.h>
int main()
{
	int a[1000];
	int max,min,i=0,count=0;
	for(;;i++)
	{
		scanf("%d",&a[i]);
		if((scanf("%d",&a[i]))==0)
		break;
		
	}
	int j=0,sum=0;
	max=a[0];
	min=a[0];
	for(;j<i;j++)
	{
		if(a[j]>max)
		max=a[j];
		if(a[j]<min)
		min=a[j];
		sum+=a[j];
	}
	printf("%d %d %d",max,min,sum/(i+1) );
	return 0;
 } 
