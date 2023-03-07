#include <iostream>
#include <vector>

using namespace std;

int main() {
	/*
		do {
			statements;
		} while (expression);
	*/

	char selection{};

	do {
		cout << "\n---------------------------" << endl;
		cout << "1. do this" << endl;
		cout << "2. do that" << endl;
		cout << "3. do something else" << endl;
		cout << "q. quit" << endl;
		cout << "\nenter your selection: ";
		cin >> selection;

		if (selection == '1') {
			cout << "you chose 1 - doing this" << endl;
		}
		else if (selection == '2') {
			cout << "you chose 2 - doing that" << endl;
		}
		else if (selection == '3') {
			cout << "you chose 3 - doing something else" << endl;
		}
		else if (selection == 'q' || selection == 'q') {
			cout << "goodbye ..." << endl;
		}
		else {
			cout << "unknown option -- try again ..." << endl;
		}

	} while (selection != 'q' && selection != 'q');

	cout << endl;
	return 0;
}