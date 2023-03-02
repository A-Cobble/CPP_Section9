#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {

	/*
		for loops are made up of 3 expressions
			for (initialization ; condition ; increment) {
				statements(s);
			}
	*/

	/*
		for (int i{ 0 }; i < 5; i++) {
			cout << i << endl;
		}
	*/

	/*
		for (int i{ 1 }; i <= 10; i++) {
			cout << i << endl;
		}

		for (int i{ 1 }; i <= 10; i += 2) {
			cout << i << endl;
		}

		for (int i{ 10 }; i >= 0; i--) {
			cout << i << endl;
		}
		cout << "Blastoff!" << endl;
	*/

	/*
		for (int i{ 10 }; i <= 100; i += 10) {
			if (i % 15 == 0) {
				cout << i << endl;
			}
		}
	*/

	/*for (int j{ 1 }, k{ 5 }; j <= 5; j++, k++) {
		cout << j << " * " << k << " : " << (j * k) << endl;
		cout << j << " + " << k << " = " << (j + k) << endl;
	}*/

	vector <int> nums{ 10,20,30,40,50 };
	for (unsigned i{ 0 }; i < nums.size(); i++) {
		cout << nums[i] << endl;
	}

	cout << endl;
	return 0;
}