#include <iostream>
#include <string.h>
#include <fstream>
#include "address.h"
using namespace std;

  address::address()
  {
    this->house_no=0;
    this->block=NULL;
    this->area="";
  };
  address::address(int num, char blk, string r_area)
  {
    this->house_no=num;
    this->block=blk;
    this->area=r_area;
  };
  address::address(address& cstmr_addrs)
  {
    this->house_no=cstmr_addrs.house_no;
    this->block=cstmr_addrs.block;
    this->area=cstmr_addrs.area;
  };
  void address::setHouse_no(int num)
  {
    this->house_no=num;
  };
  void address::setBlock(char blk)
  {
    this->block=blk;
  };
  void address::setArea(string r_area)
  {
    this->area=r_area;
  };
  int address::getHouse_no()
  {
    return this->house_no;
  };
  char address::getBlock()
  {
    return this->block;
  };
  string address::getArea()
  {
    return this->area;
  };