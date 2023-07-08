#include<iostream>
using namespace std;
class box
{  
      int x,y;
      public:
      void input()
      {
            cout<<"enter a:";
            cin>>x;
            cout<<"enter b:";
            cin>>y;
      }
      friend box find(box t);
};       
box find(box t)
{ 
        if(t.x>t.y)
        {
                cout<<"big num is a:"<<t.x<<endl;
        }
        else{
                cout<<"big num is b:"<<t.y<<endl;
        }
}
int main()
{
       box c;
       c.input();
       find(c);
}