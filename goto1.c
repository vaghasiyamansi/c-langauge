#include<stdio.h>
int main()
{
         int n,count;
         printf("enter a number to print table:");
         scanf("%d",&n);
         count=1;
         start:
         if(count<=10)
         {
               printf("%d*%d=%d\n",n,count,n*count);
               count++;
               goto start;
         }
}