#include<iostream.h>
#include<conio.h>
class product
{
    public:
	int pid,qty,rate;
	long int total;
	char name[20];
	void getdata();
	void putdata();
};
void product::getdata()
{
     cout<<"enter pid name qty rate";
     cin>>pid>>name>>qty>>rate;
}

void product::putdata()
{
       cout<<"pid"<<pid<<"\n";
       cout<<"name"<<name<<"\n";
       cout<<"qty"<<qty<<"\n";
       cout<<"rate"<<rate<<"\n";
       cout<<"total"<<qty*rate<<"\n";
}
void main()
{
   product p1;
   clrscr();
   p1.getdata();
   clrscr();
   p1.putdata();
   getch();
}
