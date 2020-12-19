/*
 *  constantin
 *  sum of the first one hundred numbers
 *  12.2020
 */

#include <iostream>

int main()
{

    int sum;

    for(int j = 1; j <= 100; ++j)
        sum += j;

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
