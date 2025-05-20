#include <iostream>

int main(){
    // Variables
	int num;
    int guess;
    bool guessed = false;
    int tries = 0;

    // Using rand to generate randomized number
    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "Welcome to the Number Guessing Game, You have 5 tries to guess the number\n";

    // Loop to handle guesses
    while(tries <= 4){
        tries++;
        std::cout << "Enter a number between(1-100): ";
        std::cin >> guess;

        if(guess == num){
            std::cout << "You got it! You took "<< tries << " "<< "tries";
            guessed = true;
            break;
        }
        else if(guess > num)
        {
            std::cout << "Try a smaller number\n";
        }
        else if(guess < num){
            std::cout << "Try a bigger number\n";
        }
    }
    // If user failed to guess number in 5 tries then reveal number
    if (!guessed)
    {
        std::cout << "You ran out of tries the number is: " << num;
    }
	return 0;
}