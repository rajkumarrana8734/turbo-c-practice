#include<iostream.h>
#include<conio.h>
class area
{
  public:
      int l,b,r;
      area(int x)
      {
	 r=x;
	 cout<<"\nARea of circlr is:"<<3.14*r*r;
      }
      area(int x,int y)
      {
	 l=x;
	 b=y;
	 cout<<"\nArea of ractangle is:"<<l*b;
      }
};
void main()
{
   clrscr();
   int x,y;
   cout<<"enter x and y\n";
   cin>>x>>y;
   area a(10),b(10,20);
   getch();
}