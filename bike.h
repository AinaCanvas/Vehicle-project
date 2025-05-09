#include"vehicle.h"

class Bike :public Vehicle{
private:
	double height;
	bool selfStart;
	bool discBrake;
	static int numberOfBikes;
public:
	//Parameterized constructor with default arguments
	Bike(char* cn = "", char* c = "", int nw = 2, int p = 0, double h = 0.0, bool s = false, bool d = false);

	//copy constructor
	Bike(const Bike &b);

	//Destructor
	~Bike();

	//setters
	void setHeight(double h);
	void setSelfStart(bool s);
	void setDiscBrake(bool d);

	//Getters
	double getHeight()const;
	bool getSelfStart()const;
	bool getDiscBrake()const;
	static int getNumberOfBikes();

	//Assignment Operator
	Bike& operator=(const Bike &b);

	//vehicle type function
	void checkType();

	//Display function
	void display()const;

	//input function
	void input() override;

	//output function
	void output() const override;
};