#include<iostream>
using namespace std;
class ABC
{
    protected:
    int n;
	public:
	void setN(){
		cout<<"enter  n:";
        cin>>n;
	}
};
class PQR:public ABC
{ 
    protected:
    int i;
};
class XYZ:public PQR
{
	public:
	int table()
		{
			for (i = 1; i <= 10; ++i)
            {
                cout << n << " * " << i <<" = "  << n * i << endl;  
            }
		}
};
int main()
{
	XYZ x;
	x.setN();
	x.table();
}
