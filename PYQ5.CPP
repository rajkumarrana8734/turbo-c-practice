#include <iostream.h>
#include <conio.h>


class Class2;

class Class1 {
    int num1;

public:
    void getData() {
        cout << "\nEnter value for Class 1: ";
        cin >> num1;
    }

    void display() {
        cout << "\nValue in Class 1: " << num1;
    }

   
    friend void swapValues(Class1 &c1, Class2 &c2);
};

class Class2 {
    int num2;

public:
    void getData() {
        cout << "\nEnter value for Class 2: ";
        cin >> num2;
    }

    void display() {
        cout << "\nValue in Class 2: " << num2;
    }

    
    friend void swapValues(Class1 &c1, Class2 &c2);
};


void swapValues(Class1 &c1, Class2 &c2) {
    int temp = c1.num1;
    c1.num1 = c2.num2;
    c2.num2 = temp;
}

void main() {
    Class1 obj1;
    Class2 obj2;
    clrscr(); 

   
    obj1.getData();
    obj2.getData();

    cout << "\n--- Before Swapping ---";
    obj1.display();
    obj2.display();

   
    swapValues(obj1, obj2);

    cout << "\n\n--- After Swapping ---";
    obj1.display();
    obj2.display();

    getch(); // Wait for key press
}