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
    void display_account();
    
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

       void bank:: display_account(){
         cout<<"Your full name ::\t" <<name;
         cout<<"Your address :: \t "<<address;
         cout<<"Type of account that you open :: \t"<<Y;
         cout<<"Amount you deposite :: \t"<<balance;
       }
          void bank :: withdraw_money(){
              float amount;
              cout<<"\n withdraw :: ";
              cout<<"Enter amount to withdraw ::";
              cin>>amount;
              balance = balance - amount;
              cout<<"Now total amount is left :: "<<balance;

          }

int main()
{
  int ch,x;
  bank obj;
  do{

    cout<<"1) Open account\n";
    cout<<"2) Deposite money\n";
    cout<<"3) Withdraw money\n";
    cout<<"4) Display account\n";
    cout<<"5) Exit";
    cout<<"Select the option from above \n";
    cin>>ch;
    switch(ch){
      case 1:<<"1) open account \n";
      obj.open_account();
      break;

      case 2:<<"2) deposite money \n";
      obj.deposite_money();
      break;

      case 3:
         cout<<"3) withdraw money : \n";
         obj.withdraw_money();
         break;

         case 4: "4) display account \n";
         obj.display_account();
         break;
          case 5:
          if(ch==5){
            exit(1);
          }
          default:
                        cout<<"This is not exist try again \n ";
                      }
                        cout<<"\n do you want to select next option then press :: Y \n ";
                        cout<<"if you want to exit then press :: N ";
              x=getch();
              if(x=='n' ||x=='N')
                  exit(0);
  }while(x=='y' || x=='Y');
    getch();
    return 0;
    
}

