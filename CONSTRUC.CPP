#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class construct
{
  int a,b;
  public:
  construct()
{
  a=10;
  b=20;
}
void putdata(){ cout<<a<<b; }
};

int main()
{
  construct c;
  clrscr();
  cout<<"value of a:b ";
  c.putdata();
  getch();
  return(0);
}
