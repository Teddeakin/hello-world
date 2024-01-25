#pragma once
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

int recommendation(int order, product);