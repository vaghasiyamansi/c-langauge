#include<iostream>
using namespace std;
class test
{
        public:
        int volume(int l)
        {
                return l*l*l;
        }
        int volume(int l,int w,int h)
        {
                return l*w*h;
        }
        double volume(double r)
        {
                return (4/3)*3.14*r*r*r;
        }
        double volume(int b,double h)
        {
                return(b*b)*h;
        }
        double volume(double b,double h)
        {
                return 0.33*b*h;
        }
        double volume(double r,int h)
        {
                return 3.14*r*r*h;
        }
};
int main()
{
        test t;
        cout<<"volume of cube:"<<t.volume(2)<<endl;
        cout<<"volume of rectangle:"<<t.volume(2,5,6)<<endl;
        cout<<"volume of sphere:"<<t.volume(3.5)<<endl;
        cout<<"volume of prism:"<<t.volume(2,3.5)<<endl;
        cout<<"volume of pyramid:"<<t.volume(3.3,4.5)<<endl;
        cout<<"volume of cylinder:"<<t.volume(3.3,5)<<endl;
}
     
