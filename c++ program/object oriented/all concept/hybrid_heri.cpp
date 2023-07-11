#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"base called..."<<endl;
    }
};
class ABC : public base{
    public:
    ABC(){
        cout<<"ABC called..."<<endl;
    }
};
class XYZ : public base{
    public:
    XYZ(){
        cout<<"XYZ called..."<<endl;
    }
};
class PQR: public XYZ,public ABC{
    public:
    PQR(){
        cout<<"PQR called..."<<endl;
    }
};
int main()
{
    PQR P;
}
