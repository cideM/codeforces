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

    std::ranges::sort(pieces, std::ranges::greater{});

    auto steps = std::ranges::fold_left(
        std::views::drop(pieces, 1), 0U,
        [](auto xs, std::size_t x) { return xs + x + (x - 1); });

    std::cout << steps << "\n";
  }

  return 0;
}
