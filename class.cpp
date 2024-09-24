#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

const int arraySize = 4;

static void fucntion1() {
	string suits[arraySize] = { "spades", "clubs","diamonds","hearts" };

	for (int i = 0; arraySize > i; i++) {
		cout << suits[i] << endl;
	}
}

static void fucntion2() {
	string suit;

	for (int i = 0; 4 > i; i++) {
		switch (i) {
		case 0:
			suit = "spades";
			break;
		case 1:
			suit = "clubs";
			break;
		case 2:
			suit = "diamonds";
			break;
		case 3:
			suit = "hearts";
			break;

		}
		cout << suit << endl;
	}
}
int main() {
	auto start = high_resolution_clock::now();
	fucntion1();
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout <<"using array:" << duration.count() << endl;

	auto start1 = high_resolution_clock::now();
	fucntion2();
	auto stop1 = high_resolution_clock::now();
	auto duration1 = duration_cast<microseconds>(stop1 - start1);
	cout << "using switch:" << duration1.count() << endl;


}