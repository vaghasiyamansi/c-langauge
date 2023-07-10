#include<iostream>
using namespace std;
class base{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class derived : public base{
    int i,fact=1;
    public:
    void getN()
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
    d.getN();
}
