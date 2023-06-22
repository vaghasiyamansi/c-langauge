#include<iostream>
using namespace std;
int main()
{
          int a[10],i,odd=0,even=0;
          for(i=0; i<10; i++)
          {
                 cout<<"enter the value:",i;
                 cin>>a[i];
          }
          for(i=0; i<10; i++)
          {
                 if(i%2==0)
                 {
                       even=even+a[i];
                 }
                 else{
                       odd=odd+a[i];
                 } 
          }
          cout<<"even sum:"<<even;
          cout<<"odd sum:"<<odd;
          cout<<"\n";
}