#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {

	/*int score{};

	cout << "Enter your score on the exam (0-100): ";
	cin >> score;
	char letter_grade{};

	if (score >= 0 && score <= 100) {
		if (score > 90) 
			letter_grade = 'A';
		else if (score > 80) 
			letter_grade = 'B';
		else if (score > 70) 
			letter_grade = 'C';
		else if (score > 60) 
			letter_grade = 'D';
		else 
			letter_grade = 'F';

		cout << "Your grade is: " << letter_grade << endl;
		if (letter_grade == 'F')
			cout << "Sorry, you must repeat the class" << endl;
		else
			cout << "Congrats!" << endl;
	}
	else {
		cout << "Sorry, " << score << " is not in range" << endl;
	}*/










	/*
		Shipping cost calculator

		Ask the user for package dimension in inches
		length, width, height - these should be integers

		All dimensions must be 10 inches or less or we cannot ship it

		Base cost $2.50
		If package volume is greater than 100 cubic inches there is a 10% surcharge
		If package volume is greater than 500 cubic inches there is a 25% surcharge
	*/

	/*int length{ 0 };
	int width{ 0 };
	int height{ 0 };
	double baseCost{ 2.5 };
	cout << "Please enter the length, width, and height of your package as integers, separated by spaces. All dimensions must be 10 inches or less or we cannot ship it.";
	cin >> length >> width >> height;
	if (length <= 10 && width <= 10 && height <= 10) {
		if (length * width * height > 500) {
			double largePackage{ baseCost * 1.25 };
			cout << "The total cost to ship your package is $" << largePackage << endl;
		}
		else if (length * width * height > 100){
			double mediumPackage{ baseCost * 1.10 };
			cout << "The total cost to ship your package is $" << mediumPackage << endl;
		}
		else {
			cout << "The total cost to ship your package is $" << baseCost << endl;
		}
	}
	else {
		cout << "Unfortunately we are unable to ship your package." << endl;
	}*/

	int length{}, width{}, height{};
	double baseCost{ 2.50 };

	const int tier1Threshold{ 100 }; //volume
	const int tier2Threshold{ 500 }; //volume

	int maxDimensionLength{ 10 }; //inches

	double tier1Surcharge{ 0.10 }; //10% extra
	double tier2Surcharge{ 0.25 }; //25% extra

	//All dimensions must be 10 inches or less

	int packageVolume{};

	cout << "Welcome to the package cost calculator" << endl;
	cout << "Enter length, width, and height of the package separated by spaces: ";
	cin >> length >> width >> height;

	if (length > maxDimensionLength || width > maxDimensionLength || height > maxDimensionLength) {
		cout << "Sorry, package rejected - dimension exceeded" << endl;
	}
	else {
		double packageCost{};
		packageVolume = length * width * height;
		packageCost = baseCost;

		if (packageVolume > tier2Threshold) {
			packageCost += packageCost * tier2Surcharge;
			cout << " adding tier 2 surcharge" << endl;
		}
		else if (packageVolume > tier1Threshold) {
			packageCost += packageCost * tier1Surcharge;
			cout << " adding tier 1 surcharge" << endl;
		}

		cout << fixed << setprecision(2); //prints dollars nicely
		cout << "The volume of your package is: " << packageVolume << endl;
		cout << "Your package will cost $" << packageCost << " to ship." << endl;
	}
	
	
	cout << endl;
	return 0;
}