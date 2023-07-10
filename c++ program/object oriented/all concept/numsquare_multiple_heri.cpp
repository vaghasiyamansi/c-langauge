#include<iostream>
using namespace std;
class Base1{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter n:";
        cin>>n;
    }
};
class Base2{
    protected:
    int i=1;
};
class derived:public Base1,public Base2{
    public:
    void product(){
        for(;i<=n;++i)
        {
               cout<<"square of num is "<<i<<" : "<<i*i<<endl;
        }
    }
};
int main()
{
    derived d;
    d.setN();
    d.product();
}