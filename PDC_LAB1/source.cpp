#include"truth.h"

void Truth::setP(bool p) {
	this->p = p;
}

void Truth::setQ(bool q) {
	this->q = q;
}

bool Truth::isValid(string input) {
	return input.compare("0") == 0 || input.compare("1") == 0;
}

bool Truth::getVal(string input) {
	if (input.compare("0") == 0)
		return false;
	return true;
}

void Truth::Input() {
	string p, q;
	do {
		cout << "Введіть значення p(0/1): ";
		getline(cin, p);
		if (!isValid(p)) {
			cout << "Значення p введено не коректно, спробуйте ще раз." << endl;
			continue;
		}
		cout << "Введіть значення q(0/1): ";
		getline(cin, q);
		if (!isValid(q)) {
			cout << "Значення q введено не коректно, спробуйте ще раз." << endl;
			continue;
		}
		cout << "Complete." << endl;
		cout << endl;

		this->p = getVal(p);
		this->q = getVal(q);

		break;
	} while (true);
}

bool Truth::checkAnd() {
	bool res;
	if (this->p == true && this->q == true)
		res = true;
	else
		res = false;
	cout << "p AND q = " << p << " AND " << q << " = " << res << endl;
	return res;
}

bool Truth::checkOr() {
	bool res;
	if (this->p == true || this->q == true)
		res = true;
	else
		res = false;
	cout << "p OR q = " << p << " OR " << q << " = " << res << endl;
	return res;
}

bool Truth::checkXor() {
	bool res;
	if (this->p == true || this->q == true) {
		res = true;
		if (this->p == true && this->q == true)
			res = false;
	}
	else
		res = false;
	cout << "p XOR q = " << p << " XOR " << q << " = " << res << endl;
	return res;
}

bool Truth::checkFirstImplication() {
	bool res;
	if (!this->p == true || this->q == true)
		res = true;
	else
		res = false;
	cout << "!p OR q = " << !p << " OR " << q << " = " << res << endl;
	return res;
}

bool Truth::checkSecondImplication() {
	bool res;
	if (this->p == true || !this->q == true)
		res = true;
	else
		res = false;
	cout << "!q OR p = " << !q << " OR " << p << " = " << res << endl;
	return res;
}

bool Truth::checkEquivalence() {
	bool res, check1, check2;

	check1 = checkFirstImplication();
	check2 = checkSecondImplication();

	if (check1 == true && check2 == true)
		res = true;
	else
		res = false;

	cout << "p ~ q = (p -> q) AND (q -> p) = ";
	cout << "(!p OR q) AND (!q OR p)" << endl;

	cout << p << " ~ " << q << " = (" << p << " -> " << q;
	cout << ") AND (" << q << " -> " << p << ") = (";
	cout << !p << " OR " << q << ") AND (" << !q;
	cout << " OR " << p << ")  = " << check1 << " AND ";
	cout << check2 << " = " << res << endl;

	return res;
}

Truth::Truth() {
	Input();
	checkAnd();
	checkOr();
	checkXor();
	checkFirstImplication();
	checkSecondImplication();
	checkEquivalence();
}

Truth::Truth(bool p, bool q) {
	this->p = p;
	this->q = q;
}
