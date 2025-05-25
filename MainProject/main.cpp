#include "Plane.h"





int main() {
	Plane plane;

	cout << "Before: ";
	plane.print();

	plane.brand = "Boeing";
	plane.model = "474-400";
	plane.height = 15;
	plane.width = 120;
	plane.length = 100;
	plane.count = 700;
	plane.speed = 1000;
	plane.running = true;



	cout << "After: ";
	plane.print();

	Plane* ptrPlane = nullptr;
	ptrPlane = new Plane;



	ptrPlane->brand = "Boeing";
	ptrPlane->model = "373-100";
	ptrPlane->height = 11;
	ptrPlane->width = 110;
	ptrPlane->length = 90;
	ptrPlane->count = 350;
	ptrPlane->speed = 1000;
	ptrPlane->running = true;

	ptrPlane->print();

	return 0;
}