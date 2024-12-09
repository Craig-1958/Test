#include <algorithm> // Allows the use of the sorting feature
#include <array> // Include this header for std::array
#include <iostream> // Allows the use of cin and cout

int main() { // Indicate that this is the main function of the program
    int Lottery_number = 0; // Indicates the variable type and name for the user input
    std::cin >> Lottery_number; // Allows the user to input data

    const int HOW_MANY_ELEMENTS = 10;
    const std::array<const int, HOW_MANY_ELEMENTS> winning_lottery_numbers = {
        13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121
    }; // States the name, number of elements, and the elements themselves

    if (std::find(winning_lottery_numbers.begin(), winning_lottery_numbers.end(), Lottery_number) != winning_lottery_numbers.end()) { // States that if the number input by the user matches the numbers in the array, it must execute the code below
        std::cout << "Congratulations, you have won!" << std::endl; // Prints out what is in the quotation marks
    }
    else { // States that if the conditions are not met, the code underneath must be executed
        std::cout << "Better luck next time." << std::endl; // Prints out what is in the quotation marks
    } // Closing brackets

    return 0; // Ends the program
} // Closing brackets
