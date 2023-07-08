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
         
         friend box operator++(box m)
         {
                 box t;
                 t.l=++m.l;
                 t.w=++m.w;
                 t.h=++m.h;
                 return t;
         }
};
int main()
{
         box b,a,c;
         a.setdata(3,3,3);
         cout<<"box a volume is:"<<a.getdata()<<endl;

         ++c;
}