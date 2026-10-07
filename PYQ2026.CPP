#include<iostream.h>
#include<conio.h>
class complex
{
   int real,imaginary;

   public:
   void getdata()
   {
      cout<<"enter real number:";
      cin>>real;

      cout<<"enter imaginary number:";
      cin>>imaginary;

   }

   comlex operator +(complex c)
   {
     complex temp;

     temp.real=real+c.real;
     temp.imiginary=imaginary+c.imaginary;
      return temp;
     }
     void display()
     {
	cout<<real<<" + "<<imaginary<<"i";
     }
};
void main()
{
 clrscr();
 complex c1,c2,c3;

 cout<<"enter first complex number:\n";
 c1.getdata();

 cout<<"\nenter second complex number:\n";
 c2.getdata();

 c3=c1+c2;

 cout<<"\naddtion + ";
 c3.display();

 getch();
}