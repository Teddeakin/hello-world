#include <iostream>
#include <string>
using namespace std;


void log(string msg = "Hello World") { //function with default string value
	cout << msg << endl;

}
int sum(int a = 10, int b = 5) { //function with default int values 
		return a+b;
}
int main() {
	log(); //omitting the parameter here means the default "Hello World" would be used
	int result = sum(20);
	cout << result << endl;
	return 0;
}