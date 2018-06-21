#include <iostream>
#include <string.h>
#include <fstream>
#include "address.h"
#include "customer.h"
using namespace std;

  customer::customer()
  {
    this->name="";
    this->contact_no=0;
    this->cnic_no=0;
    this->rentStatus=0;
  };
  customer::customer(string cname, int cntctno, int cnic, int num, char blk, string r_area)
  {
    this->name=cname;
    this->contact_no=cntctno;
    this->cnic_no=cnic;
    this->rentStatus=0;
    this->c_address=address(num, blk, r_area);
  };
  customer::customer(string cname, int cntctno, int cnic, address c_addrs)
  {
    this->name=cname;
    this->contact_no=cntctno;
    this->cnic_no=cnic;
    this->rentStatus=0;
    this->c_address=address(c_address);
  };
  customer::customer(customer& thiscustmr)
  {
    this->name=thiscustmr.name;
    this->contact_no=thiscustmr.contact_no;
    this->cnic_no=thiscustmr.cnic_no;
    this->rentStatus=thiscustmr.rentStatus;
    this->c_address=thiscustmr.c_address;
  };
  void customer::setName(string c_name)
  {
    this->name=c_name;
  };
  void customer::setContactNo(int cntctno)
  {
    this->contact_no=cntctno;
  };
  void customer::setAddress(address& c_addrs)
  {
    this->c_address=c_addrs;
  };
  void customer::setCnic(int num)
  {
    this->cnic_no=num;
  };
  // void customer::setRentStatus(bool r_status)
  //{
  //    this->rentStatus= r_status;
  //};
  string customer::getName()
  {
    return this->name;
  };
  int customer::getContactNo()
  {
    return this->contact_no;
  };
  address customer::getAddress()
  {
    return this->c_address;
  };
  int customer::getCnic()
  {
    return this->cnic_no;
  };
  bool customer::getRentStatus()
  {
    return this->rentStatus;
  };
  void customer::display()
  {
    cout<<"Customer Name: "<<this->name<<endl;
    cout<<"Customer Contact: "<<this->contact_no<<endl;
    //cout<<"Customer Address: "<<this->c_address.display()<<endl;
    cout<<"Customer CNIC: "<<this->cnic_no<<endl;
    cout<<"Rent Status: "<<this->rentStatus<<endl;
  };