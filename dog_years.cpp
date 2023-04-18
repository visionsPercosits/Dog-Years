/*
This project was made because
I'm learning C++ and I want to train.
*/

#include <iostream>

int main(){
    // Sparkles is 6 years old
    int dog_age = 6;
    int early_years = 21; // Count as the first two years of a dog's life
    int later_years = (dog_age - 2) * 4; // Each follow year of 4 human years
    int human_years = early_years + later_years; // Adding the two years variables
    std::cout << "My name is [Your name here] " << "Ruff ruff, I am " << human_years << " years old in human years.";
    return 0;
}
    
