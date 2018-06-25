#include <stdio.h>
#include "customer.h"
using namespace std;

class customerlist
{
private:
    int totalcustomer;
    int index;
    customer *clist;
public:
    customerlist();
    customerlist(int num, int i, customer *other);
    customerlist(const customerlist& thislist);
    void setToatalNumber(int num);
    void setList(customer *otherlist);
    void setIndex(int i);
    int getTotalNumber();
    int getIndex();
    void addCustomer (customer &c);
    void incsize(customer &c);
    void display();
    int c_search(string  name);
    void Delete(string name);
    ~customerlist();
};
