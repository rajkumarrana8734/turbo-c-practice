#include <iostream.h>
#include <conio.h>

class Student
{
    int rollno;
    char name[20];
    float marks;

public:

    void getdata()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n\nStudent Details";
        cout << "\n----------------------";
        cout << "\nRoll No: " << rollno;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
    }
};

void main()
{
    clrscr();

    Student s;

    s.getdata();
    s.display();

    getch();
}