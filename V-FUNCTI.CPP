#include<iostream.h>
#include<conio.h>
class base
{
   public:
   virtual void print()
   {
   cout<<"print base class:"<<endl;
   }
   void show()
   {
   cout<<"show base class"<<endl;
   }
};
class derived: public base
{
public:
void print()
{
  cout<<"print derivedclass:"<<endl;
  }
void show()
{
cout<<"show derived class"<<endl;
}
};
int main()
{
base * bptr;
derived d;
bptr = &d;
clrscr();
bptr->print();
bptr->show();
getch();
return(0);
}