#include <iostream>
using namespace std;

class Car
{
public:
	string name;
	string colour;
	int age = 0;
	double weight = 0;
	Car();
	Car(string n);
	Car(int a);
	Car(double b);
};

Car::Car() {
	cout << "Car created" << endl;
}

Car::Car(string n) {
	name = n;
	cout << "Car created. Name is " << name << endl;
}

Car::Car(int a) {
	age = a;
	cout << "Car created. Age is " << age << endl;
}

Car::Car(double b) {
	weight = b;
	cout << "Car created. Weight is " << weight << endl;
}

int main() {
	Car MyCar1;

	Car MyCar2("Mercades");

	Car MyCar3(11);

	Car MyCar4(11111);
	return 0;
}