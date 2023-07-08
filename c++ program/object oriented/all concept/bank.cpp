#include<iostream>
using namespace std;
class Bank{
    int depo, with, balance=0;
    public:
    int Deposite(){
        cout<<"Enter Amount : ";
        cin>>depo;
        balance = balance + depo;
        //return balance;
    }
    int Withdrowl(){
        cout<<"Enter Amount : ";
        cin>>with;
        balance = balance - with;
        //return balance;
    }
    int View_bal(){
        cout<<"Your Balance Is : "<<balance<<endl;
    }
};
int main(){
    int ch;
    Bank b;
    cout<<"Press 1 for Deposite Amount"<<endl;
    cout<<"Press 2 for Withdrowl Amount"<<endl;
    cout<<"Press 3 for Display Your Balance"<<endl;
    cout<<"Press 0 for Exit";
    cout<<"\n\n";
    do{
        cout<<"Choice Your Transaction : ";
    cin>>ch;

    switch(ch){
        case 1:
            b.Deposite();
            break;
        case 2:
            b.Withdrowl();
            break;
        case 3:
            b.View_bal();
            break;
        case 0: 
            break;
        default:
            printf("Wrong Choice...");
            break;
    }
    }while(ch!=0);
}