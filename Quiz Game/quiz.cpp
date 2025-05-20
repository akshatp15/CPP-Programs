#include <iostream>

int main(){
    // Array of questions
    std::string questions[] = {"1. What year was C++ created?: ", "2. Who invented C++?: ", "3. What is the predecessor of C++?: ", "4. Is the C++ a compiled language?: "};

    // Array of options for each question
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"}, {"A. Giudo van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"}, {"A. C", "B. C+", "C. C--", "D. B++"}, {"A. Yes", "B. No", "C. Sometimes", "D. Only when the user specifies"}};

    // Variables
    char answerKey[] = {'C', 'B', 'A', 'A'};
    char guess;
    int score = 0;
    int size = sizeof(questions)/sizeof(questions[0]);

    // Loop through all the questions
    for(int i = 0; i < size; i++){
        // Diplaying the question and corresponding options
        std::cout << "---------------------------------\n";
        std::cout << questions[i] << '\n';
        std::cout << "---------------------------------\n";
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }
        // Get the user guess and check it against the answer and display the result
        std::cin >> guess;
        guess = toupper(guess);
        if(guess == answerKey[i]){
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "WRONG\n";
            std::cout << "Answer: " << answerKey[i] << "\n";
        }
    }
    // Display the number of questions correctly answered and percentage of right answers
    std::cout << "---------------------------------\n";
    std::cout << "         RESULTS                  :\n";
    std::cout << "---------------------------------\n";
    std::cout << "SCORE: " << score << "/" << size << '\n';
    std::cout << "PCT: " << (score/double(size))*100 << "%";
    return 0;
}