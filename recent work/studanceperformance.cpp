#include <cmath> // This library allows the use of longer math equations
#include <iomanip>
#include <iostream> // This library allows the use of cin and cout
#include <string> // This library allows string manipulation

class StudentPerformance { // This is the class name
public: // This is the access status
    StudentPerformance(std::string fullName, double academic_score, double extra_curricular_score)
        : fullName(std::move(fullName)), academic_score(academic_score), extra_curricular_score(extra_curricular_score) {
    } // This initializes all the variables inside the brackets

    double getacademic_score() const { // This is a getter for the academic score
        return academic_score; // Returns the value
    } // End bracket

    double getextra_curricular_score() const { // This is a getter for the extra-curricular score
        return extra_curricular_score; // Returns the value
    } // End bracket

    std::string getFullName() const { // Gets the full name from the private class
        return fullName; // Returns the value
    } // End bracket

    double getperformance() const { // Calculates the performance as a double
        const double PERCENT1 = 0.75;
        const double PERCENT2 = 0.25;
        double performance = (academic_score * PERCENT1) + (extra_curricular_score * PERCENT2); // Corrects the calculation
        return performance; // Returns the value
    } // End bracket

    static char getgrade(double Performance) { // Gets the grade based on performance
        char grade = 0; // Declares a variable
        const int HIGH_F = 40;
        const int HIGH_D = 50;
        const int HIGH_C = 60;
        const int HIGH_B = 70;
        const int HIGH_A = 100;
     
        if (Performance >= 0 && Performance < HIGH_F) { // The code must meet the requirement to execute code below
            grade = 'F'; // Sets the grade to 'F'
        } // End bracket
        else if (Performance >= HIGH_F && Performance < HIGH_D) { // The code must meet the requirement to execute code below
            grade = 'D'; // Sets the grade to 'D'
        } // End bracket
        else if (Performance >= HIGH_D && Performance < HIGH_C) { // The code must meet the requirement to execute code below
            grade = 'C'; // Sets the grade to 'C'
        } // End bracket
        else if (Performance >= HIGH_C && Performance < HIGH_B) { // The code must meet the requirement to execute code below
            grade = 'B'; // Sets the grade to 'B'
        } // End bracket
        else if (Performance >= HIGH_B && Performance <= HIGH_A) { // The code must meet the requirement to execute code below
            grade = 'A'; // Sets the grade to 'A'
        } // End bracket
        else { 
            std::cin.ignore(600);
        } // End bracket
        return grade; // Returns the value
    } // End bracket

    void display() const { // Displays what is in this section of code
        double Performance = getperformance(); // Gets the performance as a double
        std::cout << "Student " << getFullName() << std::endl; // Prints out the sentence and values
        std::cout << "Performance: " << std::fixed << std::setprecision(2) << Performance << "%" << std::endl; // Prints out the sentence and values with set precision
        std::cout << "Grade: " << getgrade(Performance) << std::endl; // Prints out the sentence and values
    } // End bracket

private: // This section is private
    std::string fullName; // Declares the variables
    double academic_score;
    double extra_curricular_score;
}; // End bracket

int main() { // This indicates that this is the main function of the code
    std::string fullName; // Declares the variable for the user input
    std::getline(std::cin, fullName); // Allows the user to input the full name

    double academic_score = 0;
    std::cin >> academic_score; // Allows the user to input data

    double extra_curricular_score = 0;
    std::cin >> extra_curricular_score; // Allows the user to input data

    StudentPerformance student(fullName, academic_score, extra_curricular_score); // Creates an instance of StudentPerformance
    student.display(); // Activates the display function

    return 0; // Ends the program
} // End bracket
