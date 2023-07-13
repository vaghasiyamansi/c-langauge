#include<iostream>
using namespace std;
class Fectorial{
    protected:
    int n;
    public:
    void SetVal(){
        cout<<"Enter Any Number : ";
        cin>>n;
    }
};
class To_Fect : public Fectorial{
    protected:
    int i, fect=1;
    public:
    void GetVal(){
        for(i=1;i<=n;i++){
            fect = fect * i;
            cout<<"Fectorial of "<<i<<" is : "<<fect<<endl;
        }
    }
};
int main(){
    To_Fect t;
    t.SetVal();
    t.GetVal();
}