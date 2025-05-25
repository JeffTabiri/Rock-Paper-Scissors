#include <iostream>
#include <string>

using namespace std;

string outcomes[3] = {"Paper", "Scissors", "Stone"};

void calculateOutcome(int a) {
  srand(time(NULL));

  int number = rand() % 3 + 1;

  cout << "The computer chooses " << outcomes[number - 1] << "." << endl;

  if (number == a) {
    cout << "The match is a draw!" << endl;
  } else if (number == 1 && a == 3) {
    cout << "The machine wins!" << endl;
  } else if (a > number || a == 1 && number == 3) {
    cout << "The player wins." << endl;
  } else {
    cout << "The machine wins!" << endl;
  }
}

void showOptions() {
  cout << "Choose your weapon." << endl;
  cout << "1 for Paper, 2 for Scissors, 3 for Stone, 4 to quit." << endl;
}

int main() {

  int input;

  cout << "Welcome to Rock, Paper, Scissors" << endl;

  while (input != 4) {
    showOptions();
    cin >> input;
    cout << "You chose " << outcomes[input - 1] << "." << endl;
    calculateOutcome(input);
  }

  cout << "You quit the game." << endl;

  return 0;
}
