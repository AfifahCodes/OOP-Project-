#include <iostream>
#include <string.h>
#include <fstream>
#include "address.h"
using namespace std;

class customer
{
  private:
  string name;
  int contact_no;
  address c_address;
  int cnic_no;
  bool rentStatus;

  public:
  customer();
  customer(string cname, int cntctno, int cnic, int num, char blk, string r_area);
  customer(string cname, int cntctno, int cnic, address c_addrs);
  customer(customer& thiscustmr);
  void setName(string c_name);
  void setContactNo(int cntctno);
  void setAddress(address& c_addrs);
  void setCnic(int num);
  void setRentStatus();
  string getName();
  int getContactNo();
  address getAddress();
  int getCnic();
  bool getRentStatus();
  void display();


};