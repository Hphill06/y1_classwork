

//HUDSON PHILLIPS

/*

enter the first number
then hit enter
80
enter the second number
then hit enter
70
you input the numbers as 80 and 70.
after swapping. the first value has the value 70 which was the value of the second number
the second number has the value 80 which was the value of the first number

*/
#include <iostream>

using namespace std;

void swapVals(float &val1, float &val2) {
	float temp = val1;

	val1 = val2;
	val2 = temp;

}


int main() {
	float valueOne, valueTwo;

	cout << "enter the first number " << endl << "then hit enter" << endl;
	cin >> valueOne;
	cout << "enter the second number " << endl << "then hit enter" << endl;
	cin >> valueTwo;
	cout << "you input the numbers as " << valueOne << " and " << valueTwo << "." << endl;
	swapVals(valueOne, valueTwo);
	cout << "after swapping. the first value has the value " << valueOne << " which was the value of the second number" << endl;
	cout << "the second number has the value " << valueTwo << " which was the value of the first number" << endl;
	


	return 0;
}
