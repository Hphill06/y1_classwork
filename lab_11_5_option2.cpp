#include <iostream>
#include <cstdlib>
#include <iomanip>
//hudson phillips

/* i used a clear thing to make the program look better, so it only prints out the result at the end i also just used keyboard spam data so this might not be logical info
averages:
landed : 101.67
departed : 23.50
day max : 22.83
day min : 21.67

*/
using namespace std;
struct Month
{
	float planesLanded;
	float planesDeparted;
	float maxInDay;
	float leastInDay;
};
Month getAvrages(Month year[]);
int main() {
	const int months = 12;
	Month year[months];
	cout << "enter data for the year: " << endl;
	for (int i = 0; i < months; i++) {
		cout << "month #" << (i + 1) << ": " << endl;
		cout << "total number of planes landed: ";
		cin >> year[i].planesLanded;
		cout << "total number of planes departed: ";
		cin >> year[i].planesDeparted;
		cout << "max number of planes landed in one day: ";
		cin >> year[i].maxInDay;
		cout << "least number of planes landed in one day: ";
		cin >> year[i].leastInDay;
		system("cls");
	}
	cout << setprecision(2) << fixed;
	Month avg = getAvrages(year);
	cout << "averages: " << endl;
	cout << "landed : " << avg.planesLanded << endl;
	cout << "departed : " << avg.planesDeparted << endl;
	cout << "day max : " << avg.maxInDay << endl;
	cout << "day min : " << avg.leastInDay << endl;

	return 0;

}

Month getAvrages(Month year[])
{
	int size = 12;
	float landed = 0, depart = 0, max = 0, min = 0;
	for (int i = 0; i < size; i++) {
		landed += year[i].planesLanded;
		depart += year[i].planesDeparted;
		max += year[i].maxInDay;
		min += year[i].leastInDay;
	}
	return { landed / size, depart / size, max / size, min / size };
}
