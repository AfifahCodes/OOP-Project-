#pragma once
#include <iostream>
#include <string.h>
#include "upper.h"
using namespace std;

upper::upper()
{
	this->dress_no = 0;
	this->color = " ";
	this->size = 0;
	this->price = 0;
}

upper:: upper(string dress_no, string color, char size, int price, string neckline, int sleevelength, int topLength )
{
	this->dress_no = dress_no;
	this->color = color;
	this->size = size;
	this->price = price;
	this->neckline = neckline;
	this->sleeveLength = sleevelength;
	this->topLength = topLength;
}

upper::upper(upper& clone)
{
	this->dress_no = clone.dress_no;
	this->color = clone.color;
	this->price = clone.price;
	this->size = clone.size;
	this->neckline = clone.neckline;
	this->sleeveLength = clone.sleeveLength;
	this->topLength = clone.topLength;
}

string upper::getdress_no()
{
	return this->dress_no;
}

string dress::getcolor()
{
	return this->color;

}

int upper::getsleeveLength()
{
	return this->getsleeveLength;
}
int upper::gettopLength()
{
	return this->gettopLength;
}
string upper::getneckline()
{
	return this->getneckline;
}
int upper::getprice()
{
	return this->price;
}

void upper::setdress_no(string dressn)
{
	this->dress_no = dressn;
}

void upper::setcolor(string c)
{
	this->color = c;
}
void upper::setsize(char s)
{
	this->size = s;
}
void upper::setprice(int cost)
{
	this->price = cost;
}

void upper::setsleeveLength(int slength)
{
	this->sleeveLength = slength;
}
void upper::settoplength(int tlength)
{
	this->topLength = tlength;
}
void upper::setneckline( string neckline)
{
	this->neckline = neckline;
}

void upper::display()
{
	cout << this->dress_no << endl;
	cout << this->color << endl;
	cout << this->price << endl;
	cout << this->size << endl;
	cout << this->sleeveLength << endl;
	cout << this->topLength << endl;
}
