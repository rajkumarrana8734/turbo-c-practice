//sports person & fitness

#include<iostream.h>
#include<conio.h>
class sports_person
{
protected:
     int id;
     char name[20], gender[10],name_of_sport[20];

public:
     void getdata()
     {
	cout<<"enter ID:";
	cin>>id;

	cout<<"enter name:";
	cin>>name;

	cout<<"enter gender:";
	cin>>gender;

	cout<<"enter sport name:";
	cin>>name_of_sport;
     }

     void display()
     {
	cout<<"\nID:"<<id;
	cout<<"\nName:"<<name;
	cout<<"\nGender:"<<gender;
	cout<<"\nSport:"<<name_of_sport;
     }
};
class fitness : public sport_person
{
  float height, weight;

public:
   void getdata()
   {
      sport_person::display();

      cout<<"\n enter Height :";
      cin>>height;

      cout<<"enter width:";
      cin>>weidth;
   }
   void display()
   {
     sport_person::display();

     cout<<"\nHeight:"<<height;
     cout<<"\nWeidth:"<<weidth;
   }
};
void main()
{
   clrscr();

   fitness f;
   f.getdata();
   cout<<"\n\n--- sports person details---";
   f.display();
   getch();
}