#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

    int totalOdd = 0;
    int totalEven = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 1)
        {                           // oddNum condition
            totalOdd += numbers[i]; // accumlate odd
        }
        else
        {
            totalEven += numbers[i]; // accumlate even
        }
    }
    std::cout << "Sum of Odd : " << totalOdd << "\n";
    std::cout << "Sum of Even : " << totalEven << "\n";
    return 0;
}