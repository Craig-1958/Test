#include <array> // Alows the use of arrays 
#include <algorithm> // Allows the use of the sorting feature
#include <iostream> // Allows the use of cin and cout
#include <vector>  // Allows fast and random access to elements in an array

int main() { // Indicates that this is the main function of the program
    std::string name_pick; // States the name and variable type of the user input
    std::cin >> name_pick; // Allows the user to input data 

    const int HOW_MANY_ELEMENTS = 18; // states how many elements are in the array

    std::array<std::string, HOW_MANY_ELEMENTS> names = {
        "Amy", "Rick", "John", "Patrick", "Marina", "Richard", "Raj", "Marcia",
        "Amy", "Richard", "John", "Rick", "Patrick", "Amy", "Raj", "John", "Patrick", "Richard"
    }; // States the name, number of elements, and the elements themselves

    if (std::find(std::begin(names), std::end(names), name_pick) != std::end(names)) { // States that if the name input by the user matches the names in the array, it must execute the code below
        const int name_count = std::count_if(names.begin(), names.end(), [name_pick](const std::string& Chosen_name) {
            return Chosen_name == name_pick;
            }); // This line counts how many times a name appears on the list
        std::cout << "The name " << name_pick << " appears " << name_count << " times in the list." << std::endl; // Prints out what is in the quotation marks and the values of the mentioned variables
    } //Closing brackets
    else { // States that if the condition is not met, the code underneath must be executed 
        std::cout << "The name " << name_pick << " does not appear in the list." << std::endl; // Prints out what is in the quotation marks and the values of the mentioned variables
    } // Closing brackets
    return 0; // Ends program
} // Closing brackets
