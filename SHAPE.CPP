#include<iostream.h>
#include<conio.h>
class shape
{

   protected:
   int d1,d2;
   public:
   virtual void area()=0;
};
class rectangle:public shape
{
   public:
   rectangle(int x,int y)
   {
     d1=x;
     d2=y;
   }

   void area()
   {
      cout<<"\n area of rectangle"<<d1*d2;
   }
};
class square:public shape
{
  public:
  square(int x)
  {
    d1=x;
  }

  void area()
  {
    cout<<"\n area of square"<<d1*d2;
  }
};
class circle:public shape
{
  public:
  circle(int x)
  {
    d1=x;
  }

  void area()
  {
    cout<<"\n area of circle"<<3.14*d1*d2;
  }
};
void main()
{
   clrscr();
   shape *s1;
   int v1,v2;
   cout<<"\n enter v1 and v2";
   cin>>v1>>v2;
   rectangle r(v1,v2);
   square s(v1);
   circle c(v1);
   s1=&r;
   s1->area();
   s1=&s;
   s1->area();
   s1=&c;
   s1->area();
   getch();
}
