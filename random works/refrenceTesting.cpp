#include <iostream>

using namespace std;


double ferhenToCel(double &x) {

	x = (5.0 / 9.0) * (x - 32);
	return x;
	
}

double ferhenToCel2(double x) {

	x = (5.0 / 9.0) * (x - 32);
	return x;

}

int main() {

	// this version show show temp1 is change due to its adress being passed into ferhenToCel opposed to just the value
	double temp1 = 231,temp2 = temp1;
	cout << "BEFORE temp1: " << temp1 << endl;
	cout << ferhenToCel(temp1) << endl;
	cout << "AFTER  temp1: " << temp1 << endl;

	// this version shows temp2
	cout << "BEFORE temp2: " << temp2 << endl;
	cout << ferhenToCel2(temp2) << endl;
	cout << "AFTER  temp2: " << temp2 << endl;


	return 0;
}
