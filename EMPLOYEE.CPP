#include<iostream.h>
#include<conio.h>
#include<string.h>

class emp
{
    int id;
    char name[30];
    float salary;
    char post[20];

public:

    void input()
    {
       cout<<"\nEnter ID: ";
       cin>>id;

       cout<<"Enter name:";
       cin>>name;

       cout<<"Enter post:";
       cin>>post;
    }

    void display()
    {
       cout<<"\nID: "<<id;
       cout<<"\nName: "<<name;
       cout<<"\nsalary: "<<salary;
       cout<<"\nPost: "<<post;
    }

    char* getPost()
    {
       return post
    }
};

void main()

{
   clrscr();

   emp e[5];
   int i;

   cout<<"enter details of 5 employee:\n";

   for(i=0,i<5;i++)
   {
     cout<<"\n---Employee "<<i+1<<" ---";
     e[i].input();
   }

   cout<<"\n\nEmployee whose post is officer:\n";

   for(i=0;i<5;i++)
   {
      if(strcmp(e[i].getPost(), "officer")==0)
      {
	 e[i].display();
	 cout<<"\n";
      }
   }
   getch();
}