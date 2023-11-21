#include <iostream>
using namespace std;
//global variables for calculations
double pi = 3.145159, len1, len2, total;
//declare functions here

void square();
void rectangle();
void circle();
void triangle();

int main() {


    cout << "Welcome to the shape calculator" << endl;
    cout << "---------------------" << endl;


    cout << "What calculation do you want to perform" << endl;
    cout << "1: Area of square\n2: Area of rectangle\n3: Area of circle\n4: Area of Triangle" << endl;


    int choice;
    cin >> choice;


    if (choice == 1) {
        square();
    }
    else if (choice == 2) {
        rectangle();
    }
    else if (choice == 3) {
        circle();
    }
    else if (choice == 4) {
        triangle();
    }



    cout << "The area of the shape is" << endl;
    cout << "------------------------" << endl;
    cout << total << endl;


    return 0;
}

void square() {
    cout << "What is the squares width/height?" << endl;
    cin >> len1;
    total = len1 * len1;
}
void rectangle() {
    cout << "What is the width of the rectagle" << endl;
    cin >> len1;
    cout << "What is the height of the rectagle" << endl;
    cin >> len2;
    total = len1 * len2;
}
void circle() {
    cout << "What is the radius of the circle?" << endl;
    cin >> len1;
    total = pi * (len1 * len1);
}
void triangle() {
    cout << "What is the base length of the triangle" << endl;
    cin >> len1;
    cout << "What is the height of the triangle" << endl;
    cin >> len2;
    total = (len1 * len2) / 2;
}
//define functions here