#include <cassert>
#include <iostream>

void f() noexcept {
  std::cout << "Hello world\n";
}

int main()
{
  #ifdef NDEBUG
  std::cout << "Release mode" << '\n';
  assert(1==2);
  #else
  std::cout << "Debug mode" << '\n';
  assert(1+1==2);
  #endif
  f();
}
