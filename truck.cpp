#include"truck.h"

int Truck::numberOfTrucks = 0;

	//Parameterized constructor with default arguments
Truck::Truck( char* cn, char* c, int nw, int p, double cs, char* cat, bool fw) : Vehicle(cn, c, nw, p){
		containerSize = cs;
		category = deepcopy(c);
		fourWheelDrive = fw;                       
		numberOfTrucks++;
	}
	//Copy constructor
Truck::Truck(const Truck &t) : Vehicle(t){
		containerSize = t.containerSize;
		category = deepcopy(t.category);
		fourWheelDrive = t.fourWheelDrive;
		numberOfTrucks++;
	}
	//Destructor
Truck::~Truck(){
		if (category){
			delete[] category;
		}
		numberOfTrucks--;
	}
	//Setters
void Truck::setContainerSize(double cs){
		containerSize = cs;
	}
void Truck::setCategory(char* c){
		if (category){
			delete[] category;
		}
		category = deepcopy(c);
	}
void Truck::setfourWheelDrive(bool fw){
		fourWheelDrive = fw;
	}
	//Getters
double Truck::getContainerSize()const {
		return containerSize;
	}
char* Truck::getCategory()const {
		return category;
	}
bool Truck::getfourWheelDrive()const {
		return fourWheelDrive;
	}
int Truck::getnumberOfTrucks(){
		return numberOfTrucks;
	}
	//Asignment operator
Truck& Truck::operator=(const Truck &t){
		if (category){
			delete[] category;
		}
		if (this != &t){
			containerSize = t.containerSize;
			category = deepcopy(t.category);
			fourWheelDrive = t.fourWheelDrive;
		}
		return *this;
	}
	//vehicle type function
void Truck::checkType(){
		if (getNumberOfWheels() >= 6){
			cout << "Vehicle is Truck." << endl;
		}
	}
	//Display function
void Truck::display()const{
		Vehicle::display();
		cout << "Container size of truck: " << containerSize << endl;
		cout << "Category of truck: " << category << endl;
		cout << "car is four wheel drive or not: " << fourWheelDrive << endl;
	}
	//input function
void Truck::input() {
		Vehicle::input();
		cout << "Enter Container Size: ";
		cin >> containerSize;
		cout << "Enter Truck Category: ";
		cin >> category;
		cout << "Is the Truck Four-Wheel Drive? (1 for Yes, 0 for No): ";
		cin >> fourWheelDrive;
	}
	//output function
void Truck::output() const {
		Vehicle::output();
		cout << "Container Size: " << containerSize << endl;
		cout << "Truck Category: " << category << endl;
		cout << "Four-Wheel Drive: " << (fourWheelDrive ? "Yes" : "No") << endl;
	}