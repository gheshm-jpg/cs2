#include <iostream>
#include <string>

using std::cout, std::cin, std::endl;
using std::string, std::getline;

int main() {
    // letter scores from a to z
    int letter_scores[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };
    int result = 0;
    string input;
    string bonus;
    getline(cin, input);
    int letter_bonus = 0;
    int word_multiplier = 1;

    for (string::size_type i = 0; i < input.length(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            int index = input[i] - 'A';
            result += letter_scores[index];
            // bonuses belong to the letter before them
            letter_bonus = letter_scores[index];
        } else if (input[i] == '(') {
            bonus = "";
            for (string::size_type j = i + 1;
                 j < input.length() && input[j] != ' ' && input[j] != ')'
                     && input[j] != '(';
                 j++) {
                bonus += input[j];
                i++;
            }
        } else if (input[i] == '$') {
            break;
        }

        // letter bonuses add to the score already counted
        if (bonus == "DLS") {
            result += letter_bonus;
            bonus = "";
        }
        if (bonus == "TLS") {
            result += letter_bonus * 2;
            bonus = "";
        }
        if (bonus == "DWS") {
            word_multiplier *= 2;
            bonus = "";
        }
        if (bonus == "TWS") {
            word_multiplier *= 3;
            bonus = "";
        }
    }

    // apply word bonuses after letter bonuses
    result *= word_multiplier;
    cout << result << endl;
    return 0;
}
