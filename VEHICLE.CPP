#include<iostream.h>
#include<conio.h>

  class vehicle
{
    protected:
    int vehicleNo;
    char brand[20];

    public:
      void getvehicle()
      {
	 cout<<"enter vehicle number:";
	 cin>>vehicleNo;
	 cout<<"enter brand:";
	 cin>>brand;
      }
};
class car:public vehicle
{
  protected:
    char fuleType[20];
    float price;

    public:
      void getcar()
      {
	  getvehicle();
	  cout<<"enter fule type:";
	  cin>>fuleType;
	  cout<<"enter price:";
	  cin>>price;
      }
};
class sportcar:public car
{
  private:
    int topspeed;

  public:
      void getsportscar()
      {
	 cout<<"enter top speed (km/hr):";
	 cin>>topspeed;
      }
    void display()
    {
      cout<<"\n----sport car details----";
      cout<<"\nvehicle number:"<<vehicleNo;
      cout<<"\nbrand:"<<brand;
      cout<<"\nfuletupe:"<<fuleType;
      cout<<"\nprice:"<<price;
      cout<<"\ntopspeed:"<<topspeed<<"km/hr";

      }
};
void main()
{
  clrscr();
  sportcar s;
  s.getvehicle();
  s.getcar();
  s.
  s.getsportscar();
  s.display();
  getch();
}