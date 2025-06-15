#pragma once
#include <iostream>
#include <string>
using namespace std;

class Dragon {
private:
	int age;
	int head;

	void calculateHeads() {
		
	

		if (age <= 0) {
			return;
		}

		head = 3;

		if (age <= 200) {
			head += age * 3;
		}
		else if (age <= 300) {
			head += 200 * 3 + (age - 200) * 2;
		}
		else {
			head += 200 * 3 + 100 * 2 + (age - 300) * 1;
		}

	
	}

public:

	Dragon() : age(0), head(0) { }
	Dragon(int age) : age(age) {
		calculateHeads();
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		if (age > 0) {
			this->age = age;
			calculateHeads();
		}
	}

	int getHead() {
		return head;
	}

	int getEye() {
		return 2 * head;
	}

	string toString() {
		return "";
	}
};