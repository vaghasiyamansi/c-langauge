#include<iostream>
using namespace std;
class base1{
    protected:
    int m;
    public:
    void setM(){
        cout<<"enter m:";
        cin>>m;
    }
};
class base2{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter n:";
        cin>>n;
    }
};
class derived:public base2,public base1{
    public:
    void product(){
        cout<<"product of m and n is:"<<m*n<<endl;
    }
};
int main()
{
    derived d;
    d.setM();
    d.setN();
    d.product();
}