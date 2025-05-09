#pragma once
#include<iostream>
using namespace std;

//global functions
//length function
int length(const char* str);
//copy function
void copy(const char* src, char* dest);
//deep copy function
char* deepcopy(const char* N);

//vehicle class
class Vehicle{
private:
	char* companyName;
	char* color;
	int numberOfWheels;
	int powerCC;
	char* typeOfVehicle;
public:
	//Parameterized constructor with default arguments
	Vehicle(char* cn = "",char* c = "", int nw = 0, int p = 0, char* t = "");

	//Copy Constructor
	Vehicle(const Vehicle &v);

	//destructor
	~Vehicle();

	//Setters for all private attributes
	void setCompanyName(char* cn);
	void setColor(char* c);
	void setNumberOfWheels(int nw);
	void setPower(int p);
	void setTypeOfVehicle(char* t);

	//Getters
	char* getCompanyName() const;
	char* getColor() const;
	int getNumberOfWheels() const;
	int getPower() const;
	char* getTypeOfVehicle() const;

	//Assignment Operator
	Vehicle& operator=(const Vehicle &v);\

	virtual void checkType() = 0;

	virtual void display()const;

	//input function
	virtual void input();

	//output function
	virtual void output() const;
};

//extraction operator overload
istream& operator>>(istream& in, Vehicle& v);

//insertion operator overload
ostream& operator<<(ostream& out, const Vehicle& v);

// Function to write the object data to a file
ifstream& operator>>(ifstream& fin, Vehicle &obj);

// Function to read the object data from a file
ofstream& operator<<(ofstream& fout, Vehicle &obj);
