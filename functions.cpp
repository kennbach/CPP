#include <iostream>

// return an int
int multiply(int a, int b)
{
  return a * b;
}

// no return
void multiplyAndLog(int a, int b)
{
  std::cout << a * b << "\n";
}

int main()
{
  std::cout << multiply(2, 5) << "\n";
  multiplyAndLog(5, 20);
}
