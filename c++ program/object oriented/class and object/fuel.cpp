#include<iostream>
using namespace std;
class fuelcal
{
        int fno;
        float distance,fual;
        string destination;
        int calfual()
        {
                if(distance<=1000)
                     fual=500;
                else if(distance>1000 && distance<=2000)
                     fual=1100;
                else  
                     fual=220;          
        }
        public:
        void feedifo()
        {
                 cout<<"enter flight number:";
                 cin>>fno;
                 cout<<"enter destination:";
                 cin>>destination;
                 cout<<"enter distance:";
                 cin>>distance;
                 calfual();
        }
        void showinfo()
        {
                 cout<<"flight number is:"<<fno<<endl;
                 cout<<"destination:"<<destination<<endl;
                 cout<<"distance:"<<distance<<endl;
                 cout<<"fual:"<<calfual()<<endl;
        }
};
int main()
{
        fuelcal f;
        f.feedifo();
        f.showinfo();
}