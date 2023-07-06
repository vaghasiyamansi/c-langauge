#include<iostream>
using namespace std;
class area
{
        public:
        area()
        {
               cout<<"\tarea of shape is:"<<endl;
        }
        area(int side)
        {
               cout<<"area of square:"<<side*side<<endl;
        }
        area(double red)
        {
               cout<<"area of circle:"<<3.14*(red*red)<<endl;
        }
        area(int width , int height)
        {
               cout<<"area of rectangle:"<<width*height<<endl;
        }
        area(double b,double h)
        {
               cout<<"area of triangle:"<<0.5*b*h<<endl;
        }
};        
 int main()
        {
               area area0 , area1(4) , area2(3.6) , area3(10,20) , area4(3.4,5.1);
        }

