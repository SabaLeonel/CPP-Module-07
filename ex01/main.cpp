#include "iter.hpp"

int main (void)
{
    int array[] = {1, 2, 3, 4, 5};
    float array2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string array3[] = {"one", "two", "three", "four", "five"};

    iter(array, 5, print);

    iter(array2, 5, print);

    iter(array3, 5, print);

    return 0;
}