#include <iostream>

int main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::getline(std::cin >> std::ws, name);

  if (name.length() > 12)
  {
    std::cout << "Your name can's be over 12 characters";
  }
  else if (name.empty())
  {
    std::cout << "Your name is empty";
  }

  // name.clear();

  name.append("@mail.com");
  // name.insert(0, "WHAT");
  // std::cout << "Hello " << name.at(1) << '\n';
  std::cout << "Hello " << name << '\n';

  return 0;
}