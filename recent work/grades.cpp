#include <algorithm> // Allows the use of the sorting featuer
#include <iostream> // Allows the use of cin and couts
#include <vector> // allows fast and random access to elements in an array

int main() { // Indicates the main function of the program
	const int ELEMENT_AMOUNT = 10;
	int Student_Grade[ELEMENT_AMOUNT]; // states the name of the array and how many elements that it holds 
	for (int i = 0; i < ELEMENT_AMOUNT; i++) { // Loops the user input function 10 times so all eliments are filled in
		std::cin >> Student_Grade[i]; // Allows the user to input data as the program runs 
	} // Closing brackets

	int over50 = std::count_if(Student_Grade, Student_Grade + ELEMENT_AMOUNT, [](int grade) { return grade > 50 && grade <= 100; }); // This veriable takes the user inputs and sorts the eliments with in the specified range
	std::cout << "The scores you entered include " << over50 << " percentages over 50." << std::endl; // Prints out what is in the quotation marks and the value of over50
	return 0; // Ends the program
} // Closing brackets