#include <iostream>
/*
    To check valid of credit card number we can use Luhn's Algorithm

    Step 1) Double every second digit from right to left, if double number is 2 digits, split them

    Step 2) Add all the single digits from step 1

    Step 3) Add all odd numbered digits from right to left

    Step 4) Sum results from step 2 and 3

    Step 5) If step 4 is divisible by 10, the number is valid
*/

// Function to handle the splitting and addition of digits (Step 1 and 2)
int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
}

// Function to sum all the odd numbered digits (Step 3) 
int(sumOddDigits(const std::string cardNumber)){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-= 2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}

// Function to sum every second digit from right to left (Step 1 and 2) 
int(sumEvenDigits(const std::string cardNumber)){
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-= 2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}


int main(){
    // Initialize variables
    std::string cardNumber;
    int result = 0;

    // Receieve the card number from the user 
    std::cout << "Enter a credit card#: ";
    std::cin >> cardNumber;
    // Handle input errors
    if(cardNumber.size() != 16){
        std::cout << "The card number must be 16 digits long";
        return 0;
    }

    // Calculate the final sum of the odd and even digits (Step 4)
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    // Check if the sum is divisible by 10, if so the card number is valid, otherwise invalid
    if(result % 10 == 0) {
        std::cout << cardNumber << " is valid";
    }
    else {
        std::cout << cardNumber << " is invalid";
    }

    return 0;
}