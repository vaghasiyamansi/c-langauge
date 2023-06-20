#include<stdio.h>
int main()
{
         int a=20,*p,**q;
         p=&a;
         q=&p;
         printf("value of a is:%d\n",a);
         printf("address of a is:%u\n",&a);
         printf("address of a using p is:%d\n",p);
         printf("address of p is:%u\n",&p);
         printf("value of a using p is:%d\n",*p);
         printf("value of a using q is:%d\n",**q);
} 