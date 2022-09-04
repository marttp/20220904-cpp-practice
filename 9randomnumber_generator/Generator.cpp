#include <iostream>

int main()
{
  srand(time(NULL));
  int num = (rand() % 20) + 1;
  std::cout << num;
  return 0;
}