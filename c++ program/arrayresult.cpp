#include<iostream>
using namespace std;
int main()
{
      int a[5],b[5],c[5],i,t,per;
      for(i=0; i<5; i++)
      {
             cout<<"enter the eco marks:"<<a[i];
             cin>>a[i];
      }
      for(i=0; i<5; i++)
      {
             cout<<"enter the stat marks:"<<b[i];
             cin>>b[i];
      }
      for(i=0; i<5; i++)
      {
             cout<<"enter the eng marks:"<<c[i];
             cin>>c[i];
      }
             cout<<"eco\tstat\teng\ttotal\tper";
      for(i=0; i<5; i++)
      {
             t=a[i]+b[i]+c[i];
             per=a[i]+b[i]+c[i]/3;
             cout<<"\n\t\t\t\t\t:",a[i],b[i],c[i],t,per;
             if(a[i]<35||b[i]<35||c[i]<35)
             {
                    cout<<"fail...";
             }
             else if(60>per && per<=75)
             {
                     cout<<"grade b";
             }
             else if(45>per && per<59)
             {
                     cout<<"grade c";
             }
             else if(35>per && per<44)
             {
                     cout<<"grade d";
             }
             else if(76>per && per<99)
             {
                     cout<<"grade a";
             }
      }

}