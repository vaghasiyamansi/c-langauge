#include<iostream>
using namespace std;
class base
{
    protected:
    int m;
    public:
    void setM(){
        cout<<"enter m:";
        cin>>m;
    }
};
class derived1:public base
{
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
    void addition(){
        cout<<"addition of m and n is:"<<m+n<<endl;
    }
};
class derived2:public base
{
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
    void product(){
        cout<<"product of m and n is:"<<m*n<<endl;
    }
};
int main(){
    derived1 d;
    d.setM();
    d.setN();
    d.addition();

    derived2 b;
    b.setM();
    b.setN();
    b.product();
}



