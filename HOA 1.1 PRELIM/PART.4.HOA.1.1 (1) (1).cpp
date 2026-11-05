#include <iostream>
#include <cmath>

class Triangle {
    private:
        // uppercase for angles, lowercase for sides
        double A, B, C; 
        double a, b, c; 

    public:
    
        Triangle(double angleA, double angleB, double angleC, double sideA, double sideB, double sideC) {
            setValues(angleA, angleB, angleC, sideA, sideB, sideC);
        }

        // Sets or changes the triangle's values
        void setValues(double angleA, double angleB, double angleC, double sideA, double sideB, double sideC) {
            A = angleA; B = angleB; C = angleC;
            a = sideA;  b = sideB;  c = sideC;
        }

        // Validates that the angles make sense
        bool validateTriangle() {
            return (A + B + C == 180 && A > 0 && B > 0 && C > 0 && a > 0 && b > 0 && c > 0);
        }

        // Calculates perimeter
        double getPerimeter() {
            return a + b + c;
        }

    
        double getArea() {
            double s = getPerimeter() / 2.0; // semi-perimeter
            return std::sqrt(s * (s - a) * (s - b) * (s - c));
        }

        // Prints the classification of the triangle
        void printType() {
            if (A < 90 && B < 90 && C < 90) {
                std::cout << "The triangle is an acute triangle.\n";
            } else if (A == 90 || B == 90 || C == 90) {
                std::cout << "The triangle is a right triangle.\n";
            } else {
                std::cout << "The triangle is an obtuse triangle.\n";
            }
        }
};

int main() {
    // Creating a triangle object
    Triangle set1(40, 30, 110, 8, 7, 5);

    if (set1.validateTriangle()) {
        std::cout << "The shape is a valid triangle.\n";
        std::cout << "Perimeter of the triangle: " << set1.getPerimeter() << "\n";
        std::cout << "Area of the triangle: " << set1.getArea() << "\n";
        set1.printType();
    } else {
        std::cout << "The shape is NOT a valid triangle.\n";
    }

    return 0;
}
