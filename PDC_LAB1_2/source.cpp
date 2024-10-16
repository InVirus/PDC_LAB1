#include"truth.h"

void Truth::calcOr() {
	string c;
	c.resize(this->N);
	for (size_t i = 0; i < this->N; i++) {
		if (this->a.at(i) == '1' || this->b.at(i) == '1')
			c[i] = '1';
		else
			c[i] = '0';
	}
	this->setX(c);
	cout << "OR: " << this->x << endl;
}

void Truth::calcAnd() {
	string c;
	c.resize(this->N);
	for (size_t i = 0; i < this->N; i++) {
		if (this->a.at(i) == '1' && this->b.at(i) == '1')
			c[i] = '1';
		else
			c[i] = '0';
	}
	this->setY(c);
	cout << "AND: " << this->y << endl;
}

void Truth::calcXor() {
	string c;
	c.resize(this->N);
	for (size_t i = 0; i < this->N; i++) {
		if (this->a.at(i) == '1' || this->b.at(i) == '1') {
			c[i] = '1';
			if (this->a.at(i) == '1' && this->b.at(i) == '1')
				c[i] = '0';
		}
		else
			c[i] = '0';
	}
	this->setZ(c);
	cout << "XOR: " <<this->y << endl;
}

bool Truth::isValid(string input) {
	for (size_t i = 0; i < input.length(); i++)
		if (input.at(i) != '1' && input.at(i) != '0')
			return false;
	return true;
}

bool Truth::isEqualLength(string a, string b) {
	return a.length() == b.length();
}

void Truth::Input() {
	string a, b;
	do {
		cout << "Введіть a: ";
		getline(cin, a);
		if (!isValid(a)) {
			cout << "Значення повинно складатись лише з 1 / 0." << endl;
			continue;
		}
		cout << "Введіть b: ";
		getline(cin, b);
		if (!isValid(b)) {
			cout << "Значення повинно складатись лише з 1 / 0." << endl;
			continue;
		}
		if (!isEqualLength(a, b)) {
			cout << "Довжина двох бітових рядків повинна бути однакова." << endl;
			continue;
		}
		cout << "Complete." << endl;
		cout << endl;
		this->a = a;
		this->b = b;
		this->N = a.length();
		cout << "N = " << this->N << endl;
		break;
	} while (true);
}

Truth::Truth() {
	Input();
}

Truth::Truth(string a, string b) {
	if (isValid(a) && isValid(b) && isEqualLength(a, b)) {
		this->a = a;
		this->b = b;
		this->N = a.length();
	}
}
