#include <iostream>

int main()
{
  std::cout << "Hello World";
  std::cout << "I like pizza"
            << "\n"; // \n for performance improve than use std::endl
  return 0;
}