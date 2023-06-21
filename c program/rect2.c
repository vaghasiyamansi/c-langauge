#include<stdio.h>
int fact(int n)
{
        if(n==1)
		     return 1;
		else
		   return n*fact(n-1);
}
int main()
{
         int x=fact(5);
		 printf("factorial is:%d",x);
}