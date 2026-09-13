#include<iostream.h>
#include<conio.h>

char board[9] = {'1','2','3','4','5','6','7','8','9'};

void display()
{
     clrscr();

     cout<<"\n\n     TIC TAC TOE\n\n";

     cout<<"      " << board[0] << " | " << board[1] << " | " << board[2];
     cout<<"\n     ---+---+---\n";
     cout<<"      " << board[3] << " | " << board[4] << " | " << board[5];
     cout<<"\n     ---+---+---\n";
     cout<<"      " << board[6] << " | " << board[7] << " | " << board[8];

}
int win()
{
     if(board[0] == board[1] && board[1] == board[2]) return 1;
     if(board[3] == board[4] && board[4] == board[5]) return 1;
     if(board[6] == board[7] && board[7] == board[8]) return 1;

     if(board[0] == board[3] && board[3] == board[6]) return 1;
     if(board[1] == board[4] && board[4] == board[7]) return 1;
     if(board[2] == board[5] && board[5] == board[8]) return 1;

     if(board[0] == board[4] && board[4] == board[8]) return 1;
     if(board[2] == board[4] && board[4] == board[6]) return 1;

     return 0;
}

void main()
{
    int player = 1;
    int choice;
    int moves=0;

    clrscr();

    while(1)
    {
	display();

	cout<<"\n\nplayer"<<player;
	cout<<" ("<<(player==1 ? 'x' : 'o' ) << ")";
	cout<<"\nenter position:";
	cout<<choice;

	if(choice < 1 || choice > ()
	{
	   cout << "\ninvalid position!";
	   getch();
	   continue;
	}

	if(board[choice-1] == 'x' || board[choice-1] == '0')
	{
	   cout<<"\nposition already taken!";
	   getch();
	   continue;
	}

	if(player == 1)
	    board[choice-1] = 'x';
	else
	    board[choice-1] = 'o';

	moves++;

	if(win())
	{
	    display();
	    cout<<"\n\nplayer"<<player<<"wins!";
	    break;
	}

	if(moves == 9)
	{
	   display();
	   cout<<"\n\ngame draw!";
	   break;
	}

	if(player == 1)
	    player = 2;
	else
	   player = 1;
	}

	cout<<"\n\n press any key...";
	getch();
}





