#include <iostream>
#include <vector>
#include "src/advance.h"


int main()
{

  std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  
  auto it = vec.begin() + 2;
  
  std::cout << *it << std::endl;
  
  nonstd::advance(it, 3);
  
  std::cout << *it << std::endl;
}
