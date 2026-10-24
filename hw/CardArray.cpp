#include <iostream>
#include <string>

using namespace std;

class Card {
public:
    int number;
    char suit;

    // default constructor
    Card() {
        number = 1;
        suit = 'C';
    }

    // two argument constructor
    // hank taught using this-> during wednesday's discussion
    Card(int number, char suit) {
        this->number = number;
        this->suit = suit;
    }

    // return the full card name
    string fullCard() {
        string cardName = "";
        string cardNum = "";

        // determine the suit name
        if (suit == 'H') {
            cardName += "of Hearts";
        } else if (suit == 'D') {
            cardName += "of Diamonds";
        } else if (suit == 'S') {
            cardName += "of Spades";
        } else {
            cardName += "of Clubs";
        }

        // determine the rank name
        if (number == 1) {
            cardNum += "Ace";
        } else if (number == 11) {
            cardNum += "Jack";
        } else if (number == 12) {
            cardNum += "Queen";
        } else if (number == 13) {
            cardNum += "King";
        } else {
            cardNum += to_string(number);
        }

        // combine the rank and suit
        return cardNum + " " + cardName;
    }
};

int main() {
    // read the number of cards
    int i;
    cin >> i;

    // allocate an array to store the cards
    Card* arr = new Card[i];

    // read each card's number and suit
    for (int j = 0; j < i; j++) {
        int n;
        char s;
        cin >> n >> s;

        arr[j] = Card(n, s);
    }

    // initialize the statistics
    int sum = 0;
    string flush = "true";
    string duplicate = "false";
    bool duplicateCondition = false;

    // add the values and compare each suit with the first card's suit
    for (int j = 0; j < i; j++) {
        sum += arr[j].number;
        if (arr[j].suit != arr[0].suit) {
            flush = "false";
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "Flush: " << flush << endl;

    // compare each card with the cards that come after it
    for (int j = 0; j < i; j++) {
        for (int x = j + 1; x < i; x++) {
            // a duplicate must have the same number and suit
            if (arr[j].number == arr[x].number &&
                arr[j].suit == arr[x].suit) {
                duplicate = "true";
                duplicateCondition = true;
                break;
            }
        }

        // stop searching once a duplicate is found
        if (duplicateCondition) {
            break;
        }
    }

    cout << "Duplicate: " << duplicate << endl;

    // print a numbered list of the full card names
    for (int j = 0; j < i; j++) {
        cout << to_string(j + 1) + ". " + arr[j].fullCard() << endl;
    }

    // release the dynamically allocated array
    delete[] arr;
    return 0;
}
