#include "initializer.h"

int main() {
	int size;

	cout << "Input size of student: ";
	cin >> size;

	Student* students = new Student[size];

	Intialazer initialazer;

	initialazer.init(students, size);

	for (int i = 0; i < size; i++)
	{
		cout << students[i].toString() << endl;
	}

	delete[] students;

	return 0;
	return 0;


}