// This program takes two numbers (payRate & hours) 
// and multiplies them to get grosspay. 
// It then calculates net pay by subtracting 15% 
//PLACE YOUR NAME HERE

#include <iostream> 
#include <iomanip> 
using namespace std;
void printDescription() // The function heading 
{
	cout << "************************************************" << endl << endl;
	cout << "This program takes two numbers (payRate & hours)" << endl;
	cout << "and multiplies them to get gross pay " << endl;
	cout << "it then calculates net pay by subtracting 15%"<< endl << endl;
	cout << "************************************************" << endl << endl;
}
void computePaycheck(float rate, int time, float& gross, float& net) {
	

	gross = (rate * time);
	net = gross * 0.85;

}
int main()
{
	float payRate;
	float grossPay;
	float netPay;
	int hours;
	cout << setprecision(2) << fixed;
	cout << "Welcome to the Pay Roll Program" << endl;
	printDescription(); //Call to Description function 
	cout << "Please input the pay per hour" << endl;
	cin >> payRate;
	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;
	cout << endl << endl;
	computePaycheck(payRate, hours, grossPay, netPay);
	
	cout << "We hope you enjoyed this program" << endl;
	return 0;
}
