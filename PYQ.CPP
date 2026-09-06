#include<iostream.h>
#include<conio.h>
class class2;
class class1
{
      int num1;
public:
   void getdata()
   {
	cout<<"enter value or class 1:";
	cin>>num1;
   }

   void display()
   {
       cout<<"class 1 = "<<num1<<endl;
   }
   friend void swap(class1 &, class2 &);
};

class class2
{
    int num2;
public:
   void getdata()
   {
       cout<<"enter value for clas 2:";
       cin>>num2;
   }

   void display()
   {
     cout<<"class 2 = "<<num2<<endl;
   }
   friend void swap(class1 &, class2 &);
};
void swap(class1 &a,class2 &b)
{
   int temp;

   temp = a.num1;
   a.num1 = b.num2;
   b.num2 = temp;
}
void main()
{
   clrscr();

   class1 obj1;
   class2 obj2;

   obj1.getdata();
   obj2.getdata();

   cout<<"\nBefore swapping:\n";
   obj1.display();
   obj2.display();

   swap(obj1, obj2);

   cout<<"\n after swapping:\n";
   obj1.display();
   obj2.display();

   getch();
}