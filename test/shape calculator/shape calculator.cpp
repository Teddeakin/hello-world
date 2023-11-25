#include <iostream>
using namespace std;
//global variables for calculations
double pi = 3.145159;
//declare functions here

double square(double len1);
double rectangle(double len1, double len2);
double circle(double len1);
double triangle(double len1, double len2);


int main() {


    cout << "Welcome to the shape calculator" << endl;
    cout << "---------------------" << endl;


    cout << "What calculation do you want to perform" << endl;
    cout << "1: Area of square\n2: Area of rectangle\n3: Area of circle\n4: Area of Triangle" << endl;

    double returnedtotal = 0;
    double user1 = 0;
    double user2 = 0;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "What is the squares width/height?" << endl;
        cin >> user1;
        square(user1);
        returnedtotal = square(user1);
    }
    else if (choice == 2) {
        cout << "What is the width of the rectagle" << endl;
        cin >> user1;
        cout << "What is the height of the rectagle" << endl;
        cin >> user2;
        rectangle(user1, user2);
        returnedtotal = rectangle(user1, user2);
    }
    else if (choice == 3) {
        cout << "What is the radius of the circle?" << endl;
        cin >> user1;
        circle(user1);
        returnedtotal = circle(user1);
    }
    else if (choice == 4) {
        cout << "What is the base length of the triangle" << endl;
        cin >> user1;
        cout << "What is the height of the triangle" << endl;
        cin >> user2;
        triangle(user1, user2);
        returnedtotal = triangle(user1, user2);
    }
    else {
        cout << "input valid number" << endl;
    }




    cout << "The area of the shape is" << endl;
    cout << "------------------------" << endl;
    cout << returnedtotal << endl;


    return 0;
}

double square(double len1) {
    double total = len1 * len1;
    return total;
}
double rectangle(double len1, double len2) {
    double total = len1 * len2;
    return total;
}
double circle(double len1) {
    double total = pi * (len1 * len1);
    return total;
}
double triangle(double len1, double len2) {
    double total = (len1 * len2) / 2;
    return total;
}
//define functions here