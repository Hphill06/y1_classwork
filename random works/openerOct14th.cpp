#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>


using namespace std;

int draw();
void drawTest();
int main() {

	srand(time(0));
	drawTest();

	return 0;
}

int draw()
{
	return rand() % 52; // random number between 0 and 51
}

void drawTest()
{
	int couter = 1;
	for (int i = 0; i < 200; i++) {
		cout << couter << "|| ";
		cout << draw() << endl;
		couter++;
	}
}
