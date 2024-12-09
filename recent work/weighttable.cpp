#include <iomanip> // This allows the use of setprecision
#include <iostream> // Allows the use of cin and cout

int imperial_ton_value(int value) { // This holds the function name and parameters
    return value; // Returns the value
}

int main() { // The main function
    int value(2); // States the value of value

    int POUNDS_IN_TON = 2240; // States the value that one ton would be in pounds
    double KILOGRAMS_IN_TON = 1016.05; // States the value of one ton in Kilograms

    std::cout << "|" << "--------------------------------" << "|" << "\n"; // Prints out what is in the quotation marks
    std::cout << "|" << "Tons " << "     |" << "Pounds" << "    |" << "Kilograms" << std::setw(2) << " |" << "\n"; // Prints out what is in the quotation marks while setting the spaces between words
    std::cout << "|" << "--------------------------------" << "|" << "\n"; // Prints out what is in the quotation marks

    for (; value <= 20; value += 2) { // Loop with the values in the brackets
        int toPounds = imperial_ton_value(value) * POUNDS_IN_TON; // Calculates and stores the results of the equation
        double toKilogram = imperial_ton_value(value) * KILOGRAMS_IN_TON; // Calculates and stores the results of the equation
        std::cout << "|" << value << std::setw(1) << "\t   |" << toPounds << "|" << toKilogram << std::setw(3) << "\t |" << std::endl; // Prints out what is in the quotation marks
    }//Closing brackets
    std::cout << "|--------------------------------|"; // Prints out what is in the quotation marks
    return 0; // Stops the program
}//Closing brackets