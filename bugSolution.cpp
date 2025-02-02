#include <iostream>
#include <vector>

int main() {
  std::vector<char> vec;
  vec.push_back(1); // Represents true
  vec.push_back(0); // Represents false
  bool b = vec[0] == 1; // Accessing the first element
  bool c = vec[1] == 1; // Accessing the second element
  std::cout << "b: " << b << std::endl; 
  std::cout << "c: " << c << std::endl; 
  return 0;
}
