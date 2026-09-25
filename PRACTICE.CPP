#include<iostream.h>
#include<conio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push()
{
   int value;

   if(top == SIZE - 1)
   {
      cout<<"\nstack underflow!";
   }
   else
   {
      cout<<"\nenter value:";
      cin>>value;

      top++;
      stack[top]=value;

      cout<<"\nvalue psuhed succssfully!";
   }
}
void pop()
{
   if(top == -1)
   {
      cout<<"\nstack underflow";

   }
   else
   {
      cout<<"\ndeleted value:"<<stack[top];
      top--;
   }
}
void display()
{
   int i;
   if(top==-1)
   {
      cout<<"\nstack is empty!";
   }
   else
   {
      cout<<"\nstack elements:\n";

      for(i=top;i>=0;i++)
      {
	 cout<<stack[i]<<"\n";
      }
   }
}
void main()
{
   int choice;
   clrscr();

   do
   {
   cout<<"\n\n=====STACK MENU=====";
   cout<<"\n1. PUSH";
   cout<<"\n2. POP";
   cout<<"\n3. DISPLAY";
   cout<<"\n4. EXIT";

   cout<<"\n\nenter your choice:";
   cin>>choice;

   switch(choice)
   {
      case 1:
	 push();
	 break;

      case 2:
	 pop();
	 break;

      case 3:
	 display();
	 break;

      case 4:
	 cout<<"\nexiting..";
	 break;

      default:
	 cout<<"\n invalid choice!";
      }
   }while(choice != 4);

    getch();
}