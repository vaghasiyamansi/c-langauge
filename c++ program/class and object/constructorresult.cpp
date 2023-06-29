#include<iostream>
using namespace std;
class result
{
         int rno,maths,sci,eng,total;
         char name[20];
         float per;
         public:
         result()
         {
                 cout<<"enter roll no:";
                 cin>>rno;
                 cout<<"enter name:";
                 cin>>name;
                 cout<<"enter maths marks:";
                 cin>>maths;
                 cout<<"enter sci marks:";
                 cin>>sci;
                 cout<<"enter eng marks:";
                 cin>>eng;
                 calcul();
         }
         void calcul()
         {
                 total=maths+sci+eng;
                 per=(float)total/3;
                 disp();
         }
         void disp()
         {
                 cout<<"\n";
                 cout<<"roll num is:"<<rno<<endl;
                 cout<<"name is:"<<name<<endl;
                 cout<<"maths marks is:"<<maths<<endl;
                 cout<<"sci marks is:"<<sci<<endl;
                 cout<<"english marks is:"<<eng<<endl;
                 cout<<"total marks is:"<<total<<endl;
                 cout<<"your percentage is:"<<per<<endl;
         }
};
int main()
{
        result r;
}