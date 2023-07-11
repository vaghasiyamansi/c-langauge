#include<iostream>
using namespace std;
class ABC{
    protected:
    int a;
    public:
    void setA(){
        cout<<"enter a:";
        cin>>a;
    }
};
class PQR:public ABC{
    protected:
    int b;
    public:
    void setB(){
        cout<<"enter b:";
        cin>>b;
    }
};
class XYZ:public PQR{
    protected:
    int c;
    public:
    void setC(){
        cout<<"enter c:";
        cin>>c;
    }
    void get(){
        cout<<"addition of a,b and c is:"<<a+b+c<<endl;
    }
};
int main(){
    XYZ x;
    x.setA();
    x.setB();
    x.setC();
    x.get();
}