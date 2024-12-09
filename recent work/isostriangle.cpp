#include <cmath> // For mathematical functions
#include <iostream> // The Library allows the use of cin and cout

class isoscelesTriangle { // States the class
public: // States the level of access
    isoscelesTriangle(double base, double height) : base(base), height(height) {} // Initialize the variables

   

    double calculateArea() const { // Makes a double variable that is a constant
        return (base * height) / 2; // Returns the value of the calculations
    } // Closing brackets

    double calculateEqualSide() const { // trailing return
        return std::sqrt(std::pow(base / 2, 2) + std::pow(height, 2)); // Calculates and stores the value
    }

    double calculatePerimeter() const { // trailing return
        double equal_side = calculateEqualSide(); //redifines equil sides
        return 2 * equal_side + base;// Calculates and stores the value
    }

    void display() const { // Creates a display variable that will activate from the command from the main section
        std::cout << "Area " << calculateArea() << "\n"; // Prints out what is in the quotation marks while creating a new line
        std::cout << "Perimeter " << calculatePerimeter() << std::endl; // Prints out what is in the quotation marks
    } // Closing brackets
private:
double base; // Creates a variable called base that will take the value entered by the user in the main section
double height; // Creates a variable called height that will take the value entered by the user in the main section
}; // Closing brackets

int main() { // Indicates the main section of the code
    double base = 0; // Links the base variable from inside the class
    std::cin >> base; // Allows the user to input data

    double height = 0; // Links the height variable from inside the class
    std::cin >> height; // Allows the user to input data

    isoscelesTriangle triangle(base, height); // Create an instance of isoscelesTriangle

    triangle.display(); // Display the details

    return 0; // Ends program
} // Closing brackets

