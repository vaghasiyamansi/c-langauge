#include<iostream>
using namespace std;
class bank{
    string name;
    int bal;
    public:
    void setdata(string name,int bal)
    {
        this->name=name;
        this->bal=bal;
    }
    void get()
    {
        cout<<"name:"<<name<<endl;
        cout<<"balance:"<<bal<<endl;
    }
};
int main(){
    bank b;
    b.setdata("hello...",1234);
    b.get();
}
