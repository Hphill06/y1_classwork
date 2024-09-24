#include <iostream>
#include <chrono>
#include <string>
#include <thread>
#include <iomanip>



using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main() {

    int userHour, userMin, userSec;
    // need to temporarly set something to 

    cout << "welcome to the timer!" << endl;
    cout << "Hours:" << endl;
    cin >> userHour;
    cout << "Minutes:" << endl;
    cin >> userMin;
    cout << "Seconds:" << endl;
    cin >> userSec;

    cout << "\n\ntimer starting\n_________________\n\n";
    for (int hour = userHour ; hour >= 0; hour--) {
        for (int minute = userMin; minute >= 0; minute--) {
            for (int second = userSec; second >= 0; second--) {

                cout << setw(2) << hour << ":";
                cout << setw(2) << minute << ":";
                cout << setw(2) << second << endl;
                sleep_until(system_clock::now() + seconds(1));
            }
            userSec = 59; // sets a min back to being 59 seconds since when its first run user sec is treated as the length of a full min
            
        }
        userMin = 59; // does the same but for mins instead of seconds
    }

    cout << "done!!";

    return 0;
}