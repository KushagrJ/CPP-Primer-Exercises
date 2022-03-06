// C++20 Standard

#include <iostream>


int main()
{

    // '\x32' is the same as '2', '\115' is the same as 'M' and '\xa' is the
    // same as '\n'.
    std::cout << "\x32\t\115\xa";

    return 0;

}





/* Output - 02-08.cpp

   2       M

 * End of Output */
