#include<iostream.h>
#include<conio.h>

#define max 5

class queue
{
  int arr[max];
  int front,rear;
public:
   queue()
   {
      front =-1;
      rear=-1;
   }
   void insert(int val)
   {
      if (rear == max - 1)
      {
	cout<<"Queue overflow!\n";
	return;
      }
      if(front == max - 1) front = 0;
      arr[++rear] = val;
      cout<<"inserted successfully.\n";
      }
      void deleteelement(){
	if(front == -1 || front > rear){
	  cout<<"queue underflow!\N";
	  return;
	}
	cout<<"deleted element:"<<arr[front++]<<"\n";
      }
      void display();
};
      void queue::display()
      {

		 if(front == -1 || front > rear)
	 {
	    cout<<"queue is empty!\n";
	    return;
	 }
	 cout<<"queue elements:";
	 for (int i = front; i<=rear;i++){
	    cout<<arr[i]<<" ";
	 }
	 cout<<"\n";
      }

void main()
{
  clrscr();
  queue q;
  int choice,val;
  do
  {
     cout<<"\n1. insert\n2. delete\n3. display\n4. exit\nenter choice:";
     cin>>choice;
     switch(choice)
     {
       case 1:
	 cout<<"enter value:";
	 cin>>val;
	 q.insert(val);
	 break;
       case 2:
	 q.deleteelement();
	 break;
       case 3:
	 q.display();
	 break;
       case 4:
	 break;
       default: cout<<"invalid choice\n";
     }
}while(choice != 4);
getch();
}