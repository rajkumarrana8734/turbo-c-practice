#include<iostream.h>
#include<conio.h>
class A
{
   public:
   int a;
     void geta()
     {
       cout<<"enter a:";
       cin>>a;
     }
};
class B
{
  public:
  int b;
    void getb()
    {
       cout<<"enter b:";
       cin>>b;
    }
};
class C:public A,public B
{

  public:
     void put()
     {
       cout<<"a"<<a<<"b"<<b;
     }
};
void main()
{
   C c;
   clrscr();
   c.geta();
   c.getb();
   c.put();
   getch();
}