#include <iostream> // Allows the use of cin and cout
#include <vector> // Allows to store dynamic arrays
#include <utility> // Allows the use of the pair function
#include <algorithm> // Allows the use of features like the swap function 
#include <iomanip> // Allows the use of setprecision

void bubbleSort(std::vector<std::pair<std::string, int>>& test_score) { // Creates the bubble function and initializes the variable
    int size = test_score.size(); // States that the variable size is the same as test_score.size
    for (int i = 0; i < size - 1; ++i) { // Sorts the elements in order 
        for (int j = 0; j < size - i - 1; ++j) { // Checks if the elements are in the right order
            if (test_score[j].second > test_score[j + 1].second) { // States that if test_score[j].second is greater than test_score[j + 1].second then execute the code underneath
                std::swap(test_score[j], test_score[j + 1]); // States that test_score[j] must be swapped with test_score[j + 1]
            } // Closing brackets
        } // Closing brackets
    } // Closing brackets
} // Closing brackets

int main() { // States that this is the main section of the program
    std::vector<std::pair<std::string, int>> test_score; // Gets the vectors
    int How_many_pairs; // Creates a variable called How_many_pairs
    std::cin >> How_many_pairs; // Allows the user to input data 

    for (int i = 0; i < How_many_pairs; ++i) { // Loops the user input for as many times as there are elements 
        std::string name; // Stores the name the user has entered
        int score = 0; // Declares the score variable

        std::cout << i + 1 << ": "; // Prints out what is in the quotation marks
        std::cin >> name; // Allows the user to enter data

        std::cout << i + 1 << ": "; // Prints out what is in the quotation marks
        std::cin >> score; // Allows the user to enter data

        test_score.emplace_back(std::make_pair(name, score)); // This makes the pair out of name and score 
    } // Closing brackets

    bubbleSort(test_score); // Calls the bubble sort function

    int total_score = 0; // States that the value of the variable is 0 
    for (const auto& pair : test_score) { // This line loops through the sorted elements
        total_score += pair.second; // This calculates the sum of the scores
    } // Closing brackets
    double average_score = static_cast<double>(total_score) / How_many_pairs; // Calculates and stores the average score of the scores entered
    std::cout << "Average score: " << std::fixed << std::setprecision(2) << average_score << "\n"; // Prints out the average score with 2 decimal places

    std::cout << "The test scores in ascending order are:\n"; // Prints out what is in the quotation marks and creates a new line
    for (const auto& pair : test_score) { // This line loops through the sorted elements
        std::cout << "Name: " << pair.first << " Score: " << std::fixed << std::setprecision(2) << static_cast<double>(pair.second) << "\n"; // Prints out what is in the quotation marks and values of variables with 2 decimal places
    } // Closing brackets
    std::cout << std::endl; // Starts a new line

    return 0; // Ends program
} // Closing brackets
