#include<iostream>
using namespace std;
class base{
    public:
    virtual void dis()=0;
};
class derived:public base{
    public:
    virtual void dis(){
        cout<<"derived class called...."<<endl;
    }
};
int main()
{
    base *p;
    derived d;
     
    p=&d;      // derived
    p->dis();
}
