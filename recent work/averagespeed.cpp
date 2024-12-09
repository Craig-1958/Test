#include <cmath>
#include <iostream> //The Library allows the use of cin and couts

double distance_in_kilometers(double Distance_x_andY, double Distance_y_andz) { // This holds the function name and parameters
	return Distance_x_andY; // This returns the value of Distance x and y
	return Distance_y_andz; // This returns the value of Distance y and z
}//Closing brackets
double Time_it_took(double time_x_and_y, double time_y_and_z) { // This holds the function name and parameters
	return time_x_and_y; // This returns the value of Distance
	return time_y_and_z; // This returns the value of Distance
} //Closing brackets
int main() { // This indicates that this is the main section of code 
	double Distance_x_andY = 0; // States the name of the user input and sets the value to 0
	std::cin >> Distance_x_andY; //Allows the user to input a value

	double Distance_y_andz = 0; // States the name of the user input and sets the value to 0
	std::cin >> Distance_y_andz; //Allows the user to input a value

	double time_x_and_y; // States the name of the user input and sets the value to 0
	std::cin >> time_x_and_y; //Allows the user to input a value

	double time_y_and_z; // States the name of the user input and sets the value to 0
	std::cin >> time_y_and_z; //Allows the user to input a value

	double Distance_x_y = distance_in_kilometers(Distance_x_andY); //redifines distance to distance_in_kilometers
	double Distance_y_z = distance_in_kilometers(Distance_y_andz); //redifines distance to distance_in_kilometers
	double Time_x_y = Time_it_took(time_x_and_y); //redifines Time to Time_it_took
	double time_y_z = Time_it_took(time_y_and_z); //redifines Time to Time_it_took
	double averageVelocity = (Distance_x_y + Distance_y_z) / (Time_x_y + time_y_z); //Calulates and store the value of averageVelocity
	std::cout << "Average speed was " << averageVelocity << "Km/H"; //Prints out what is in the quotation marks and the value of averageVelocity
	return 0; // Ends the program
} //Closing brackets
