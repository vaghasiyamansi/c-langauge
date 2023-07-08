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
    public:
    void getN()
    {
        cout<<"value of n is:"<<n<<endl;
    }
};
int main()
{
    derived d;
    d.setN();
    d.getN();
}

//square of up to n number
//factorial number
