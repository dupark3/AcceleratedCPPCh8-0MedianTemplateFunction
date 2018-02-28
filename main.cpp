#include <iostream>
#include <vector>

#include "median.h"

int main() {
    std::cout << "Enter numbers to find median of: ";

    // store input in vector one by one
    std::vector<int> vec;
    int n;
    while (std::cin >> n)
        vec.push_back(n);

    // print result of median function
    std::cout << "Median of those numbers are: " << median(vec);

    return 0;
}
