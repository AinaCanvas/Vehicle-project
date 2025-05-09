#include"bike.h"

int Bike::numberOfBikes = 0;

	//Parameterized constructor with default arguments
Bike::Bike(char* cn, char* c, int nw, int p, double h, bool s, bool d) : Vehicle(cn, c, nw, p){
		height = h;
		selfStart = s;
		discBrake = d;
		numberOfBikes++;
	}
	//copy constructor
Bike::Bike(const Bike &b) : Vehicle(b){
		height = b.height;
		selfStart = b.selfStart;
		discBrake = b.discBrake;
		numberOfBikes++;
	}
	//Destructor
Bike::~Bike(){
		numberOfBikes--;
	}
	//setters
void Bike::setHeight(double h){
		height = h;
	}
void Bike::setSelfStart(bool s){
		selfStart = s;
	}
void Bike::setDiscBrake(bool d){
		discBrake = d;
	}
	//Getters
double Bike::getHeight()const {
		return height;
	}
bool Bike::getSelfStart()const {
		return selfStart;
	}
bool Bike::getDiscBrake()const {
		return discBrake;
	}
int Bike::getNumberOfBikes(){
		return numberOfBikes;
	}
	//Assignment Operator
Bike& Bike::operator=(const Bike &b){
		if (this != &b){
			height = b.height;
			selfStart = b.selfStart;
			discBrake = b.discBrake;
		}
		return *this;
	}
	//vehicle type function
void Bike::checkType(){
		if (getNumberOfWheels() == 2){
			cout << "Vehicle is Bike." << endl;
		}
	}
	//Display function
void Bike::display()const{
		Vehicle::display();
		cout << "Height of bike is: " << height << endl;
		cout << "Bike is self satrt or not: " << selfStart << endl;
		cout << "Bike has disc brake or not: " << discBrake << endl;
	}
	//input function
void Bike::input() {
		Vehicle::input();
		cout << "Enter Bike Height: ";
		cin >> height;
		cout << "Is the Bike Self-Start? (1 for Yes, 0 for No): ";
		cin >> selfStart;
		cout << "Does the Bike have Disc Brake? (1 for Yes, 0 for No): ";
		cin >> discBrake;
	}
	//output function
void Bike::output() const {
		Vehicle::output();
		cout << "Bike Height: " << height << endl;
		cout << "Self-Start: " << (selfStart ? "Yes" : "No") << endl;
		cout << "Disc Brake: " << (discBrake ? "Yes" : "No") << endl;
	}