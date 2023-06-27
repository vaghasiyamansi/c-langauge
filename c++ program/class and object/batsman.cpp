#include<iostream>
using namespace std;
class batsman
{
         private:
         int bcode,innings,notout,runs,batavg;
         char bname[20];
         void calcavg()
         {
                 if(innings!=notout)
                      batavg=runs/(innings-notout);
                 else
                      batavg=0;     
         }
         public:

void readdata()
{
          cout<<"enter batsman code:";
          cin>>bcode;
          cout<<"enter name:";
          cin>>bname;
          cout<<"enter innings:";
          cin>>innings;
          cout<<"enter notout:";
          cin>>notout;
          cout<<"enter runs:";
          cin>>runs;
          calcavg();
}
void displaydata()
{
        cout<<"bcode:"<<bcode<<endl;
        cout<<"bname:"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"runs:"<<runs<<endl;
        cout<<"batavg:"<<batavg<<endl;
}
};
int main()
{
         batsman b;
         b.readdata();
         b.displaydata();
}