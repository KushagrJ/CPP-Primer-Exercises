// C++20 Standard
// This program doesn't include input validation.

#include <iostream>


int main()
{

    int x;
    int sum = 0;

    std::cout << "Enter integers to be summed up (q to quit): ";

    while (std::cin >> x)
        sum += x;

    std::cout << "Their sum is " << sum << std::endl;

    return 0;

}





/* Output - 01-16.cpp

   Enter integers to be summed up (q to quit): 1 2 3 4 5 q
   Their sum is 15

 * End of Output */
