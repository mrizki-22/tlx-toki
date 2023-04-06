#include <bits/stdc++.h>
using namespace std;

int main() {
    std::vector<int> myVector = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    auto maxElement = std::max_element(myVector.begin(), myVector.end());

    std::cout << "The maximum value in the vector is: " << *maxElement << std::endl;

    return 0;
}