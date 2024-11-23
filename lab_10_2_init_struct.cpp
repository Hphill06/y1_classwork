#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std;
// This program demonstrates partially initialized structure variables 
// hudson phillips

/*
please input the yearly income for Tim McGuiness: 30000
Name: Tim McGuiness
Social Security Number: 255871234
Taxes due for this year: $10500.00

please input the yearly income for John Kane: 6000
Name: John Kane
Social Security Number: 278990582
Taxes due for this year: $1740.00
*/
struct taxPayer
{
	string name;
	long socialSecNum;
	float taxRate;
	float income;
	float taxes;
};
int main()
{

	taxPayer cit1 = { "Tim McGuiness", 255871234 ,0.35 };
	taxPayer cit2 = { "John Kane", 278990582 ,0.29 };
	cout << fixed << showpoint << setprecision(2);
	cout << "please input the yearly income for " << cit1.name << ": ";
	cin >> cit1.income;
	cit1.taxes = cit1.income * cit1.taxRate;

	cout << "Name: " << cit1.name << endl;
	cout << "Social Security Number: " << cit1.socialSecNum << endl;
	cout << "Taxes due for this year: $" << cit1.taxes << endl << endl;

	cout << "please input the yearly income for " << cit2.name << ": ";
	cin >> cit2.income;
	cit2.taxes = cit2.income * cit2.taxRate;
	cout << "Name: " << cit2.name << endl;
	cout << "Social Security Number: " << cit2.socialSecNum << endl;
	cout << "Taxes due for this year: $" << cit2.taxes << endl << endl;
	return 0;
}