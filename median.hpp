#include <algorithm> // sort
#include <stdexcept> // domain_error
#include <vector>

template <class T>
T median (std::vector<T>& vec){
    typedef typename std::vector<T>::size_type vec_size;
    vec_size size = vec.size();

    if (size == 0)
        throw std::domain_error("Median of an empty vector");

    // Type T must support operator<
    sort(vec.begin(), vec.end());

    vec_size mid = size / 2;

    // Type T must support operator+ and operator/
    return size % 2 == 0 ? (vec[mid - 1] + vec[mid]) / 2 : vec[mid];
}
