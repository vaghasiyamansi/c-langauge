#include<iostream>
using namespace std;
class test
{
         private:
         int testcode,nocandidates;
         string discription;
         int calcntr()
         {
                  return(nocandidates/100+1);
         }
         public:
         void schedule()
         {
                 cout<<"enter test code:";
                 cin>>testcode;
                 cout<<"enter discription:";
                 cin>>discription;
                 cout<<"enter nocandidates:";
                 cin>>nocandidates;
                 calcntr();
         }
         void disptest()
         {
                 cout<<"testcode:"<<testcode<<endl;
                  cout<<"discription:"<<discription<<endl;
                   cout<<"nocandidates:"<<nocandidates<<endl;
                  cout<<"no of centers:"<<calcntr()<<endl;  
         }
};
int main()
{
    test t;
    t.schedule();
    t.disptest();
}