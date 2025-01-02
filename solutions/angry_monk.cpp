#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

int main() {
  int numTests;
  std::cin >> numTests;

  for (int i = 0; i < numTests; i++) {
    std::size_t casseroleLen, numPieces;
    std::cin >> casseroleLen >> numPieces;

    std::vector<std::size_t> pieces(numPieces);
    for (auto &p : pieces) {
      std::cin >> p;
    }

    std::sort(pieces.begin(), pieces.end(), std::ranges::greater());

    std::size_t steps{};

    for (std::size_t p : pieces | std::views::drop(1)) {
      steps = steps + p + (p - 1);
    }

    std::cout << steps << "\n";
  }

  return 0;
}
