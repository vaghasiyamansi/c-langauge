#include<iostream>
using namespace std;
int main()
{
        int i,j,sp=25;
        for(i=5; i>=1; i--)
        {
                for(j=1; j<=sp; j++)
                       cout<<(" ");
                for(j=1; j<=i; j++)
                {
                    cout<<("*");
                }   
                sp++;
                cout<<"\n";     
        }
} 