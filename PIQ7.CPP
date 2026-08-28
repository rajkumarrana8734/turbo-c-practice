#include<iostream.h>
#include<conio.h>
void main()
{
   int num;

   clrscr();

   cout<<"enter a number:";
   cin>>num;

   if(num>0)
   {
     cout<<"\npositive number";
   }
   else if(num < 0)
   {
      cout<<"\nnegative number";
   }
   else
   {
     cout<<"\nnumber is zero";
   }

   if(num % 2==0)
   {
      cout<<"\neven number";
   }
   else
   {
      cout<<"\nodd number";
   }
   getch();
}
