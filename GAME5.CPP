#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
    char word[] = "computer";
    char guess;
    char display[9] = "________";
    int wrong = 0;
    int i, found;

    clrscr();

    cout<<"==============================";
    cout<<"\n      HANG GAME";
    cout<<"\n===============================";

    while(wrong < 6)
    {
       cout<<"\n\nword:"<<display;
       cout<<"\nwrong attemps:"<<wrong<<"\6";

       cout<<"\nenter a letter:";
       cin>>guess;

       found = 0;

       for(i=0;i<8;i++)
       {
	  if(word[i] == guess)
	  {
	     display[i] == guess;
	     found = 1;
	  }
       }
       if(found == 0)
       {
	 wrong++;
	 cout<<"\nwrong guess!";
       }
       else
       {
	  cout<<"\ncorrect!";
       }
       if(strcmp(word, display) == 0 )
       {
	  cout<<"\n\n*** TOU WIN ***";
	  cout<<"\nthe word was:"<<word;
	  getch();
       }
    }
    cout<<"\n\n*** GAME OVER ***";
    cout<<"\n the word was:"<<word;

    getch();
}