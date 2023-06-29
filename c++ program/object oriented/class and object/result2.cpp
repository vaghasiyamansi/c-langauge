#include<iostream>
using namespace std;
class student
{
         private:
         int admno;
         char sname[20];
         float english,maths,science;
         float total;
         float ctotal()
         {
                  return english+maths+science;
         }
         public:
         void takedata()
         {
                  cout<<"enter admno:";
                  cin>>admno;
                  cout<<"enter name:";
                  cin>>sname;
                  cout<<"enter english marks:";
                  cin>>english;
                  cout<<"enter maths marks:";
                  cin>>maths;
                  cout<<"enter science marks:";
                  cin>>science;
                  total=ctotal();
         }
         void showdata()
         {
                   cout<<"admno:"<<admno<<endl;
                   cout<<"name:"<<sname<<endl;
                   cout<<"english marks:"<<english<<endl;
                   cout<<"maths marks:"<<maths<<endl;
                   cout<<"science marks:"<<science<<endl;
                   cout<<"total marks:"<<total<<endl;
         }
};
int main()
{
        student s;
        s.takedata();
        s.showdata();
}
