// FAILED
// I couldn't figure this one out on my own. I wrote a solution that started
// with a sliding window the size of the input vector and then I decrease it and
// move it over the entire vector. This is too slow though. I also experimented
// with a binary search solution. It would walk through the vector and then try
// to use binary search to find the longest sequence that still fits within the
// time limit. This also ended up being too slow since it has to constantly
// recompute sliding windows as well. In the end I copied a solution that I
// found online. It took me a lot of help to understand how it even works (it's
// the solution in this file).
// This solution uses a sliding window the size of `answer`. Given the following
// input:
// 4 5
// 4 10 2 2
// It first looks at `4`. This is within the limit, so our biggest window that
// works is now 1. Can we increase the sliding window size to 2? Now it fails.
// Next, we move the `left` point one element to the right. And we also move
// forward in our loop iteration. This effectively moves a sliding window of
// size 2 over to the right. For `10 2` it still fails, so we move over. For `2
// 2` it works.
#include <iostream>
#include <print>
#include <vector>

int main() {
  int numBooks, time;
  std::cin >> numBooks >> time;

  std::vector<std::size_t> books(static_cast<std::size_t>(numBooks));
  for (auto &b : books) {
    std::cin >> b;
  }

  std::size_t answer{0};
  std::size_t left{0};
  std::size_t sum{0};

  for (std::size_t i = 0; i < books.size(); ++i) {
    sum += books[i];
    if (sum <= static_cast<std::size_t>(time)) {
      answer++;
    } else {
      sum -= books[left];
      left++;
    }
  }

  std::cout << answer << "\n";
  return 0;
}
