#include"car.h"

int Car::numberOfCars = 0;

	//Parameterized constructor with default arguments
Car::Car(char* cn, char* c, int nw, int p, int nd, char* t, int ns) : Vehicle(cn, c, nw, p){
		noOfDoors = nd;
		trasmission = deepcopy(t);
		noOfSeats = ns;
		numberOfCars++;
	}
	//Copy constructor
Car::Car(const Car &c) : Vehicle(c){
		noOfDoors = c.noOfDoors;
		trasmission = deepcopy(c.trasmission);
		noOfSeats = c.noOfSeats;
		numberOfCars++;
	}
	//Destructor
Car::~Car(){
		if (trasmission){
			delete[] trasmission;
		}
		numberOfCars--;
	}
	//setters
void Car::setNoOfDoors(int ns){
		noOfDoors = ns;
	}
void Car::setTrasmission(char* t){
		if (trasmission){
			delete[] trasmission;
		}
		trasmission = deepcopy(t);
	}
void Car::setNoOfSeats(int ns){
		noOfSeats = ns;
	}
	//Getters
int Car::getNoOfDoors()const {
		return noOfDoors;
	}
char* Car::getTrasmission()const {
		return trasmission;
	}
int Car::getNoOfSeats()const {
		return noOfSeats;
	}
int Car::getnumberOfCars(){
		return numberOfCars;
	}
	//Assignment operator
Car& Car::operator=(const Car &c){
		if (trasmission){
			delete[] trasmission;
		}
		if (this != &c){
			noOfDoors = c.noOfDoors;
			trasmission = deepcopy(c.trasmission);
			noOfSeats = c.noOfSeats;
		}
		return *this;
	}
	//vehicle type function
void Car::checkType(){
		if (getNumberOfWheels() == 4){
			cout << "Vehicle is Car." << endl;
		}
	}
	//Display function
void Car::display()const{
		Vehicle::display();
		cout << "Number of doors of Car: " << noOfDoors << endl;
		cout << "Trasmission of Car: " << trasmission << endl;
		cout << "Number of seats of car: " << noOfSeats << endl;
	}
	//input function
void Car::input() {
		Vehicle::input();
		cout << "Enter Number of Doors: ";
		cin >> noOfDoors;
		cout << "Enter Transmission Type: ";
		cin >> trasmission;
		cout << "Enter Number of Seats: ";
		cin >> noOfSeats;
	}
	//output function
void Car::output() const {
		Vehicle::output();
		cout << "Number of Doors: " << noOfDoors << endl;
		cout << "Transmission Type: " << trasmission << endl;
		cout << "Number of Seats: " << noOfSeats << endl;
	}
