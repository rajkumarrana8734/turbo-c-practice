#include<iostream.h>
#include<conio.h>
class max 10
void main()
{
   int stack[max];
   int top =-1;
   int choice, item, i;
   clrscr();

   do
   {
	cout<<"\n\n---STACK MENU___";
	cout<<"\n 1. push";
	cout<<"\n 1. pop";
	cout<<"\n 3. dispaly";
	cout<<"\n 4. exit";
	cout<<"\n\nenter your choice:";
	cin>>choice;

	switch(choice)
	{
	   case 1:
	      if(top == max - 1)
	      {
		 cout<<"\nstack overflow!";
	      }
	      else
	      {
	      cout<<"\nenter element:";
	      cin>>item;

	      top++;
	      stack[top] = item;

	      cout<<"\nelement pushed successfully.";
	   }
	   break;

	   case 2:
	      if(top == -1)
	      {
		 cout<<"\nstack underflow!";
	      }
	      else
	      {
		 cout<<"\ndeleted element is:"
		    <<stack[top];

		    top--;
	      }
	      break;
	      case 3:
	      if(top == -1)
	      {
		cout<<"\nstack is empty!";
	      }
	      else
	      {
		cout<<"\n\nstack element are:\n";

		for(i = top;i>=0;i--)
		{
		   cout<<stack[i]<<"\n";
		}
	      }
	      break;
	      case 4:
		 cout<<"\nexiting ptogram...";
		 break;

	      default:
		cout<<"\n invalid choice!";
	   }
	}while(choice != 4);
	getch();
}
