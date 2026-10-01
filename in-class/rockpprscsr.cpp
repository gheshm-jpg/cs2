#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(nullptr));
    int user_choice;
    int cpu_choice;
    const int rock=0;
    const int paper=1;
    const int scissors=2;
    cout << "Welcome to Rock Paper Scissors!" << endl;
    cout << "Choose your next move:" << endl << "0) Rock" << endl << "1) Paper" << endl << "2) Scissors" << endl << "3) Quit" << endl;
    cpu_choice = rand() % 3;
    cin >> user_choice;
    if (user_choice == rock){
        cout << "You chose rock" << endl;
        }
    if (user_choice == paper){
        cout << "You chose paper!" << endl;
        }
    if (user_choice == scissors){
        cout << "You chose scissors!" << endl;
        }
    if (cpu_choice == rock && user_choice !=3){
        cout << "CPU chose rock!" << endl;
        }
    if (cpu_choice == paper && user_choice != 3){
        cout << "CPU chose paper!" << endl;
        }
    if (cpu_choice == scissors && user_choice != 3){
        cout << "CPU chose scissors!" << endl;
        }
    if (user_choice == 3) {
        cout << "Goodbye!" << endl;
        }
    else if (user_choice < 0 || user_choice > 2) {
        cout << "Invalid choice!" << endl;
        }
    else if (user_choice == cpu_choice) {
        cout << "You tied!" << endl;
        }
    else if ((user_choice == rock && cpu_choice == scissors) ||
         (user_choice == paper && cpu_choice == rock) ||
         (user_choice == scissors && cpu_choice == paper)) {
        cout << "You won!" << endl;
        }
    else {
        cout << "You lost!" << endl;
        }
    return 0; 
}
