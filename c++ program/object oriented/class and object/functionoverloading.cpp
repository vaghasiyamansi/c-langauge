#include<iostream>
using namespace std;
class test
{
         public:
         int work(int a)
         {
                return a*a;
         }
         int work(int a,int b)
         {
                return b%a;
         }
         double work(double a,double b)
         {
                return b-a;
         }
         double work(double a)
         {
                return a+a;
         }
};
int main()
{
         test t;
         cout<<"squre is:"<<t.work(10)<<endl;
         cout<<"addition is:"<<t.work(2.7)<<endl;
         cout<<"sub is:"<<t.work(2.3)<<endl;
         cout<<"rem is:"<<t.work(2,3)<<endl;
}