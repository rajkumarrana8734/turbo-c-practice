#include<iostream.h>
#include<conio.h>
class A
{
  public:
	A()
	{
	    cout<<"enter a and b";
	    cin>>a>>b;
	}
  private:
     int a,b;
  friend float mean(A);
};

float mean(A al)
{
   return float(al.a+al.b)/2.0;
}
void main()
{
   clrscr();
   A al;
   cout<<"mean is"<<mean(al);
   getch();
}