#include <iostream>
#include <cmath>

int main() {
  double num = 3.14159265;
  double fraction = num - int(num);
  double result = int(num) + ceil(fraction);
  std::cout << "O número arredondado é: " << result << std::endl;
  return 0;
}