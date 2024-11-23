#include <iostream>
#include <string>
using namespace std;

const int numSuits = 4;
const int numRanks = 13;
const int TOTALCARDS = 52;
const string suits[numSuits] = { "spades", "clubs", "diamonds" , "hearts" }; // 0,1,2,3
const string ranks[numRanks] = { "ace" , "2" , "3" , "4", "5", "6" ,"7", "8", "9" , "10" , "jack" , "queen" , "king" };
string deck[TOTALCARDS];

string getSuitName(int suitNum);
string getRankName(int rankNum);
void InitializeDeck();



int main() {
	InitializeDeck();
	for (int i = 0; i < TOTALCARDS; i++) {
		cout << deck[i] << endl;
	}
	return 0;
}

string getSuitName(int suitNum)
{
	int safeNum = suitNum % 4;
	return suits[safeNum];
}

string getRankName(int rankNum)
{
	int safeNum = rankNum % 14;
	return ranks[safeNum];
}

void InitializeDeck()
{

	for (int i = 0; i < TOTALCARDS; i++) {
			deck[i] = "the " + getRankName(i % 13 ) +
				" of " + getSuitName(i / 13);
	}
}



