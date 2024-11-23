#include <iostream> 
#include <iomanip> 
using namespace std;
// This program demonstrates how to use an array of structures 
// hudson phillips
// Fill in code to declare a structure called taxPayer that has three 
// members: taxRate, income, and taxes — each of type float 

/*
Please enter the annual income and tax rate for 5 tax payers:


Enter this year's income for tax payer 1: 45000
Enter the tax rate for tax payer # 1: .19

Enter this year's income for tax payer 2: 60000
Enter the tax rate for tax payer # 2: .23

Enter this year's income for tax payer 3: 12000
Enter the tax rate for tax payer # 3: .01

Enter this year's income for tax payer 4: 104000
Enter the tax rate for tax payer # 4: .30

Enter this year's income for tax payer 5: 50000
Enter the tax rate for tax payer # 5: .22

Taxes due for this year:

Tax Payer # 1: $ 8550.00
Tax Payer # 2: $ 13800.00
Tax Payer # 3: $ 120.00
Tax Payer # 4: $ 31200.00
Tax Payer # 5: $ 11000.00
*/
struct taxPayer
{
	float taxRate;
	float income;
	float taxes;
};
int main()
{
	taxPayer payersArr[5];
	// Fill in code to define an array named citizen which holds 
	// 5 taxPayers structures 
	cout << fixed << showpoint << setprecision(2);
	cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	cout << endl << endl << endl;
	for (int count = 0; count < 5; count++)
	{
		cout << "Enter this year's income for tax payer " << (count + 1);
		cout << ": ";
		cin >> payersArr[count].income;
		cout << "Enter the tax rate for tax payer # " << (count + 1);
		cout << ": ";
		cin >> payersArr[count].taxRate;

		payersArr[count].taxes = payersArr[count].income * payersArr[count].taxRate;
		cout << endl;
	}
	cout << "Taxes due for this year: " << endl << endl;
	
	for (int i = 0; i < 5; i++){
		cout << "Tax Payer # " << (i + 1) << ": " << "$ "
			<< payersArr[i].taxes << endl;
	}
	
	return 0;
}
