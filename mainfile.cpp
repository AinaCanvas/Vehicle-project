#include"vehicle.h"
#include"bike.h"
#include"car.h"
#include"truck.h"

int main() {
	Bike bike1;
	cout << "Enter details for Bike:" << endl;
	cin >> bike1; 
	cout << endl << "Details of Bike entered:" << endl;
	cout << bike1;
	bike1.checkType();
	cout << "Number of Bikes: " << Bike::getNumberOfBikes() << endl << endl;

	Car car1;
	cout << "Enter details for Car:" << endl;
	cin >> car1; 
	cout << endl << "Details of Car entered:" << endl;
	cout << car1; 
	car1.checkType();
	cout << "Number of Cars: " << Car::getnumberOfCars() << endl << endl;

	Truck truck1;
	cout << "Enter details for Truck:" << endl;
	cin >> truck1; 
	cout << endl << "Details of Truck entered:" << endl;
	cout << truck1;
	truck1.checkType();
	cout << "Number of Trucks: " << Truck::getnumberOfTrucks() << endl << endl;

	system("pause");
	return 0;
}