#pragma once
#include <iostream>
#include <string.h>
#include "Dress.h"
using namespace std;

class upper : public dress
{
private:
	int sleeveLength;;
	int topLength;
	string neckline;
	string dress_no;
	string color;
	char size;
	int price;
public:
	upper();
	upper(string dress_no, string color, char size, int price, int sleeveLength, int topLength, string neckline);
	upper(upper& clone);
	string getdress_no();
	string getcolor();
	char getsize();
	int getprice();
	int getsleeveLength();
	int gettopLength();
	string getneckline();
	void setdress_no(string dressn);
	void setcolor(string c);
	void setsize(char s);
	void setprice(int p);
	void setsleeveLength(int slength);
	void settoplength(int tlength);
	void setneckline(string neckline);
	void display();
	
};