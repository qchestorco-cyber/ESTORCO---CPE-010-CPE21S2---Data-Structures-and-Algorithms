#include <iostream>


// Function to convert Kelvin to Fahrenheit
float kelvinToFahrenheit(float kelvin) {

    return (kelvin - 273.15) * (9.0 / 5.0) + 32.0;
}

int main() {
    float kelvin;

    std::cout << "Enter Temperature in Kelvin: ";
    std::cin >> kelvin;

    // Added input validation for absolute zero
    if (kelvin < 0) {
        std::cout << "Error: Temperature cannot be below Absolute Zero (0 Kelvin)." << endl;
        return 1; // Exit with an error code
    }

    float fahrenheit = kelvinToFahrenheit(kelvin);
    std::cout << kelvin << " Kelvin is equal to " << fahrenheit << " Fahrenheit." << Std::endl;

    return 0;
}
