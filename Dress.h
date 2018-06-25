#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class dress
{
private:
	string dress_no;
	string color;
	char size;
	int price;
public:
	dress();
	dress(string dress_no, string color, char size, int price);
	dress(dress& clone);
	string getdress_no();
	string getcolor();
	char getsize();
	int getprice();
	void setdress_no(string dressn);
	void setcolor(string c);
	void setsize(char s);
	void setprice(int p);
	void display(dress d);
};