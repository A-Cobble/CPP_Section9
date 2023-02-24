#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	/*char letterGrade{};

	cout << "Enter the letter grade you expect on the exam: ";
	cin >> letterGrade;

	switch (letterGrade) {
	case 'a':
	case 'A':
		cout << "You need a 90 or above, study hard!" << endl;
		break;
	case 'b':
	case 'B':
		cout << "You need 80-89 for a B, go study!" << endl;
		break;
	case 'c':
	case 'C':
		cout << "You need 70-79 for an average greade" << endl;
		break;
	case 'd':
	case 'D':
		cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
		break;
	case 'f':
	case 'F': {
		char confirm{};
		cout << "Are you sure (Y/N)? ";
		cin >> confirm;
		if (confirm == 'y' || confirm == 'Y') {
			cout << "Ok, I guess you don't want to study..." << endl;
		}
		else if (confirm == 'n' || confirm == 'N') {
			cout << "Good - go study!" << endl;
		}
		else {
			cout << "Illegal choice" << endl;
		}
		break;
	}
		break;
	default:
		cout << "Sorry that is not a valid grade" << endl;
	}*/

	enum Direction {
		left, right, up, down
	};

	Direction heading{ left };

	switch (heading) {
	case left:
		cout << "Going left" << endl;
		break;
	case right:
		cout << "Going right" << endl;
		break;
	default:
		cout << "OK" << endl;
	}

	cout << endl;
	return 0;
}