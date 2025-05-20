#include <iostream>

// Function to get user's choice
char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";
    std::cout << "'r' for rock\n'p' for paper\n's' for scissors\n";
    std::cin >> player;
    while(player != 'r' && player != 'p' && player != 's'){
        std::cout << "Invalid option\n";
        std::cout << "'r' for rock\n'p' for paper\n's' for scissors\n";
        std::cin >> player;
    }

    return player;
}

// Function to randomly generate the computer's move
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1:
           return 'r';
        case 2:
            return 'p';
        case 3:
           return 's';
    }
    
    return 0;
}

// Function to display the choice
void showChoice(char choice){
    switch(choice){
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }
}

// Function to handle determining who won or if it is a tie
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':
            if(computer == 'r'){
                std::cout << "It's a tie\n";
            }
            else if(computer == 'p'){
                std::cout << "You Lost!\n";
            }
            else{
                std::cout << "You Won!\n";
            }
            break;
        case 'p':
            if(computer == 'r'){
                std::cout << "You Won!\n";
            }
            else if(computer == 'p'){
                std::cout << "It's a tie\n";
            }
            else{
                std::cout << "You Lost!\n";
            }
            break;
        case 's':
            if(computer == 'r'){
                std::cout << "You Lost\n";
            }
            else if(computer == 'p'){
                std::cout << "You Won!\n";
            }
            else{
                std::cout << "It's a tie\n";
            }
            break;
    }
} 

int main(){
    // Initializing variables
    char player;
    char computer;

    // Get the user choice between rock, paper and scissors, then display it
    player = getUserChoice();
    std::cout << "Your Choice: ";
    showChoice(player);

    // Randomly pick the computer's move and then display it
    computer = getComputerChoice();
    std::cout << "Computer's Choice: ";
    showChoice(computer);

    // Determine who won or if it is a tie
    chooseWinner(player, computer);
    return 0;
}