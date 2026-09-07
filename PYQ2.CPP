#include<iostream.h>
#include<conio.h>
class Number
{
   int n;

public:
   void getdata()
   {
       cout<<"Enter mumber:";
       cin>>n;
   }
   void display()
   {
       cout<<"Value ="<<n<<endl;
   }
   void operatop++()
   {
      ++n;
   }

   void operator--()
   {
     --n;
   }
};
void main()
{
    clrscr();
    Number obj;
    obj.getdata();

    cout<<"\noriginal value:"<<endl;
    obj.display();

    ++obj;

    cout<<"\nAfter Increment:"<<endl;
    obj.display();

    --obj;

    cout<<"\nAfter decrement:"<<endl;
    obj.display();

    getch();
}

