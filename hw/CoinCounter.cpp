#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    //integers to store number of coin types
    int number_of_pennies;
    int number_of_nickels;
    int number_of_dimes;
    int number_of_quarters;

    cout << "How many pennies, nickels, dimes, and quarters do you have?" << endl;
    cin >> number_of_pennies >> number_of_nickels >> number_of_dimes >> number_of_quarters;

    //use singular names for one coin and plural names for all other counts to ensure proper grammar

    if (number_of_pennies == 1) {
        cout << "You have 1 penny,";
    } else {
        cout << "You have " << number_of_pennies << " pennies,";
    }

    if (number_of_nickels == 1) {
        cout << " 1 nickel,";
    } else {
        cout << " " << number_of_nickels << " nickels,";
    }

    if (number_of_dimes == 1) {
        cout << " 1 dime,";
    } else {
        cout << " " << number_of_dimes << " dimes,";
    }

    if (number_of_quarters == 1) {
        cout << " and 1 quarter." << endl;
    } else {
        cout << " and " << number_of_quarters << " quarters." << endl;
    }

    // calculate the value in cents, then separate whole dollars and remaining cents
    int total_cents = number_of_pennies + number_of_nickels * 5
                      + number_of_dimes * 10 + number_of_quarters * 25;
    int dollars = total_cents / 100;
    int cents = total_cents % 100;

    cout << "In total you have ";

    //only include the dollar count when the total is at least one dollar
    if (dollars == 1) {
        cout << "1 dollar and ";
    } else if (dollars > 1) {
        cout << dollars << " dollars and ";
    }

    if (cents == 1) {
        cout << "1 cent";
    } else {
        cout << cents << " cents";
    }

    //add a leading zero so the money format always has two decimal places
    cout << " ($" << dollars << ".";
    if (cents < 10) {
        cout << "0";
    }
    cout << cents << ")." << endl;

    return 0;
}
