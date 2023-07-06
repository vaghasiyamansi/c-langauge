#include<iostream>
using namespace std;
class student
{
        private:
        char name[30];
        int rollno,eco,ba,eng,total;
        float per;

        public:
        void getstudent()
        {
                cout<<"enter rollno:";
                cin>>rollno;
                cout<<"enter name:";
                cin>>name;
                cout<<"enter eco marks:";
                cin>>eco;
                cout<<"enter ba marks:";
                cin>>ba;
                cout<<"enter eng marks:";
                cin>>eng;
                total=eco+ba+eng;
                per=float(total)/3;
        }
        void showstudent()
        {
                
                cout<<"name:"<<name<<endl;
                cout<<"rollno:"<<rollno<<endl;
                cout<<"eco marks:"<<eco<<endl;
                cout<<"ba marks:"<<ba<<endl;
                cout<<"eng marks:"<<eng<<endl;
                cout<<"total marks:"<<total<<endl;
                cout<<"per:"<<per<<endl;
        }
};
int main()
{
        int i;
        
        student s[5];
        for( i=0; i<2; i++)
        {
               s[i].getstudent();
        }
        cout<<"student details are"<<endl;
        for(i=0; i<2; i++)
        {
               s[i].showstudent();
        }
}