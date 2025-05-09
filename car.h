#include"vehicle.h"

class Car :public Vehicle{
private:
	int noOfDoors;
	char* trasmission;
	int noOfSeats;
	static int numberOfCars;
public:
	//Parameterized constructor with default arguments
	Car(char* cn = "", char* c = "", int nw = 2, int p = 0, int nd = 0, char* t = "", int ns = 0);

	//Copy constructor
	Car(const Car &c);

	//Destructor
	~Car();

	//setters
	void setNoOfDoors(int ns);
	void setTrasmission(char* t);
	void setNoOfSeats(int ns);

	//Getters
	int getNoOfDoors()const;
	char* getTrasmission()const;
	int getNoOfSeats()const;
	int static getnumberOfCars();

	//Assignment operator
	Car& operator=(const Car &c);

	//vehicle type function
	void checkType();

	//Display function
	void display()const;

	//input function
	void input() override;

	//output function
	void output() const override;
};
