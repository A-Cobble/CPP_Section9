#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::fixed;
using std::setprecision;

int main() {

	//Range-based for loop was added in C++ 11
	//can use the key word "auto" instead of declaring a variable type

	/*
		for (var_type var_name: sequence) {
			statement;
		}
	*/

	/*int scores[]{ 10, 20, 30 };

	for (auto score : scores) {
		cout << score << endl;
	}*/

	/*vector<double> temperatures{ 87.9, 77.9, 80.0, 72.5 };
	double averageTemp{};
	double total{};

	for (auto temp : temperatures) {
		total += temp;
	}
	if (temperatures.size() != 0) {
		averageTemp = total / temperatures.size();
	}

	cout << fixed << setprecision(1);
	cout << "Average temperature is " << averageTemp << endl;


	for (auto val : { 1, 2, 3, 4, 5 }) {
		cout << val << endl;
	}

	for (auto c : "This is a test") {
		if (c != ' ') {
			cout << c;
		}
	}*/

	for (auto c : "This is a test") {
		if (c == ' ') {
			cout << "\t";
		}
		else {
			cout << c;
		}
	}

	cout << endl;
	return 0;
}