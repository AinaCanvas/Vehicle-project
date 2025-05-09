#include"vehicle.h"

//global functions
//length function
int length(const char* str) {
	int i = 0;
	while (str[i] != '\0') i++;
	return i;
}
//copy function
void copy(const char* src, char* dest) {
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
//deep copy function
char* deepcopy(const char* N) {
	int size = length(N);
	char* D = new char[size + 1];
	copy(N, D);
	return D;
}
	//Parameterized constructor with default arguments
Vehicle::Vehicle(char* cn,char* c, int nw, int p, char* t){
		companyName = deepcopy(cn);
		color = deepcopy(c);
		numberOfWheels = nw;
		powerCC = p;
		typeOfVehicle = deepcopy(t);
	}
	//Copy Constructor
Vehicle::Vehicle(const Vehicle &v){
		companyName = deepcopy(v.companyName);
		color = deepcopy(v.color);
		numberOfWheels = v.numberOfWheels;
		powerCC = v.powerCC;
		typeOfVehicle = deepcopy(v.typeOfVehicle);
	}
	//destructor
Vehicle::~Vehicle(){
		if (companyName){
			delete[] companyName;
		}
		if (color){
			delete[] color;
		}
		if (typeOfVehicle){
			delete[] typeOfVehicle;
		}
	}
	//Setters for all private attributes
void Vehicle::setCompanyName(char* cn){
		if (companyName) delete[] companyName;
		companyName = deepcopy(cn);
	}
void Vehicle::setColor(char* c){
		if (color) delete[] color;
		color = deepcopy(c);
	}
void Vehicle::setNumberOfWheels(int nw){
		numberOfWheels = nw;
	}
void Vehicle::setPower(int p){
		powerCC = p;
	}
void Vehicle::setTypeOfVehicle(char* t){
		if (typeOfVehicle) delete[] typeOfVehicle;
		typeOfVehicle = deepcopy(t);
	}
	//Getters
char* Vehicle::getCompanyName() const {
		return companyName;
	}
char* Vehicle::getColor() const {
		return color;
	}
int Vehicle::getNumberOfWheels() const {
		return numberOfWheels;
	}
int Vehicle::getPower() const {
		return powerCC;
	}
char* Vehicle::getTypeOfVehicle() const {
		return typeOfVehicle;
	}
	//Assignment Operator
Vehicle& Vehicle::operator=(const Vehicle &v){
		if (this != &v){
			if (companyName) delete[] companyName;
			if (color) delete[] color;
			if (typeOfVehicle) delete[] typeOfVehicle;
			companyName = deepcopy(v.companyName);
			color = deepcopy(v.color);
			numberOfWheels = v.numberOfWheels;
			powerCC = v.powerCC;
			typeOfVehicle = deepcopy(v.typeOfVehicle);
		}
		return *this;
	}

//display function
        void Vehicle::display()const{
		cout << "                  Vehicle details" << endl;
		cout << "Company Name: " << companyName << endl;
		cout << "Color: " << color << endl;
		cout << "Number of Wheels: " << numberOfWheels << endl;
		cout << "Power (CC): " << powerCC << endl;
		cout << "Type of Vehicle: " << typeOfVehicle << endl;
	}
	//input function
    void Vehicle::input() {
		cout << "Enter Company Name: ";
		cin >> companyName;
		cout << "Enter Color: ";
		cin >> color;
		cout << "Enter Number of Wheels: ";
		cin >> numberOfWheels;
		cout << "Enter Power (CC): ";
		cin >> powerCC;
		cout << "Enter Type of Vehicle: ";
		cin >> typeOfVehicle;
	}
	//output function
    void Vehicle::output() const {
		cout << "Company Name: " << companyName << endl;
		cout << "Color: " << color << endl;
		cout << "Number of Wheels: " << numberOfWheels << endl;
		cout << "Power (CC): " << powerCC << endl;
		cout << "Type of Vehicle: " << typeOfVehicle << endl;
	}

//extraction operator overload
istream& operator>>(istream& in, Vehicle& v){
	v.input();
	return in;
}
//insertion operator overload
ostream& operator<<(ostream& out, const Vehicle& v){
	v.output();
	return out;
}

// Function to write the object data to a file
ifstream& operator>>(ifstream& fin, Vehicle &obj)
{
	obj.input();
	return fin;
}

// Function to read the object data from a file
ofstream& operator<<(ofstream& fout, Vehicle &obj)
{
	obj.output();
	return fout;
}
