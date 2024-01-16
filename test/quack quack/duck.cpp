#include<iostream>
#include<string>

using namespace std;

class duck {
public:
	string name;
	string colour;
	int age;
};

int main() {
	duck myduck1;
	myduck1.name = "Fred";
	myduck1.colour = "yellow";
	myduck1.age = 3;

	cout << myduck1.name << " " << myduck1.age;

}