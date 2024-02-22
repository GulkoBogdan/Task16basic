#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//1
	int a1;
	int b1;
	int r1 = 0;

	cout << "Input your number: ";
	do {
		cin >> a1;
	} while (a1 <= 0);

	while (a1 > 0) {
		b1 = a1 % 10;
		a1 = a1 / 10;
		if (b1 % 2 == 0) {
			r1++;
		}
	}

	cout << "Count of even numbers: " << r1 << endl;

	//2
	int a2;
	int b2;
	int c2;
	string r2;

	cout << "Input your number: ";
	do {
		cin >> a2;
	} while (a2 <= 0);

	while (a2 > 0) {
		b2 = a2 % 10;
		c2 = a2 / 10 % 10;
		a2 = a2 / 10;
		if (b2 % 2 != 0 && c2 % 2 != 0) {
			cout << "They are all odd same." << endl;
			break;
		}
		else if (b2 % 2 == 0 && c2 % 2 == 0) {
			cout << "They are even same." << endl;
			break;
		}
		else {
			cout << "There arnt same even or odd" << endl;
			break;
		}
	}

	//3
	int a3;
	int b3;
	int c3;
	int d3;
	int r3 = 0;

	cout << "Input your number: ";
	do {
		cin >> a3;
	} while (a3 <= 0);

	while (a3 > 0) {
		b3 = a3 % 10;
		c3 = a3 / 10 % 10;
		d3 = c3 + b3;
		r3 += d3;
		a3 = a3 / 100;

	}
	cout << "Summ of number is: " << r3 << endl;

	//4
	int a4;
	int b4;
	int r4e = 0;
	int r4en = 0;

	cout << "Input your number: ";
	do {
		cin >> a4;
	} while (a4 <= 0);

	while (a4 > 0) {
		b4 = a4 % 10;
		a4 = a4 / 10;
		if (b4 % 2 == 0) {
			r4e++;
		}
		else if (b4 % 2 != 0) {
			r4en++;
		}
		else {
			//nothing)
		}
	}

	cout << "Count of even numbers: " << r4e << endl;
	cout << "Count of odd numbers: " << r4en << endl;

	//5
	int a5;
	int b5;
	int c5;
	int d5{};
	int r5 = 0;

	cout << "Input your number: ";
	do {
		cin >> a5;
	} while (a5 <= 0);

	while (a5 > 0) {
		b5 = a5 % 10;
		c5 = a5 / 10 % 10;

		if (b5 >= c5) {
			d5 = b5;
		}
		else if (b5 <= c5) {
			d5 = c5;
		}
		if (r5 < d5) {
			r5 = d5;
		}
		a5 = a5 / 10;


	}
	cout << "The biggest number is: " << r5 << endl;

	//6
	int a6;
	int b6;
	int r6e = 0;
	int r6en = 0;

	cout << "Input your number: ";
	do {
		cin >> a6;
	} while (a6 <= 0);

	while (a6 > 0) {
		b6 = a6 % 10;
		a6 = a6 / 10;
		if (b6 % 2 == 0) {
			r6e++;
		}
		else if (b6 % 2 != 0) {
			r6en++;
		}

	}if (r6e > r6en) {
		cout << "There are more even numbers" << endl;
	}
	else if (r6e < r6en) {
		cout << "There are more odd numbers" << endl;
	}
	else {
		cout << "There are same count of odd and even numbers" << endl;
	}

	//7
	int a7;
	int b7;
	int c7;
	string r7 = "We have no same pair of numbers";

	cout << "Input your number: ";
	do {
		cin >> a7;
	} while (a7 <= 0);

	while (a7 > 0) {
		b7 = a7 % 10;
		c7 = a7 / 10 % 10;
		a7 = a7 / 10;
		if (b7 == c7) {
			r7 = "We have same pair of numbers";
			break;
		}

	}
	cout << r7 << endl;


	int a8;
	int b8 = 0;
	int c8;
	int r8;

	cout << "Input your number: ";
	do {
		cin >> a8;
	} while (a8 <= 0);
	int d8 = a8;
	while (a8 > 0) {
		a8 = a8 / 10;
		b8++;
	}
	for (int i = 0; i >= b8; i++) {
		c8 = a8 % 10 * pow(10, b8);
		a8 / 10;
		b8--;
		r8 = a8 + c8;
	}
	if (r8 == d8) {
		cout << "It is polindrom";
	}
	else {
		cout << "It isnt polindrom";
	}

	return 0;
}