#include<iostream>
using namespace std;
class base
{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter n:";
        cin>>n;
    }
};
class derived1:public base
{
    int i;
    public:
    void getN()
    {
        for(i=1;i<=n;++i)
    {
       cout<<"square of num is "<< i <<" : "<<i*i<<endl;
    }
    }
};
class derived2:public base
{
    int i;
    public:
	int cube()
		{
			for(i=1; i<=n; i++)
			{
				cout<<" cube of "<<i<<" is "<<" = "<<(i*i*i)<<endl;
			}
		}
};
int main(){
    derived1 d;
    d.setN();
    d.getN();

    derived2 b;
    b.setN();
    b.cube();
}