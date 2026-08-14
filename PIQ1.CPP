//menu driven queue

#include<iostream.h>
#include<conio.h>

#define max 5

class queue 5
{
   int q[max];
   int front,rear;

public:
   queue()
   {
       front = -1;
       rear = -1;
   }

   void insert()
   {
      int value;

      if(rear == max-1)
      {
	 cout<<"\nqueue is full";
      }
      else
      {
	 cout<<"\nenter value:";
	 cin>>value;

	 if(front == -1)
	   front = 0;

	 rear++;
	 q[rear]= value;

	 cout<<"\nvalue inserted.";
      }
   }

   void del()
   {
      if(front == -1 || front >rear)
      {
	 cout<<"\nqueue is empty!";
      }
      else
      {
	 cout<<"\nderleted value = "<<q[front];
	 front++;

	 if(front >rear)
	 {
	    front = -1;
	    rear = -1;
	 }
      }
}

void display()
{
   int i;
   if(front == -1)
   {
     cout<<"\nqueue is empty!";
   }
   else
   {
      cout<<"\nqueue:";

      for(i=front;i<=rear;i++)
      cout<<q[i]<<" ";
   }
 }
};

void main()
{
   clrscr();

   queue obj;
   int choice;
   do
   {
     cout<<"\n\n---queue menu---";
     cout<<"\n1. insert";
     cout<<"\n2  delete";
     cout<<"\n3. display";
     cout<<"\n4. exit";
     cout<<"\nenter choice";

     switch(choice)
     {
	case1: obj.insert(); break;
	case2: obj.del(); break;
	case3: obj.display(); break;
	case4: cout<<"\nexit"; break;
	default: cout<<"\n invalidchoice!";
     }

   }while(choice !=4);

   getch();
}