#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class bank{
    char name[100],address[100],Y;
    int balance;
    public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_money();
    
    };
    void bank :: open_account(){
        cout<<"Enter your full name :: ";
        cin.ignore();
        cin.getline(name,100);
        cout<<"Enter your full address :: ";
        cin.ignore();
        cin.getline(address,100);
        cout<<"What type of account you want to open saving (s) or current (c) ";
        cin>>Y;
        cout<<"Enter amount for deposite :: ";
        cin>>balance;
        cout<<"Your account is created \n";
        }
        void deposite :: diposite_money()
        {
          int a;
          cout<<"Enter how much you deposite :: "; 
          cin>>a;
          balance+=a;
          cout<<"Total ammout you deposite :: \t "<< balance;



        }
int main()
{
    cout<<"1) Open account\n";
    cout<<"2) Deposite money\n";
    cout<<"3) Withdraw money\n";
    cout<<"4) Display account\n";
    cout<<"5) Exit";

    getch();
    return 0;
    
}

