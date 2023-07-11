#include<iostream>
using namespace std;
class base1
{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class base2
{
    protected:
    int i,fact=1;
};
class derived : public base2,public base1
{
    public:
    void product()
    {
    for(i=1;i<=n;++i)
        {
            fact*=i;
            cout<<"factorial num is "<< i <<" : "<<fact<<endl;
        }
    }
};
int main()
{
    derived d;
    d.setN();
    d.product();
}