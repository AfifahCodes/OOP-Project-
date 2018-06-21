#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class address
{
  private:
  int house_no;
  char block;
  string area;

  public:
  address();
  address(int num, char blk, string r_area);
  address(address& cstmr_addrs);
  void setHouse_no(int num);
  void setBlock(char blk);
  void setArea(string r_area);
  int getHouse_no();
  char getBlock();
  string getArea();
  void display();
  friend ostream& operator << (ostream& out, address c_addrs);
};