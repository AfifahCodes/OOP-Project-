#include <stdio.h>
#include "customerlist.h"
using namespace std;

    customerlist::customerlist()
    {
        this->totalcustomer=1;
        this->index=0;
        this->clist= new customer [5];
    }
    customerlist::customerlist(int num, int i, customer *other)
    {
        this->totalcustomer=num;
        this->index=i;
        this->clist=other;
    }
    customerlist::customerlist(const customerlist& thislist)
    {
        this->totalcustomer= thislist.totalcustomer;
        this->index=thislist.index;
        this->clist=thislist.clist;
    }
    void customerlist::setToatalNumber(int num)
    {
        this->totalcustomer=num;
    }
    void customerlist::setList(customer *otherlist)
    {
        this->clist=otherlist;
    }
    void customerlist::setIndex(int i)
    {
        this->index=i;
    }
    int customerlist::getTotalNumber()
    {
        return this->totalcustomer;
    }
    int customerlist::getIndex()
    {
        return this->index;
    }
    void customerlist::addCustomer (customer &c)
    {
        if(this->index < this->totalcustomer )
        {
        clist[index] = c;
        index++;
        }
        else
        {
        incsize(c);
        }
    }

    void customerlist::incsize(customer &c)  //increase the size of an array
    {
        this->totalcustomer += 1;
        customer *newlist = new customer [this->totalcustomer];
        int i;
        for(i=0 ; i < (this->totalcustomer-1) ; i++)
        {
        newlist[i] = clist[i];
        }
        delete [] clist;
        clist = newlist ;
        clist[index] = c;
        index++;
    }

    void customerlist::display()
    {
        cout<<endl<<"------------------------"<<endl;
        cout<<"       CUSTOMERS       "<<endl;
        cout<<"------------------------"<<endl;
        int i;
        for(i=0;i<this->index;i++)
        {
        cout << this->clist[i] <<endl;
        }
        cout<<"Total Number of Customers :" <<this->totalcustomer<<endl;
    }

    int customerlist::c_search(string  name)  //Searching by name
    {
        customer c1;
        int temp=0;
        int i;
        for(i = 1 ; i <= this->index ; i++)
        {
        c1 = this->clist[i-1];
        if(name == c1.getName())
        {
            temp=i;
            break;
        }
        }
        return temp;
    }
    void customerlist::Delete(string name)
    {
        int i;
        int temp = c_search(name) ;
        if(temp > 0)
        {
            for(i=temp-1 ; i < this->index-1 ; i++)
            {
                this->clist[i] = this->clist[i+1];
            }
            index--;
        }
        else
        {
            cout<<"Not found!!"<<endl;
        }
    }
    customerlist::~customerlist()
    {
        delete [] clist;
        clist==NULL;
    }
