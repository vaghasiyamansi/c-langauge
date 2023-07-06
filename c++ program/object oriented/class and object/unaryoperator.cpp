#include<iostream>
using namespace std;
class box
{
         int l,w,h;
         public:
         void setdata(int a,int b,int c)
         {
                 l=a;
                 w=b;
                 h=c;
         }
         int getdata()
         {
                 return l*w*h;
         }
         box operator++(int)
         {
                 box t;
                 t.l=l++;
                 t.w=w++;
                 t.h=h++;
                 return t;
         }
};
int main()
{
        box a,b;
        a.setdata(2,5,8);
        cout<<"volume of box a is:"<<a.getdata()<<endl;

        a++;
        b=a;         //3 6 9 = 162
        cout<<"volume of box b is:"<<b.getdata()<<endl;
}