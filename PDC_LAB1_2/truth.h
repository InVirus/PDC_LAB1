#pragma once
#include<iostream>
#include<string>

using namespace std;

class Truth {
private:
	unsigned int N;

	string a, b;

	string x = "", y = "", z = "";

	void setX(string x) { this->x = x; };
	void setY(string y) { this->y = y; };
	void setZ(string z) { this->z = z; };

	void Input();

	bool isValid(string input);
	bool isEqualLength(string a, string b);
public:
	void calcOr();
	void calcAnd();
	void calcXor();

	string getOR() const { return this->x; }
	string getAND() const { return this->y; }
	string getXOR() const { return this->z; }

	Truth();
	Truth(string a, string b);
};
