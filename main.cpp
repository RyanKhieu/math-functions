// Name: Ryan Khieu
// Program Name: Math Functions
// Date: 12/3/24
#include <iostream>
#include <cmath>

// Declare variables
double ayaan = 15.49;
int neil = 9;
int pranav = -2;

int main() {
    // Ayaan wants to know what a product that costs $15.49 will be after he rounds up. What will the cost be after he rounds up to the nearest dollar?
    // Use the ceil() function to round up
    std::cout << "The cost will be $" << ceil(ayaan) << std::endl;
    // Neil wants to find the square root of 9 in math class. What is the square root of 9?
    // Use the sqrt() function to find the square root
    std::cout << "The square root of 9 is " << sqrt(neil) << std::endl;
    // Pranav wants to find the distance he is from his house as he walks home from school. If he walks 2 kilometers past his house, what is the absolute value of his distance from his house
    // Use the abs() function to find the absolute value
    std::cout << "The absolute value of Pranav's distance from his house is " << abs(pranav) << " kilometers" << std::endl;  

    return 0;
}