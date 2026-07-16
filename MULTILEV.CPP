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
class C : public B
{ public:
   int c;
   void getC()
   {cout<<"c"<<c<<endl;}
};
void main()
{ C cl;
  clrscr();
  cout<<"enter a";
  cin>>cl.a;
  cout<<"enter b";
  cin>>cl.b;
  cout<<"enter c";
  cin>>cl.c;
  cl.getA();
  cl.getB();
  cl.getC();

  getch();
}