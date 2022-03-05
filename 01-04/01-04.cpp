// C++20 Standard
// This program doesn't include input validation.

#include <iostream>


int main()
{

    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "The product of " << a << " and " << b << " is " << (a * b)
              << std::endl;

    return 0;

}





/* Output - 01-04.cpp

   Enter two integers: 2 5
   The product of 2 and 5 is 10

 * End of Output */
