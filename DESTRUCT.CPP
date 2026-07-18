#include<iostream.h>
#include<conio.h>
 int c=0;
 class set
 {
 public:
 set()
 {
 c++;
 cout<<"\n construct"<<c;
 }
 ~set()
 {
 cout<<"\n destruct"<<c;
 c--;
 }
};
void main()
{
  clrscr();
  {
  set a,b;
}
getch();
}