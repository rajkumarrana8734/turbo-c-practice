#include<iostream.h>
#include<conio.h>

class account
{
  public:
  int acc_no;
  long int balance;
  void si();
};

void account::si()
{
   int r,t;
   cout<<"enter balance:"<<"\n";
   cin>>balance;
   cout<<"enter rate"<<"\n";
   cin>>r;
   cout<<"enter time"<<"\n";
   cin<<t;
   cout<<"simple interest"<<(balance*r*t)/100;
}
void main()
{
    account a1;
    clrscr();
    a1.si();
    getch();
}