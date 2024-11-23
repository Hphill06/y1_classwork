//HUDSON PHILLIPS


#include <iostream>
#include <cmath>
#include <string>
#include <iomanip> 
using namespace std;
const double pi = 3.1416;
// start 12pm
// end 12:50 pm

double askforVal(bool radiusOrHeight, string typeOfSHape) // first value ture = radius false = height;
{
	// couldve used a terary opperator isntead  
	string startOfString;
	double x1;
	startOfString = radiusOrHeight ? "radius" : "height";
	cout << startOfString << " of the " << typeOfSHape << ": ";
	cin >> x1;
	return x1;
}

double getVol(int type,double r, double h) // type 1 = cylinder 2 = sphere 3 = cone | radius and height
{
	double vol;
	switch (type) {
	case 1:
		vol = pi * pow(r, 2) * h;
		break;
	case 2:
		vol = (static_cast<double>(4) / static_cast<double>(3)) * pi * pow(r, 3);
		break;
	case 3:
		vol =( static_cast<double>(1)/ static_cast<double>(3) )* pi * pow(r, 2) * h;
		break;

	}
	return vol;
}

int main() {


	string userName;
	bool whileLoop;
	int menuSelect;
	double radius, height, volume, handling_charge, shipping_charge, total_Charge;

	
	whileLoop = true;

	cout << "buyer name: ";
	getline(cin, userName);

	while(whileLoop) {
		// cout of list below could be similfied using a array of cylidner, sphere, cone, quit and a for loop
		cout << "1| Cylinder" << endl;
		cout << "2| Sphere" << endl;
		cout << "3| Cone" << endl;
		cout << "4| Quit" << endl;
		cout << "\nmenu choice: ";
		cin >> menuSelect;
		cout << "\n";
		switch (menuSelect) {
		case 1:
			radius = askforVal(true, "Cylinder"); 
			height = askforVal(false, "Cylinder");
			whileLoop = false;
			break;
		case 2:
			radius = askforVal(true, "Sphere");
			height = 0; // not used
			whileLoop = false;
			break;
		case 3:
			radius = askforVal(true, "Cone");
			height = askforVal(false, "Cone");
			whileLoop = false;
			break;
		case 4:
			cout << " thank you for using this program :)";
			whileLoop = false;
			break;
		default:
			cout << "Invalid menu choice -  run program again" << endl;
			whileLoop = false;
		}

	} 

	
	

	if (menuSelect < 4) {
		volume = getVol(menuSelect, radius, height);
		cout << "\n\n\nShipping charges for " << userName << "\n" << endl;
		switch (menuSelect) {
		case 1:
			cout << "Dimensions of the Cylinder:" << endl;
			cout << "radius:" << radius << endl;
			cout << "height:" << height << endl;

			break;
		case 2:
			cout << "Dimensions of the Sphere:" << endl;
			cout << "radius:" << radius << endl;

			break;
		case 3:
			cout << "Dimensions of the Cone:" << endl;
			cout << "radius:" << radius << endl;
			cout << "height:" << height << endl;

			break;

		}

		cout << setprecision(1) << fixed << showpoint;
		cout << "\nVolume: " << volume << " cubic inches\n";
		cout << setprecision(2) << fixed << showpoint;

		if (volume > 0 && volume <= 150) {
			handling_charge = 2.35;
			shipping_charge = volume * 0.15;
		}
		else if (15 < volume && volume <= 250) {
			handling_charge = 5.75;
			shipping_charge = (volume- 150)* 0.25;
		}
		else if (250 < volume && volume <= 350) {
			handling_charge = 10.50;
			shipping_charge = (volume- 250) * 0.35;
		}
		else if ( volume > 350) {
			handling_charge = 15.25;
			shipping_charge = (volume -350)* 0.45;
		}
		total_Charge = handling_charge + shipping_charge;
		cout << "\nhandling_charge................" << handling_charge << endl;
		cout << "shipping charge................" << shipping_charge << endl;
		cout << "total.........................." << total_Charge << endl;
	}
	



	
	
	return 0;
}
