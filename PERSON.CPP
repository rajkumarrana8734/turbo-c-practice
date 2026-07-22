#include<iostream.h>
#include<conio.h>
class person
{
   public:
	char name[20];
	int age;
	void getdata();
};
void person::getdata()
{
  cout<<"enter name:";
  cin>>name;
  cout<<"enter age:";
  cin>>age;
}
class employee:public person
{
   public:
      int eno;
      long int salary;
      char mobile[20];
      void putdata()
      {
	 cout<<"enter employee no:";
	 cin>>eno;
	 cout<<"enter mobile no:";
	 cin>>mobile;
	 cout<<"enter salary:";
	 cin>>salary;
	 clrscr();
	 cout<<"employee no:"<<eno<<"\n";
	 cout<<"name:"<<name<<"\n";
	 cout<<"age:"<<age<<"\n";
	 cout<<"mobilr no:"<<mobile<<"\n";
	 cout<<"salary:"<<salary<<"\n";
    }
};
void main()
{
   clrscr();
   employee e1;
   e1.getdata();
   e1.putdata();
   getch();
}




