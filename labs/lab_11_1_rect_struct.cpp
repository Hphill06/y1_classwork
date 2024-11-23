#include <iostream> 
#include <iomanip> 
using namespace std;
// This program uses a structure to hold data about a rectangle 
// HUDSON PHILLIPS
// Fill in code to declare a structure named rectangle which has 
// members length, width, area, and perimeter all of which are floats 

/*
Enter the length of a rectangle: 51
Enter the width of a rectangle: 65


rect info:
Length: 51.00
Width: 65.00
Area: 3315.00
perimeter: 232.00
rect is a square: false
*/

struct rect
{
	float length;
	float width;
	float area;
	float perimeter;
	bool isSquare = false;
};
int main()
{
	float L, W;
	rect x1;
	// Fill in code to define a rectangle variable named box 
	cout << "Enter the length of a rectangle: ";
	cin >> x1.length;
	cout << "Enter the width of a rectangle: ";
	cin >> x1.width;
	// Fill in code to read in the width member of box 
	cout << endl << endl;
	x1.area = (x1.width * x1.length);
	x1.perimeter = (x1.width * 2 + x1.length * 2);
	if (x1.width == x1.length) {
		x1.isSquare = true;
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "rect info: " << endl;
	cout << "Length: " << x1.length << endl;
	cout << "Width: " << x1.width << endl;
	cout << "Area: " << x1.area << endl;
	cout << "perimeter: " << x1.perimeter << endl;
	cout << "rect is a square: ";
	if (x1.isSquare) {
		cout << "true";
	}
	else {
		cout << "false";

	}
	// Fill in code to output the area with an appropriate message 
	// Fill in code to output the perimeter with an appropriate message 
	return 0;
}
