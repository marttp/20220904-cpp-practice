#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int> > pairlist_t;
using text_t = std::string;
using number_t = int;

int main()
{
  pairlist_t pairlist;
  pairlist.push_back(std::make_pair("Test", 2));
  for (auto pair : pairlist)
  {
    std::cout << pair.first << '\n';
  }
  text_t firstName = "Mart";
  number_t age = 25;
  std::cout << "Name " << firstName << " age " << age;
  return 0;
}