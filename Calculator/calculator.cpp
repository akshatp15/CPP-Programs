#include <iostream>

int main(){
    // Variables for calculation
	double num1;
	double num2;
	char op;
    double result;

    // Receive first number from user
	std::cout<< "Enter first number: ";
	std::cin >> num1;

    // Receive operator from user
    std::cout<< "Enter operator(+ - * /): ";
	std::cin >> op;

    // Handle invalid operator
    while (true) {
        if (op !='+' && op !='-' && op !='*' && op !='/'){
            std::cout << "Entered an invalid operator" << std::endl;
            std::cout<< "Enter operator(+ - * /): ";
	        std::cin >> op;
        }
        else{
            break;
        }
    }
    // Receive second number from user
	std::cout<< "Enter second number: ";
	std::cin >> num2;

    // Switch statements to handle calculations according to operator
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }

    // Printing out result of the calculation
	std::cout << "Result: " << result;

	return 0;
}