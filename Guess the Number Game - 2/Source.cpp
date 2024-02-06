#include<iostream> //This includes the input/output stream library, allows the use of functions like cout and cin.
#include<cstdlib> //For rand() and srand() functions.
#include<ctime> //For time() function

using namespace std;	//Shorcut that allows the use of C++ identifiers such as cout and cin without the need to prefix them with std::

//Defines the main function, the starting point of execution for the C++ program.
int main() {
	
	srand(time(0)); //This seeds the random number generator with the current time, ensures that the number produced is different each time the program is ran.

	int secretNumber = rand() % 100 + 1; //0-99 + 1 -> 1-100. Generates a random number between 1 and 100 and assigns it to the variable secretNumber.
	
	int guess; //Stores the user's guess.

	int attempts = 0; //Stores the user's attempts.

	cout << "Welcome to Guess the Number!" << endl; //This prints a welcome message to the user.
	cout << "Try to guess the secret number between 1 and 100." << endl; //Provides instruction to the user.
	cout << "You can enter '0' to get a hint." << endl;
	do {
		cout << "Enter your guess: "; //Prompts the user to enter the guess.
		cin >> guess; //Reads user input and assigns it to the variable.
		attempts++;//Increments the attempts counter for each time user makes a guess.
		//Check if the user's guess is equal to the secret number.
		if (guess == secretNumber) {
			cout << "Congratulations! You guess the correct number in " << attempts << " attempts." << endl;
		}
		else if(guess == 0) {
			if (secretNumber < 50) {
				cout << "Hint: The secret number is less than 50." << endl;
			}
			else if (secretNumber > 50) {
				cout << "Hint: The secret number is more than 50." << endl;
			}
			else {
				cout << "Hint: The secret number is exactly 50." << endl;
			}

			if (secretNumber % 2 == 0) {
				cout << "Hint: The secret number is an even number." << endl;
			}
			else {
				cout << "Hint: The secret number is an odd number." << endl;
			}

		}
		else if (guess < secretNumber) {
			cout << "Too low. Try again!" << endl;
		}
		else {
			cout << "Too high. Try again!" << endl;
		}


	} while (guess != secretNumber);

	return 0;

}


