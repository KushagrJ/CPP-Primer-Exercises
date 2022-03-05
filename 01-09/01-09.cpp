// C++20 Standard
// This program doesn't include input validation.

#include <iostream>


int main()
{

    int i = 50;
    int sum = 0;

    while (i <= 100)
    {
        sum += i;
        i++;
    }

    std::cout << "The sum from 50 to 100 (both inclusive) is " << sum
              << std::endl;

    return 0;

}





/* Output - 01-09.cpp

   The sum from 50 to 100 (both inclusive) is 3825

 * End of Output */
