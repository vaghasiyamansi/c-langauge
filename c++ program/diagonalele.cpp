#include<iostream>
using namespace std;
int main()
{
         int a[5][5],i,j,n=0,n1=0,n2=0;
         for(i=0;i<3;i++)
         {
                for(j=0;j<3;j++)
                {
                        cout<<"enter valuea:",a[i][j];
                        cin>>a[i][j];
                }
         }
         for(i=0;i<3;i++)
         {
                for(j=0;j<3;j++)
                {
                        cout<<a[i][j];
                        if(i==j)
                        {
                               n=n+a[i][j];
                        }
                        else if(i<j)
                        {
                               n1=n1+a[i][j];
                        }
                        else{
                               n2=n2+a[i][j];
                        }
                }
                cout<<"\n";
         }
         cout<<"\ndiagonal element total:"<<n;
         cout<<"\nupper triangle total:"<<n1;
         cout<<"\nlower triangle total:"<<n2;
}       