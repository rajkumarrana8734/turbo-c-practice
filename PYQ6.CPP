#include<iostream.h>
#include<conio.h>

class student {
   int id;
   char name[20];

   public:
     friend istream & operator >>(istream &in,student &s){
       cout<<"\nenter student id:";
       in>>s.id;
       cout<<"enter student name:";
       in>>s.name;
       return in;
     }

     friend ostream & operator <<(ostream &out,const student &s){
       cout<<"\nstudent id:"<<s.id;
       cout<<"\nstudent name:"<<s.name;
       return out;
     }
};
void main(){
   student s;
   clrscr();

   cout<<"enter student details:";
   cin>>s;

   cout<<"\ndisplaying student deatils:";
   cin>>s;

   getch();
}