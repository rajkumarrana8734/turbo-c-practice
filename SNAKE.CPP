#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
   int x= 10, y = 10;
   char ch;


   clrscr();

   cout<<"==============================";
   cout<<"\n     SNAKE GAME";
   cout<<"\n==============================";
   cout<<"\n\nuse W A S D to move";
   cout<<"\npress Q to quit";

   while(1)
   {
      if(kbhit())
      {
	 ch = getch();

	 if(ch == 'w' || ch == 'W')
	     y--;

	  if(ch == 's' || ch == 'S')
	       y++;

	   if(ch == 'a' || ch == 'A')
	     x--;

	      if(ch == 'd' || ch == 'D')
	     x++;

	      if(ch == 'q' || ch == 'Q')
	     break;
	 }

	 clrscr();

	 cout<<"==============================";
	 cout<<"\n     SNAKE GAME";
	 cout<<"\n==============================\n\n";

	 for(int i = 0;i < y;i++)
	     cout<<"\n";

	 for(int j = 0; j < x;j++)
	     cout<<" ";

	     cout<<"0";

	     delay(150);
	 }

	 clrscr();
	 cout<<"\n\nGAME OVER!";
	 cout<<"\npress any key...";
	 getch();
}