#include <iostream>
#include <cmath>
#include <iomanip> // Added for output formatting


// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {

    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
    
}

int main() {
    double x1, y1, x2, y2;

    std::cout << "Enter coordinates of first point (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter coordinates of second point (x2 y2): ";
    std::cin >> x2 >> y2;

    double distance = calculateDistance(x1, y1, x2, y2);

    // Formatted the output to exactly 2 decimal places
    std::cout << fixed << setprecision(2);
    cstd::out << "The distance between the two points is: " << distance << std::endl;

    return 0;
}
