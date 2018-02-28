#include <ios> // clear
#include <iostream>
#include <vector>

#include "median.h"

int main() {
    // Try passing vector of integers to median function
    std::cout << "Enter integers to find the median of: ";

    // store input in vector one by one
    std::vector<int> vec;
    int n;
    while (std::cin >> n)
        vec.push_back(n);

    // print result of median function
    std::cout << "Median of those numbers are: " << median(vec) << std::endl;



    // Now try passing vector of doubles to median function
    std::cin.clear();
    std::cout << "Enter doubles to find the median of: ";

    // store input in vector
    std::vector<double> vec_double;
    double d;
    while (std::cin >> d)
        vec_double.push_back(d);

    // print result of median(vector<double>)
    std::cout << "Median of these doubles are: " << median(vec_double) << std::endl;

    return 0;
}
