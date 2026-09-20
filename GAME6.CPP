#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
     int user, computer;

     clrscr();
     randomize();

     cout<<"dise game\n";
     cout<<"press 1 to roll: ";
     cin>>user;

     computer = random(6) + 1;

     cout<<"\nyour dise : "<<user;
     cout<<"\ncomputer dise:"<<computer;

     if(user > computer)
	cout<<"\n\nyou win!";
     else if(user < computer)
	cout<<"\n\ncomputer wins!";
     else
	cout<<"\n\ndraw!";

     getch();
}