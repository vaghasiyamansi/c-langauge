#include<stdio.h>
int newfun(int n)
{
           printf("winding phase:%d\n",n);
		   if(n<3)
		   {
		         newfun(++n);
		   }
		   printf("unwinding phase:%d\n",n);
}
int main()
{
      newfun(1);
}