#include <iostream>
#include <cmath>

int main()
{
    // This seeds the random number generator:
    srand(time(NULL));

    // Use rand() below to initialize the_amazing_random_number
    int the_amazing_random_number = rand() % 29; // get 0~28 random number

    std::cout << the_amazing_random_number << std::endl;
}