#include <iostream>

using namespace std;

class Time {
    private:
    int seconds, minutes, hours, days;

    public:
    Time(int seconds, int minutes, int hours, int days) {
        this->seconds = seconds;
        this->minutes = minutes;
        this->hours = hours;
        this->days = days;

        // reduce seconds into minutes
        if (this->seconds >= 60) {
            this->minutes += this->seconds / 60;
            this->seconds = this->seconds % 60;
        }

        // reduce minutes into hours
        if (this->minutes >= 60) {
            this->hours += this->minutes / 60;
            this->minutes = this->minutes % 60;
        }

        // reduce hours into days
        if (this->hours >= 24) {
            this->days += this->hours / 24;
            this->hours = this->hours % 24;
        }
    }

    // print the reduced time
    void getTime() {
        cout << seconds << " seconds "
             << minutes << " minutes "
             << hours << " hours "
             << days << " days" << endl;
    }

    // add the two time values
    Time add(const Time& other) {
        return Time(seconds + other.seconds,
            minutes + other.minutes,
            hours + other.hours,
            days + other.days);
    }

    // subtract the second time from the first time
    Time subtract(const Time& other) {
        int newSeconds = seconds;
        int newMinutes = minutes;
        int newHours = hours;
        int newDays = days;

        // borrow one minute
        if (newSeconds < other.seconds) {
            newSeconds += 60;
            newMinutes--;
        }

        // borrow one hour
        if (newMinutes < other.minutes) {
            newMinutes += 60;
            newHours--;
        }

        // borrow one day
        if (newHours < other.hours) {
            newHours += 24;
            newDays--;
        }

        return Time(newSeconds - other.seconds,
            newMinutes - other.minutes,
            newHours - other.hours,
            newDays - other.days);
    }
};

int main() {
    // get the first time value
    int initSecs, initMins, initHours, initDays;
    cin >> initSecs >> initMins >> initHours >> initDays;

    // create the first time object
    Time initial(initSecs, initMins, initHours, initDays);

    // get the operation
    char operand;
    cin >> operand;

    // get the second time value
    int secondSecs, secondMins, secondHours, secondDays;
    cin >> secondSecs >> secondMins >> secondHours >> secondDays;

    // create the second time object
    Time second(secondSecs, secondMins, secondHours, secondDays);

    // add or subtract the time values
    if (operand == '+') {
        Time res = initial.add(second);
        res.getTime();
    } else {
        Time res = initial.subtract(second);
        res.getTime();
    }

    return 0;
}
