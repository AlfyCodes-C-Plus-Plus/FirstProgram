
// The reason why we do this is to get the input and output Libraires
#include <iostream>

// We are returning an INT.
// All c++ must have exactly one main function
int main()
{

    //This is how we declare variables
    int favorite_number;

    // This is how we grab information from the user
    std::cout << "Enter your favorite number between 1 and 100:";

    // Now we are taking the users input and storing it into the variable
    std::cin >> favorite_number;

    // Now we just print out to the terminal.
    std::cout << "Amazing! That's my favorite number too!" << std::endl;

    // Return 0 means no errors
    return 0;
}