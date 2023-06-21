


#include<stdio.h>
struct bill
{
       int number;
       char name[50];
       int r,q,a,d,b,n;
       float gst;
};
int main()
{
        struct bill a[10];
        int i;
        for(i=0; i<2; i++)
        {
               printf("enter number:");
               scanf("%d",&a[i].number);
               printf("enter name:");
               scanf("%s",&a[i].name);
               printf("enter rate:");
               scanf("%d",&a[i].r);
               printf("enter qty:");
               scanf("%d",&a[i].q); 
        }
        printf("\n\nnumber\tname\trate\tqty\tamt\tdisc\tbillamt\tgst\t\tnetbill");
        for(i=0; i<2; i++)
        {
               a[i].a=a[i].r*a[i].q;
               a[i].d=a[i].a*5/100;
               a[i].b=a[i].a-a[i].d;
               a[i].gst=(float)a[i].b*18/100;
               a[i].n=a[i].b+a[i].gst;
               printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%.2f\t\t%d",a[i].number,a[i].name,a[i].r,a[i].q,
               a[i].a,a[i].d,a[i].b,a[i].gst,a[i].n);
        }



}