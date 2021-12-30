#include <iostream>

using std::string;
using std::cout;
using std::cin;

// Returns 0 (user), 1 (computer), 2 (tie)
int get_winner(int &computer, int &user) {
  if (user == computer) {
    return 2;
  }
  if (user == 3) {
    if (computer == 1) {
      return 1;
    } else {
      return 0;
    }
  }
  if (computer == 3) {
    if (user == 1) {
      return 0;
    } else {
      return 1;
    }
  }
  if (user > computer) {
    return 0;
  } else {
    return 1;
  }
}

int main() {
  // Creates an array with all the options
  const string options [3] = {"Rock", "Paper", "Scissors"};
  
  // Initalizes random
  srand (time(NULL));
 
  // Gets a random number between 1 and 3
  int computer = rand() % 3 + 1;
  // Converts the computer var to a string from options
  string computerStr = options[computer - 1];

  // Initializes the user variable
  int user = 0;

  cout << "====================\n";
  cout << "Rock Paper Scissors!\n";
  cout << "====================\n";

  cout << "1) Rock 🪨\n";
  cout << "2) Paper 📄\n";
  cout << "3) Scissors ✂️\n";
  
  // Takes in the user input
  cin >> user;

  // Gets the winner from the function
  int winner = get_winner(computer, user);

  // Outputs what the computer chose
  cout << "Computer chose: " << computerStr << "\n";

  if (winner == 2) {
    cout << "Tie!";
  } else if (winner == 0) {
    cout << "You Win!";
  } else {
    cout << "You Lose!";
  }
  // Appends newline for easier input afterwards 
  cout << "\n";

  // Exits the program cleanly if you won, or with error if you lost/tied
  if (winner == 0) {
    return 0;
  } else {
    return 1;
  }
}
