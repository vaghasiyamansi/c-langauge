#include<iostream>
#include<iomanip>
using namespace std;
class result
{
         private:
         int maths,sci,eng,total;
         float per;
         public:
         void setter()
         {
                 cout<<"enter maths marks:";
                 cin>>maths;
                 cout<<"enter sci marks:";
                 cin>>sci;
                 cout<<"enter eng marks:";
                 cin>>eng;
                 cal();
         }
         void cal()
         {
                 total=maths+sci+eng;
                 per=total/3;
         }
         void getter()
         {
                 cout<<"\n";
                 cout<<"maths:"<<maths<<endl;
                 cout<<"sci:"<<sci<<endl;
                 cout<<"eng:"<<eng<<endl;
                 cout<<"total:"<<total<<endl;
                 cout<<"per:"<<setprecision(4)<<per<<endl;
         }
};
int main()
{
         result n;
         n.setter();
         n.getter();
}