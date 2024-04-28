#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Overload the << operator for correct display
    friend ostream& operator<<(ostream& os, const Time& t) {
        os << t.hours << " hours, " << t.minutes << " minutes, " << t.seconds << " seconds";
        return os;
    }
};

int main() {
    // Create a Time object using the parameterized constructor
    Time t1(2, 30, 45);

    // Display the time
    cout << "Time t1: " << t1 << endl;

    // Create another Time object using the default constructor
    Time t2;

    // Display the default time
    cout << "Default time t2: " << t2 << endl;

    return 0;
}
