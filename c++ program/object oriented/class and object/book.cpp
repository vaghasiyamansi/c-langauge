#include<iostream>
using namespace std;
class book
{
          int bookno;
          char booktitle[20];
          float price,value;
          float n;
          float total_cost()
          {
                 return(price*n);
          }
          public:
          float input()
          {
                  cout<<"enter bookno:";
                  cin>>bookno;
                  cout<<"enter booktitle:";
                  cin>>booktitle;
                  cout<<"enter price:";
                  cin>>price;
                  cout<<"enter n:";
                  cin>>n;
                  value=total_cost();
          }
          float purchase()
          {
                  cout<<"enter book no:"<<bookno<<endl;
                  cout<<"enter book title:"<<booktitle<<endl;
                  cout<<"enter price:"<<price<<endl;
                  cout<<"value:"<<value<<endl;
          }
};
int main()
{
        book b;
        b.input();
        b.purchase();
}