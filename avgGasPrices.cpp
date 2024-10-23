/*
you need a .txt file inside the program as well with a format that is: 
01 1.2
01 1.3
...
12 2.3
12 2.4

the first value is the month, the second value is the price, you can do it by per week or day if you want to :)
sample file is included in this same folder

*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void fillVectors(string fileName, vector<int>& months, vector<double>& priceVals);
void getMonthlyAvgs(vector<int> months, vector<double> gasPriceValues, vector<double>& avgs);
void lowestPriceYearly(vector<double> listOfWeeklyAvgs);
void highestPriceYearly(vector<double> listOfWeeklyAvgs);
double getMonthlyAvgGasPrice(vector<double> prices);


int main() {
	cout << setprecision(3) << fixed;
	vector<int> monthValues;
	vector<double> gasPriceValues;
	vector<double> avgs;
	int counter = 0;
	fillVectors("gasprices.txt", monthValues, gasPriceValues);
	getMonthlyAvgs(monthValues, gasPriceValues, avgs);
	
	
	cout << "\n\LOWEST PRICE OF THE YEAR" << endl;
	lowestPriceYearly(gasPriceValues);
	cout << "\n\nHIGHEST PRICE OF THE YEAR" << endl;
	highestPriceYearly(gasPriceValues);
	cout << "\n\nMONTHY AVERAGES" << endl;
	for (double x : avgs) {
		counter++;
		cout <<"month: " << counter << " avg price: " << x << endl;
	}
	
	return 0;
}


void fillVectors(string fileName, vector<int>& months, vector<double>& priceVals)
{
	ifstream file;
	file.open(fileName);
	int x;
	double y;
	if (file.is_open()) {
		while (file >> x >> y) {
			months.push_back(x);
			priceVals.push_back(y);
		}
	}
	file.close();

}

void getMonthlyAvgs(vector<int> months, vector<double> gasPriceValues, vector<double>& avgs)
{
	int currentMonth = months[0];
	vector<double> currentMonthPrices; // will populate a list of the months prices, then cleared when a new month is starting
	for (int i = 0; i < months.size(); i++) {
		
		if (currentMonth != months[i] || (i == 51)) {
			//cout << "avrages for month #" << currentMonth << " have been processed!" << endl;
			avgs.push_back(getMonthlyAvgGasPrice(currentMonthPrices));
			
			currentMonth = months[i];
			currentMonthPrices.clear(); // resets the current months values for next months avgs to be set
		}
		//cout << currentMonth << " " << i << " " << gasPriceValues[i] << endl;

		currentMonthPrices.push_back(gasPriceValues[i]);
	}
}

void lowestPriceYearly(vector<double> listOfWeeklyAvgs)
{
	int count = 0, lowestPriceWeek = 1;

	double min = listOfWeeklyAvgs[0];
	for (double x : listOfWeeklyAvgs) {
		count++;
		if (x < min) {
			min = x;
			lowestPriceWeek = count;
		}
	}
	cout << "lowest price yearly: " << min << " week it occured: " << lowestPriceWeek << endl;

}

void highestPriceYearly(vector<double> listOfWeeklyAvgs)
{
	int count = 0, highestPriceWeek = 1;

	double max = listOfWeeklyAvgs[0];
	for (double x : listOfWeeklyAvgs) {
		count++;
		if (x > max) {
			max = x;
			highestPriceWeek = count;
		}
	}
	cout << "highest price yearly: " << max << " week it occured: " << highestPriceWeek << endl;
}

double getMonthlyAvgGasPrice(vector<double> prices)
{
	static int runningCounter = 0;
	double total = 0.0;
	int counter = 0;
	runningCounter++;
	//cout << "getMonthlyAvgGasPrice has been run " << runningCounter << endl;
	for (double x : prices) {
		total += x;
		//cout << x << endl;
		counter++;
	}
	return (total/counter);
}
