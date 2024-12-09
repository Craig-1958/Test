#include <array> // Include this header for std::array
#include <iostream> // Allows the use of cin and cout
#include <algorithm> // Allows the use of std::equal

bool identical_arrays(const std::array<int, 10>& array1, const std::array<int, 10>& array2) { // Function to check if arrays are identical
    return std::equal(array1.begin(), array1.end(), array2.begin());
}

int main() { // Indicates that this is the main function of the program
    const int HOW_MANY_ELEMENTS = 10;
    std::array<int, HOW_MANY_ELEMENTS> array1; // States the name of the array and how many elements it holds
    std::array<int, HOW_MANY_ELEMENTS> array2; // States the name of the array and how many elements it holds

    for (int i = 0; i < HOW_MANY_ELEMENTS; i++) {
        std::cin >> array1[i]; // Allows the user to input data as the program runs
    }

    for (int i = 0; i < HOW_MANY_ELEMENTS; i++) {
        std::cin >> array2[i]; // Allows the user to input data as the program runs
    }

    if (identical_arrays(array1, array2)) { // Checks if arrays are identical
        std::cout << "The arrays are identical" << std::endl; // Prints out what is in quotation marks 
    }
    else { // Executes if the arrays are not identical
        std::cout << "The arrays are not identical" << std::endl; // Prints out what is in quotation marks
    }

    return 0; // Ends program
