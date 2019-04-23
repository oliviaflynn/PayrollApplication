#include <string>
using namespace std;
#pragma once
 class Employee
{
	int employeeNumber;
	string role;
	string firstName;
	string lastName;
	double rate; //Rate of Pay
	double tax = 0.23;


//Getters
public: int get_employeeNumber(int e)
	{
		return e;
	}

public: string get_role(string r)
{
	return r;
}

public: string get_firstName(string fn)
{
	return fn;
}

public: string get_lastName(string ln)
{
	return ln;
}

public: double get_rate(double ra)
{
	return ra;
}

public: double get_tax(double t)
{
	return t;
}

//Setters
public: void set_employeeNumber(int e)
	{
		employeeNumber = e;
	}

public: void set_role(string r)
	{
		role = r;
	}

public: void set_firstName(string fn)
	{
		firstName = fn;
	}

public: void set_lastName(string ln)
	{
		lastName = ln;
	}
public: void set_rate(double ra)
{
		rate = ra;
}

public: void set_tax(double t)
{
	tax = t;
}

};


