#include <iostream>
#include <vector>
#include "src/distance.h"


int main()
{

  std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << nonstd::distance(vec.begin(), vec.end());
}
