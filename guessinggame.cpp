//Jazveer Kaler
//September 5th, 2023
//Guessing Game

//No Global variables. No strings. Include <iostream>

# include <iostream>

using namespace std;

int main() {
  bool stillRunning = true;
  char input;
  int guess = 0;
  int counter;
  srand((unsigned) time(NULL));
  int num = rand() % 101;

  //keeps the game running
  while (stillRunning == true) {
    
      cout << "Guess a number from 0 to 100, inclusive: " << endl;
      cin >> guess;
      counter++; 

      //if guess equal number
      if (num == guess) {
	cout << "You guessed the number in " << counter << " guesses." << endl;
	//reset variables 
	num = rand() % 101;
	guess = 0;
	counter = 0;

	//check if still playing
	cout << "Do you want to play again? y or n" << endl;
	cin >> input;
	if (input == 'n')
	  stillRunning = false;
      }
      //guess was too low
      if (num > guess) {
	cout << "Your guess was too low." << endl;
      }

      //guess was too high
      if (num < guess) {
	cout << "Your guess was too high." << endl;
      }
    
  }

  return 0;
}
