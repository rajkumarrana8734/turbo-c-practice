#include<iostream.h>
#include<conio.h>

class student
{
   private:
      int rollno;

   protected:
      float marks;

   public:
      char name[20];

   void getdata()
   {
      cout<<"enter rno :";
      cin>>rollno;

      cout<<"enter name :";
      cin>>name;

      cout<<"enter marks :";
      cin>>marks;
   }

   void showdata()
   {
	 cout<<"\n\nstudent details";
	 cout<<"\n--------------------";
	 cout<<"\nrollno :"<<rollno;
	 cout<<"\nname :"<<name;
	 cout<<"\nmarks :"<<marks;
   }
};
class result : public student
{
   public:
      void showmarks()
      {
	 cout<<"\nmarks from derived class:"<<marks;
      }
};
void main()
{
    clrscr();
    result s;
    s.getdata();
    cout<<"\n\npublic member name:"<<s.name;
    s.showdata();
    s.showmarks();
    getch();
}

