// C++20 Standard
// This program doesn't include input validation.

#include <iostream>


int main()
{

    int lower, upper;
    std::cout << "Enter the limits: ";
    std::cin >> lower >> upper;

    if (lower > upper)
    {
        std::cout << "Invalid limits entered!" << std::endl;
    }

    else
    {
        for ( ; lower <= upper; (lower)++)
            std::cout << lower << " ";
        std::cout << std::endl;
    }

    return 0;

}





/* Output - 01-19.cpp

   Enter the limits: 10 20
   10 11 12 13 14 15 16 17 18 19 20

 * End of Output */
