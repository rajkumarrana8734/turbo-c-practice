#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int n,i;
  cout<<"enter a number:";
  cin>>n;
  for(i = 1;i <= 10;i++)
  {
     cout<<n<<"x"<<i<<"="<<n*i<<"\n";
  }
  getch();
}