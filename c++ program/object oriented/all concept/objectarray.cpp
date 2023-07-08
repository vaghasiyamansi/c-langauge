#include<iostream>
using namespace std;
class test
{
         int n;
         public:
         void setn();
         void getn()
         {
                 cout<<"volume of n:"<<n<<endl;
         }
};
void test::setn()
{
        cout<<"enter n:";
        cin>>n;
}
int main()
{
        test a[5];
        int i;
        for(i=0; i<2; i++)
        {
                cout<<"no:"<<i+1<<endl;
                a[i].setn();
        }
        for(i=0; i<2; i++)
        {
                cout<<"no:"<<i+1<<endl;
                a[i].getn();
        }

}

