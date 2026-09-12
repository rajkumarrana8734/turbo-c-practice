#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int number, guess;
    int attempts = 0;

    clrscr();

    randomize();
    number = random(100) + 1;

    cout << "==============================";
    cout << "\n     NUMBER GUESSING GAME";
    cout << "\n==============================";

    cout << "\n\n guess a number betwwn 1 to 100";

    do
    {
	cout <<"\n\nenter your guess: ";
	cin >> guess;

	attempts++;

	if(guess > number)
	{
	   cout << "to high!";
	}
	else if(guess < number)
	{
	    cout<<"too low!";
	}
	else
	{
	    cout<<"\n\n*** you win! ***";
	    cout<<"\nattempts: "<<attempts;
	}
    } while(guess != number);

    cout << "\n\n press any key to exit...";
    getch();
}