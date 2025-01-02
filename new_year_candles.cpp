// FAILED
// Let's not talk about this one. It's embarassing. I'll just chalk it up to
// happen stance. A mulligan.
#include <iostream>

int main() {
  int candles, candlesToCombine;
  std::cin >> candles >> candlesToCombine;

  int totalHours{candles};
  while (candles >= candlesToCombine) {
    int newCandles{candles / candlesToCombine};
    totalHours += newCandles;
    candles = (candles % candlesToCombine) + newCandles;
  }

  std::cout << totalHours << "\n";
  return 0;
}
