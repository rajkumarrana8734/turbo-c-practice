#include<iostream.h>
#include<conio.h>
class A
{ public:
   int a;
   void getA()
   {cout<<"a"<<a<<endl;}
};
class B : public A
{ public:
   int b;
   void getB()
   {cout<<"b"<<b<<endl;}
};
void main()
{ B bl;
  clrscr();
  cout<<"enter a";
  cin>>bl.a;
  cout<<"enter b";
  cin>>bl.b;
  bl.getA();
  bl.getB();
  getch();
}


