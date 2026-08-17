#include<iostream.h>
#include<conio.h>

class number
{
  int n;

  public:

  number()
  {
     n = 0;
  }

  void getdata()
  {
    cout<<"enter number: ";
    cin>>n;
  }

  void display()
  {
    cout<<"\nnumber = "<<n;
  }

  void operator ++()
  {
    ++n;
  }

  void operator --()
  {
     --n;
  }

};

void main()
{
   clrscr();
   number obj;
   obj.getdata();

   cout<<"\norginal:";
   obj.display();

   ++obj;

   cout<<"\n\nAfter Increment:";
   obj.display();

   --obj;

   cout<<"\n\nAgter decrement: ";
   obj.display();
   getch();
}