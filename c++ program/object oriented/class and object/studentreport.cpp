#include<iostream>
using namespace std;
class report
{
         int adno,marks[5],total=0,i;
         char name[20];
         float avg;
         float giv_avg()
         {
                avg=total/5;
         }
         public:
         int readinfo()
         {
                 cout<<"enter add no.:";
                 cin>>adno;
                 cout<<"enter name:";
                 cin>>name;
                 for(i=0; i<5; i++)
                 {
                       switch(i)
                       {
                               case 0:
                               cout<<"enter english marks:";
                               break;
                               case 1:   
                               cout<<"enter science marks:";
                               break;
                               case 2:
                               cout<<"enter maths marks:";
                               break;
                               case 3:
                               cout<<"enter gujrati marks:";
                               break;
                               case 4:
                               cout<<"enter hindi marks:";
                               break;  
                       }
                       cin>>marks[i];
                       total=total+marks[i];
                 }
                       giv_avg();
         }
         int displayinfo()
         {
                 cout<<"\n";
                 cout<<"admin no:"<<adno<<endl;
                 cout<<"admin name:"<<name<<endl;
                 for(i=0; i<5; i++)
                 {
                         switch(i)
                         {
                             case 0:
                                     cout<<"english:"<<marks[0]<<endl;
                             break;
                             case 1:
                                     cout<<"science:"<<marks[1]<<endl; 
                             break;
                             case 2:
                                     cout<<"maths:"<<marks[2]<<endl;                   
                             break;
                             case 3:
                                     cout<<"gujrati:"<<marks[3]<<endl;
                             break;
                             case 4:
                                     cout<<"hindi:"<<marks[4]<<endl;
                             break;                

                         }
                 }
                 cout<<"total marks:"<<total<<endl;
                 cout<<"your average marks is:"<<avg;
         }
};
int main()
{
     report r;
     r.readinfo();
     r.displayinfo();
}     
