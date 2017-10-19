#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	double interest_rate;
	string name;
	string address;
	string telephone;
	int age;
	
public:
	Customer ();
	Customer (string n, string ad, string phone, int age);
	string get_name ();
};
#endif