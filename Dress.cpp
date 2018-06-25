#pragma once
#include <iostream>
#include <string.h>
using namespace std;
#include "Dress.h"

dress::dress()
{
	this->dress_no = 0;
	this->color = " ";
	this->size = 0;
	this->price = 0;
}

dress::dress(string dress_no, string color, char size, int price)
{
	this->dress_no = dress_no;
	this->color = color;
	this->size = size;
	this->price = price;
}

dress::dress(dress& clone)
{
	this->dress_no = clone.dress_no;
	this->color = clone.color;
	this->price = clone.price;
	this->size = clone.size;
}

string dress::getdress_no()
{
	return this->dress_no;
}

string dress::getcolor()
{
	return this->color;

}

int dress::getprice()
{
	return this->price;
}

void dress::setdress_no(string dressn)
{
	this->dress_no = dressn
}

void dress::setcolor(string c)
{
	this->color = c;
}
void dress::setsize(char s)
{
	this->size = s;
}
void dress::setprice(int cost)
{
	this->price = cost;
}

void dress::display(dress d)
{
	cout << d.dress_no << endl;
	cout << d.color << endl;
	cout << d.price << endl;
	cout << d.size << endl;
}
