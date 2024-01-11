#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ofstream outputfile("program-data.txt");
	if (outputfile.is_open()) {
		string name[] = { "joe Bloggs", "karen smith", "garry jones", "phil legg" };
		int age[] = { 43, 23, 18, 54 };
		string postcode[] = {"BS2 4CV", "EM1 5XY", "FG4 8NP", "BS1 5NE"};
		cout << name[0] << " " << age[0] << " " << postcode[0] << endl;
		cout << name[1] << " " << age[1] << " " << postcode[1] << endl;
		cout << name[2] << " " << age[2] << " " << postcode[2] << endl;
		cout << name[3] << " " << age[3] << " " << postcode[3] << endl;
		outputfile.close();
	}
	else {
		cout << "File cannot be accessed. Terminating program" << endl;
	}
	return 0;
}