#include <iostream> 
#include <iomanip> 
using namespace std;
// This program uses a structure to hold data about a rectangle 
// It calculates the area and perimeter of a box 
// hudson phillips


/*
Enter the length of a rectangle: 9
Enter the width of a rectangle: 6


The area of the rectangle is 54.00
The perimeter of the rectangle is 30.00

C:\Users\hudso\source\repos\lab11\lab11\x64\Debug\lab11.exe (process 35912) exited with code 0 (0x0).
Press any key to close this window . . .

*/
struct dimensions
{
	float length;
	float width;
};
struct results
{
	float area;
	float perimeter;
};
struct rectangle
{
	dimensions sizes;
	results areaPerm;
};
float compArea(float x,float y);
float compPerm(float x, float y);
int main()
{
	float L, W;

	cout << "Enter the length of a rectangle: ";
	cin >> L;
	cout << "Enter the width of a rectangle: ";
	cin >> W;
	rectangle x = { {L,W} };
	cout << endl << endl;
	x.areaPerm.area = compArea(x.sizes.length, x.sizes.width);

	x.areaPerm.perimeter = compPerm(x.sizes.length, x.sizes.width);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "The area of the rectangle is " << x.areaPerm.area << endl;
	cout << "The perimeter of the rectangle is " << x.areaPerm.perimeter
		<< endl;
	return 0;
}

float compArea(float x, float y)
{
	return x * y;
}

float compPerm(float x, float y)
{
	return 2* x + 2*y;
}
