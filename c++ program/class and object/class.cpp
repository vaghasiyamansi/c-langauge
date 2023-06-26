#include<iostream>
using namespace std;
class test
{
         private:
         int a;
         public:
         void setter()
         {
                cout<<"enter a:";
                cin>>a;
         }
         void getter()
         {
                cout<<"value of a:"<<a<<endl;
         }
};
int main()
{
         test z;
         z.setter();
         z.getter();
}