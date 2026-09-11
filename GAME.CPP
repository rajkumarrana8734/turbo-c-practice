#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int car = 35;
    int obstacle = 10;
    int score = 0;
    char ch;

    clrscr();

    while(1)
    {
       clrscr();

       cout << "========================================\n";
       cout << "            CAR RACING GAME             \n";
       cout << "========================================\n\n";

       cout << "     |              |\n";
       cout << "     |      #       |\n";
       cout << "     |      #       |\n";
       cout << "     |              |\n";
       cout << "     |      A       |\n";
       cout << "     |     /|\\      |\n";
       cout << "     |     / \\      |\n";
       cout << "     |              |\n";
       cout << "==========================================\n";

       cout << "\nscore: " << score;
       cout << "\n\npress A = left";
       cout << "\npress D = right";
       cout << "\npress Q = quit";

       if(kbhit())
       {
	 ch = getch();

	 if(ch == 'a' || ch == 'A')
	 {
	    if(car > 10)
	       car -= 5;
	 }
	 if(ch == 'd' || ch == 'D')
	 {
	     if(car < 60)
		car += 5;
	 }

	 if(ch == 'q' || ch == 'Q')
	 {
	    break;
	 }
       }
       score++;
       delay(300);
    }
    clrscr();

    cout << "\n\n";
    cout << "============================\n";
    cout << "      GAME OVER!\n";
    cout << "============================\n";
    cout << "\nYour score: " << score;

    getch();
}