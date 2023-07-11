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
    int i;
};
class derived : public base2,public base1
{
    public:
    void product()
    {
        for (i = 1; i <= 10; ++i)
        {
            cout << n << " * " << i <<" = "  << n * i << endl;  
        }
    }
};
int main()
{
    derived d;
    d.setN();
    d.product();
}
