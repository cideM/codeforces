// SUCCESS
// lol
#include <iostream>
#include <print>

int main() {
  int lines;
  std::cin >> lines;

  for (int i = 0; i < lines; i++) {
    std::string s;
    std::cin >> s;
    if (s.size() > 10) {
      std::print("{}{}{}\n", s.front(), s.size() - 2, s.back());
    } else {
      std::cout << s << "\n";
    }
  }
}
