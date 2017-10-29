#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
using namespace std;
/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXED: Complete the implementation!
{
protected:
	double checking_interest_rate;
	double savings_interest_rate;
	double checking_fee;
	double overdraft_fee;
	string name;
	string address;
	string telephone;
	int age;
	
public:
	// default constructor
	Customer (){}
	// sets up a new customer and initializes the name, address, telephone and age
	Customer (string n, string ad, string phone, int _age) : name(n), address(ad), telephone(phone), age(_age){}
	// returns customer name
	string get_name() {
		return name;
	}
	// returns customer address
	string get_address() {
		return address;
	}
	// returns customer telephone number
	string get_telephone() {
		return telephone;
	}
	// returns customer age
	int get_age() {
		return age;
	}
	// returns checking_fee for a checkings account
	virtual double get_checking_fee() {
		return checking_fee;
	}
	// returns overdraft_fee
	virtual double get_overdraft_fee() {
		return overdraft_fee;
	}
	// returns interest rate for savings account
	virtual double get_savings_interest() {
		return savings_interest_rate;
	}
	// returns interest rate for checking account
	virtual double get_checking_interest() {
		return checking_interest_rate;
	}
};

//Senior class
class Senior : public Customer
{
public:
	Senior(string n, string ad, string phone, int age) : Customer(n, ad, phone, age){
		checking_fee = 10;
		overdraft_fee = 25;
		checking_interest_rate = 10;
		savings_interest_rate = 5;
	}
};

//Student class
class Student : public Customer
{
public:
	Student(string n, string ad, string phone, int age) : Customer(n, ad, phone, age) {
		checking_fee = 8;
		overdraft_fee = 20;
		checking_interest_rate = 12;
		savings_interest_rate = 5;
	}
};

//Adult class
class Adult : public Customer
{
public:
	Adult(string n, string ad, string phone, int age) : Customer(n, ad, phone, age) {
		checking_fee = 20;
		overdraft_fee = 35;
		checking_interest_rate = 7;
		savings_interest_rate = 3.5;
	}
};
#endif