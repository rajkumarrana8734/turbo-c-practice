#include<iostream.h>
#include<conio.h>
class employee
{
  protected:
     int id;
     char name[30];
  public:
     void getdata()
     {
	 cout<<"enter employee ID:";
	 cin>>id;

	 cout<<"enter name:";
	 cin>>name;
     }
     void display()
     {
	cout<<"\nemployee ID:"<<id;
	cout<<"\nname:"<<name;
     }
};
class salary : public employee
{
    private:
      float basic, hra , total;
    public:
       void getdata()
       {
	  employee::getdata();

	  cout<<"enter basic salary:";
	  cin>>basic;

	  cout<<"enter hra:";
	  cin>>hra;

	  total = basic  = hra;
       }

       void display()
       {
	    employee::display();

	    cout<<"\nbasic salary:"<<basic;
	    cout<<"\nHra:"<<hra;
	    cout<<"\ntotal salary:"<<total;
       }
};
void main()
{
   clrscr();

   salary s;

   s.getdata();

   cout<<"\n\n---employee details---";
   s.display();

   getch();
}
