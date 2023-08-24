#include <iostream>
#include <vector>
#include "src/distance.h"


int main()
{

  std::vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << nonstd::distance(vec1.begin(), vec1.end());
}
