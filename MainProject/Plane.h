#include "main.h"

class Plane {

public:
	string brand;
	string model;
	double width;
	double length;
	double height;
	int speed;
	int count;
	bool running;

	string to_string() {
		string s = "";
		s += brand + " " + model;
		s += "(width = " + to_string(width);
		s += "height = " + to_string(height);
		s += "lenght = " + to_string(lenght);
		s += "speed = " + to_string(speed);
		s += "count of passengers = " + to_string(count);
		s += (running ? "working" : "repairing");
	}
};