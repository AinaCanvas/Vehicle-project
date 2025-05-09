#include"vehicle.h"

class Truck :public Vehicle{
private:
	double containerSize;
	char* category;
	bool fourWheelDrive;
	static int numberOfTrucks;
public:
	//Parameterized constructor with default arguments
	Truck(char* cn = "",char* c = "", int nw = 2, int p = 0, double cs = 0.0, char* cat = "", bool fw = false);

	//Copy constructor
	Truck(const Truck &t);

	//Destructor
	~Truck();

	//Setters
	void setContainerSize(double cs);
	void setCategory(char* c);
	void setfourWheelDrive(bool fw);

	//Getters
	double getContainerSize()const;
	char* getCategory()const;
	bool getfourWheelDrive()const;
	static int getnumberOfTrucks();

	//Asignment operator
	Truck& operator=(const Truck &t);

	//vehicle type function
	void checkType();

	//Display function
	void display()const;

	//input function
	void input() override;

	//output function
	void output() const override;

};