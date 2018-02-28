#include <iostream>
#include <vector>

int main() {
    std::cout << "Enter numbers to find median of: ";
    std::vector<int> vec;
    int n;
    while (std::cin >> n)
        vec.push_back(n);

    std::cout<< "Median of those numbers are: " << median(vec);

    return 0;
}
