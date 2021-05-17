#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

// generates computers random number from 1-3 for its choice
int promptcomputer() {
    srand(time(0));
    int randomNumber;
    randomNumber= rand() % 3 + 1;
    return randomNumber;
}

int promptUser() {
    // get users choice of Rock, Paper, or Scissors
    int x = 0;
    string user;
    while (x == 0){
        cout << "Enter Rock, Paper, or Scissors" << endl;
        cin >> user;

        if (user == "Rock"){
            x=1;
        }
        else if (user == "Paper"){
            x=2;
        }
        else if (user == "Scissors"){
            x=3;
        }
        else{
            cout << "Not a valid choice" << endl;
        }
    }
    return x;
}

// display both choices
void DisplayChoices(int user, int computer){
    // computer's choice displayed
    if (computer == 1){
        cout << "Computer's choice is Rock" << endl;
    }
    else if (computer == 2){
        cout << "Computer's choice is Paper" << endl;
    }
    else {
        cout << "Computer's choice is Scissors" << endl;
    }


    // user's choice displayed
    if (user == 1){
        cout << "You choose Rock" << endl;
    }
    else if (user == 2){
        cout << "You choose Paper" << endl;
    }
    else {
        cout << "You choose Scissors" << endl;
    }
}

// display the winner
int DisplayWinner(int user, int computer){
    int x=1;

    if (user == computer){
        cout << "It's a tie! Play Again!" << endl;
    }
    else if (user == 1 && computer == 3){
        cout << "You Win!" << endl;
    }
    else if (user == 2 && computer == 1){
        cout << "You Win!" << endl;
    }
    else if (user == 3 && computer == 2){
        cout << "You Win!" << endl;
    }
    else {
        cout << "You Lose!" << endl;
        x = 0;
    }
    return x;
}

// runs the program untill user loses
int main()
{
    int x = 1;
    while (x ==1){
        int computer = promptcomputer();
        int user = promptUser();
        DisplayChoices(user, computer);
        x = DisplayWinner(user, computer);
    }
    return 0;
}
