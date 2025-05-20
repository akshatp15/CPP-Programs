#include <iostream>

// Function to render the tic-tac-toe grid
void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  "<< spaces[0] << "  |  "<< spaces[1] << "  |  "<< spaces[2] << "   "<< '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  "<< spaces[3] << "  |  "<< spaces[4] << "  |  "<< spaces[5] << "   "<< '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  "<< spaces[6] << "  |  "<< spaces[7] << "  |  "<< spaces[8] << "   "<< '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

// Function to handle player moves
void playerMove(char *spaces, char player){
    int number;
    // Only allow the player to choose a valid open spot on the grid
    while(true){
        std::cout << "Enter the spot you want to choose (1-9)";
        std::cin >> number;
        number--;
        if(number < 0 || number > 8){
            std::cout << "Invalid spot\n";
            continue;
        }
        if(spaces[number] != ' '){
            std::cout << "Spot is already occupied\n";
            continue;
        }
        spaces[number] = player;
        break;
    }
}

// Function to handle computer moves
void computerMove(char *spaces, char computer, char player, char diff){
    int number;
    srand(time(0));
    // Try to win the game
    if(spaces[0] == computer && spaces[1] == computer && spaces[2] == ' ') {
        spaces[2] = computer; return;
    }
    if(spaces[0] == computer && spaces[2] == computer && spaces[1] == ' ') {
        spaces[1] = computer; return;
    }
    if(spaces[1] == computer && spaces[2] == computer && spaces[0] == ' ') {
        spaces[0] = computer; return;
    }
    if(spaces[3] == computer && spaces[4] == computer && spaces[5] == ' ') {
        spaces[5] = computer; return;
    }
    if(spaces[3] == computer && spaces[5] == computer && spaces[4] == ' ') {
        spaces[4] = computer; return;
    }
    if(spaces[4] == computer && spaces[5] == computer && spaces[3] == ' ') {
        spaces[3] = computer; return;
    }

    if(spaces[6] == computer && spaces[7] == computer && spaces[8] == ' ') {
        spaces[8] = computer; return;
    }
    if(spaces[6] == computer && spaces[8] == computer && spaces[7] == ' ') {
        spaces[7] = computer; return;
    }
    if(spaces[7] == computer && spaces[8] == computer && spaces[6] == ' ') {
        spaces[6] = computer; return;
    }
    // Columns
    if(spaces[0] == computer && spaces[3] == computer && spaces[6] == ' ') {
        spaces[6] = computer; return;
    }
    if(spaces[0] == computer && spaces[6] == computer && spaces[3] == ' ') {
        spaces[3] = computer; return;
    }
    if(spaces[3] == computer && spaces[6] == computer && spaces[0] == ' ') {
        spaces[0] = computer; return;
    }

    if(spaces[1] == computer && spaces[4] == computer && spaces[7] == ' ') {
        spaces[7] = computer; return;
    }
    if(spaces[1] == computer && spaces[7] == computer && spaces[4] == ' ') {
        spaces[4] = computer; return;
    }
    if(spaces[4] == computer && spaces[7] == computer && spaces[1] == ' ') {
        spaces[1] = computer; return;
    }

    if(spaces[2] == computer && spaces[5] == computer && spaces[8] == ' ') {
        spaces[8] = computer; return;
    }
    if(spaces[2] == computer && spaces[8] == computer && spaces[5] == ' ') {
        spaces[5] = computer; return;
    }
    if(spaces[5] == computer && spaces[8] == computer && spaces[2] == ' ') {
        spaces[2] = computer; return;
    }
    // Diagonals
    if(spaces[0] == computer && spaces[4] == computer && spaces[8] == ' ') {
        spaces[8] = computer; return;
    }
    if(spaces[0] == computer && spaces[8] == computer && spaces[4] == ' ') {
        spaces[4] = computer; return;
    }
    if(spaces[4] == computer && spaces[8] == computer && spaces[0] == ' ') {
        spaces[0] = computer; return;
    }

    if(spaces[2] == computer && spaces[4] == computer && spaces[6] == ' ') {
        spaces[6] = computer; return;
    }
    if(spaces[2] == computer && spaces[6] == computer && spaces[4] == ' ') {
        spaces[4] = computer; return;
    }
    if(spaces[4] == computer && spaces[6] == computer && spaces[2] == ' ') {
        spaces[2] = computer; return;
    }

    // Only try blocking moves if diff is chosen to be hard and no winning moves are possible
    if(diff == 'H'){
        // Try to block player
        if(spaces[0] == player && spaces[1] == player && spaces[2] == ' ') { 
            spaces[2] = computer; return; 
        }
        if(spaces[0] == player && spaces[2] == player && spaces[1] == ' ') { 
            spaces[1] = computer; return; 
        }
        if(spaces[1] == player && spaces[2] == player && spaces[0] == ' ') { 
            spaces[0] = computer; return; 
        }

        if(spaces[3] == player && spaces[4] == player && spaces[5] == ' ') { 
            spaces[5] = computer; return; 
        }
        if(spaces[3] == player && spaces[5] == player && spaces[4] == ' ') { 
            spaces[4] = computer; return; 
        }
        if(spaces[4] == player && spaces[5] == player && spaces[3] == ' ') { 
            spaces[3] = computer; return; 
        }
        if(spaces[6] == player && spaces[7] == player && spaces[8] == ' ') { 
            spaces[8] = computer; return; 
        }
        if(spaces[6] == player && spaces[8] == player && spaces[7] == ' ') { 
            spaces[7] = computer; return; 
        }
        if(spaces[7] == player && spaces[8] == player && spaces[6] == ' ') { 
            spaces[6] = computer; return; 
        }
        if(spaces[0] == player && spaces[3] == player && spaces[6] == ' ') { 
            spaces[6] = computer; return; 
        }
        if(spaces[0] == player && spaces[6] == player && spaces[3] == ' ') { 
            spaces[3] = computer; return; 
        }
        if(spaces[3] == player && spaces[6] == player && spaces[0] == ' ') { 
            spaces[0] = computer; return; 
        }

        if(spaces[1] == player && spaces[4] == player && spaces[7] == ' ') { 
            spaces[7] = computer; return; 
        }
        if(spaces[1] == player && spaces[7] == player && spaces[4] == ' ') { 
            spaces[4] = computer; return; 
        }
        if(spaces[4] == player && spaces[7] == player && spaces[1] == ' ') { 
            spaces[1] = computer; return; 
        }
        if(spaces[2] == player && spaces[5] == player && spaces[8] == ' ') { 
            spaces[8] = computer; return; 
        }
        if(spaces[2] == player && spaces[8] == player && spaces[5] == ' ') { 
            spaces[5] = computer; return; 
        }
        if(spaces[5] == player && spaces[8] == player && spaces[2] == ' ') { 
            spaces[2] = computer; return; 
        }
        if(spaces[0] == player && spaces[4] == player && spaces[8] == ' ') { 
            spaces[8] = computer; return; 
        }
        if(spaces[0] == player && spaces[8] == player && spaces[4] == ' ') { 
            spaces[4] = computer; return; 
        }
        if(spaces[4] == player && spaces[8] == player && spaces[0] == ' ') { 
            spaces[0] = computer; return; 
        }
        if(spaces[2] == player && spaces[4] == player && spaces[6] == ' ') { 
            spaces[6] = computer; return; 
        }
        if(spaces[2] == player && spaces[6] == player && spaces[4] == ' ') {
            spaces[4] = computer; return; 
        }
        if(spaces[4] == player && spaces[6] == player && spaces[2] == ' ') { 
            spaces[2] = computer; return; 
        }
    }
    
    // If there are no winning or blocking moves then just randomize the move
    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

// Function to check if either player or computer won the game
bool checkWinner(char *spaces, char player, char computer){
    if(spaces[0] != ' ' && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? std::cout << "You Won!\n" : std::cout << "Computer Won!\n";
    }
    else if(spaces[3] != ' ' && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? std::cout << "You Won!\n": std::cout << "Computer Won!\n";
    }
    else if(spaces[6] != ' ' && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? std::cout << "You Won!\n": std::cout << "Computer Won!\n";
    }
    else if(spaces[0] != ' ' && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? std::cout << "You Won!\n": std::cout << "Computer Won!\n";
    }
    else if(spaces[1] != ' ' && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? std::cout << "You Won!\n": std::cout << "Computer Won!\n";
    }
    else if(spaces[2] != ' ' && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? std::cout << "You Won!\n": std::cout << "Computer Won!\n";
    }
    else if(spaces[0] != ' ' && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? std::cout << "You Won!\n": std::cout << "Computer Won!\n";
    }
    else if(spaces[2] != ' ' && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? std::cout << "You Won!\n": std::cout << "Computer Won!\n";
    }
    else{
        return false;
    }
    return true;
}

// Function to check whether the game is tied or not
bool checkTie(char *spaces){
    for (int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "It's a tie\n";
    return true;
}

int main(){
    // Initializing the required variables
	char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'O';
    char computer = 'X';
    bool running = true;
    char diff;
    // Welcome message
    std::cout << "Welcome to Tic-Tac-Toe\n";
    // Allowing the user to choose a difficulty, easy or hard
    while(true){
        std::cout << "Please choose a difficulty ('E' for easy, 'H' for hard): ";
        std::cin >> diff;
        if(toupper(diff) == 'E' || toupper(diff) == 'H'){
            diff = toupper(diff);
            break;
        }
        std::cout << "Please enter only an uppercase or lowercase 'E' or 'H'" << '\n';
    }

    // Playing the game
    drawBoard(spaces); // Display the empty grid
    // Handle the game
    while(running){
        // Allow the player to choose a spot on the grid, then check for winner or tied game
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
         // Computer chooses a spot on the grid, then check for winner or tied game
        computerMove(spaces, computer, player, diff);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    std::cout << "Thanks for playing, hope you had fun";
	return 0;
}