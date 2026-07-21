#include<iostream.h>
#include<conio.h>
class student
{
   public:
	 int rno,m[5],t,p;
	 char name[10];
	 void getdata();
	 void putdata();
};

void student::getdata()
{
    cout<<"enter rno:";
    cin>>rno;
    cout<<"enter name:";
    cin>>name;
    for(int i=0;i<5;i++)
    {
	cout<<"marks"<<i+1;
	cin>>m[i];
    }
}
void student::putdata()
{
   cout<<"roll no"<<rno<<"\n";
   cout<<"name"<<name<<"\n";
   t=0;
   for(int i=0;i<5;i++)
   {
       cout<<"marks"<<i+1<<m[i]<<"\n";
       t+=m[i];
   }
   cout<<"total"<<t<<"\n";
   cout<<"per"<<p<<"\n";
   p=t/5;
   if(p>=70)
       cout<<"distinction"<<"\n";
   else if(p>=60)
       cout<<"first class"<<"\n";
   else if(p>=50)
       cout<<"second class"<<"\n";
   else if(p>=40)
       cout<<"pass class"<<"\n";
   else
      cout<<"fail"<<"\n";
}
void main()
{
   student s1;
   clrscr();
   s1.getdata();
   s1.putdata();
   getch();
}