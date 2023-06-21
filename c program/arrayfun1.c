#include<stdio.h>
#define n 5
int min(int a[])
{
        int min=a[0],i;
          for(int i=0; i<n; i++)
		  {
		        if(a[i]<min)
				{
		             min=a[i];
				}
		  }
		  return min;
}
int max(int a[])
{
       int max=a[0],i;
	   for(i=0; i<n; i++)
	   {
	         if(a[i]>max)
			 {
			         max=a[i];
			 }
	   }
	   return max;
}
void main()
{
        int arr[n],i,x,y;
		for(i=0; i<n; i++)
		{
		         printf("enter val:");
				 scanf("%d",&arr[i]);
		}
		x=max(arr);
		y=min(arr);
		printf("minimum number is:%d\n",x);
		printf("maximum number is:%d\n",y);
}