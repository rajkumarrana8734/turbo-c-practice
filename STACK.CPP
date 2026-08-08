#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class stack
{
   int s[4];
   int top;
   public:
   stack()
   {top = 0;}
   void push(int x)
   {
       if(top >= 3)
       {
	  cout << "stack overflow";
	  return;
       }
       top = top+1;
       s[top] = x;
       cout<<"inserted"<<x;
   }
   void pop()
   {
     if(top == 0)
     {
	 cout<<"stack unserflow";
	 return;
	 }
	 cout<<"deleted"<<s[top--];
     }
     void peep();
     void change();
     void display();
     };
     void stack::peep()
     {
       int i,t;
       cout<<"enter the position";
       cin>>i;
       if(top-i+1<=0)
       { cout<<"stack underflow on peep";return;}

       cout<<s[top-i+1];
       }
       void stack::change()
       {
       int i,item;
       cout<<"\n enter the position to enter";
       cin>>i;
       cout<<"\n enter the item to be insert:";
       cin>>item;

       if(top-i+1<=0)
       { cout<<"stack underflow on change";return;}
       s[top-i+1]=item;
       }
       void stack::display()
       {
	if(top == 0)
	{
	   cout<<"stack underflow";
	   return;
	}
	for(int i = top;i>=1;i--)
	     cout<<"| s["<<i<<"]|"<<s[i]<<"|\n";
	}
	int main()
	{
	int ch;
	stack st;
	clrscr();
	while (1)
	{
	clrscr();
	cout<<"\n 1.push";
	cout<<"\n 2.pop";
	cout<<"\n 3.display";
	cout<<"\n 4.peep";
	cout<<"\n 5.change";
	cout<<"\n 6.exit";
	cout<<"\n enter ur choice:";
	cin>>ch;
	switch (ch)
	{
	case 1:
	cout<<"enter the element:";
	cin>>ch;
	st.push(ch);
	break;
	case 2:
	st.pop();
	break;
	case 3:
	st.display();
	break;
	case 4:
	st.peep();
	break;
	case 5:
	st.change();
	break;
	case 6:
	exit(0);
	}
	getch();
	}
}

