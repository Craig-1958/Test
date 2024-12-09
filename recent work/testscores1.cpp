#include <cmath> // Allows mathematical functions
#include <iomanip> // Allows the use of setprecision
#include <iostream> // Allows the use of cin and cout
#include <vector> // For dynamic array handling

void bubbleSort(std::vector<int>& scores) { // Sets up the bubble function to accept a vector
    int size = scores.size();
    for (int i = 0; i < size - 1; ++i) { // The outer loop sorts the numbers 
        for (int j = 0; j < size - i - 1; ++j) { // The inner loop sorts any wrongly placed elements
            if (scores[j] > scores[j + 1]) { // States that if the value of scores[j] is greater than the value of scores[j + 1], it must execute the code underneath

                int temp = scores[j]; // Defines scores[j]
                scores[j] = scores[j + 1]; // States that scores[j] is equal to scores[j + 1]
                scores[j + 1] = temp; // States that scores[j + 1] is equal to temp
            }
        }
    }
}

int main() { // States that this is the main section of the program
    int HOW_MANY_ELEMENTS = 0;
    std::cout << "Enter the number of test scores: ";
    std::cin >> HOW_MANY_ELEMENTS;

    const std::vector<int> test_score(HOW_MANY_ELEMENTS); // Declares a constant vector
    std::vector<int> modifiable_test_score = test_score; // Creates a modifiable copy of the constant vector
    std::cout << "Enter the test scores:\n";
    for (int i = 0; i < HOW_MANY_ELEMENTS; ++i) { // Loops the user input
        std::cin >> modifiable_test_score[i]; // Allows the user to input data as the program runs
    }

    bubbleSort(modifiable_test_score); // Calls the bubble sort function

    int Total_score = 0; // States the value of this variable is 0
    for (int i = 0; i < HOW_MANY_ELEMENTS; ++i) { // Loops through the elements
        Total_score += modifiable_test_score[i]; // Calculates the sum of the scores
    }
    double average_score = static_cast<double>(Total_score) / HOW_MANY_ELEMENTS; // Calculates the average score
    std::cout << "Average score: " << std::fixed << std::setprecision(2) << average_score << "\n"; // Prints out the average score with 2 decimal places
    std::cout << "The test scores in ascending order are:\n"; // Prints out what is in the quotation mark
    for (int i = 0; i < HOW_MANY_ELEMENTS; ++i) { // Loops through the sorted test scores
        std::cout << std::fixed << std::setprecision(2) << static_cast<double>(modifiable_test_score[i]) << " "; // Prints out the sorted test scores with 2 decimal places
    }
    std::cout << std::endl; // Creates a new line
    return 0; // Ends the program
}
