#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
struct product {
	string name;
	double price;
	int catagory;
	int stock;
	int code;
};

struct catagories {
	string name;
};

int menu();

void display(struct product item[], int catagory);


void recommendation(int order, product item[]);