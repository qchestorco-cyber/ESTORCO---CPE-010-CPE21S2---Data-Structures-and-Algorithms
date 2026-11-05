#include <iostream>

class Triangle {
    private:
        // Shorter, cleaner variable names for the angles
        double a, b, c; 

    public:
        // Constructor: Calls setAngle to avoid repeating code
        Triangle(double A, double B, double C) {
            setAngle(A, B, C);
        }

        // Sets or updates the angles
        void setAngle(double A, double B, double C) {
            a = A;
            b = B;
            c = C;
        }

        // Validates if the angles form a real triangle
        bool validateTriangle() {
            // Must equal exactly 180, and all angles must be greater than 0
            return (a + b + c == 180 && a > 0 && b > 0 && c > 0);
        }
};

int main() {
    // Creating a triangle object (Changed 180 to 90 so it creates a valid triangle to test)
    Triangle myTriangle(40, 50, 90); 

    if (myTriangle.validateTriangle()) {
        std::cout << "The angle forms a valid triangle.\n";
    } else {
        std::cout << "The shape is NOT a triangle.\n";
    }

    return 0;
}
