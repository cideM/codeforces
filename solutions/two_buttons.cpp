// FAILED
// I thought that path finding would be too slow and discarded it as a solution
// right from the start. Should have tried it. I then tried to solve it with pen
// & paper for half an hour and then decided to check solutions.
// The key insight here, and something I still always overlook, is that knowing
// if `m` is odd or even lets us make a definitive choice as to what the next
// step should be. If `m` is odd there is no way that you can get there by
// multiplying by 2. In this case you have to overshoot and then go down.
// The next insight is that there's no point in thinking of this as you either
// go up first and then down or vice versa. Rather, at every single step you get
// to make a choice. It's really about slowly homing in on the target, by making
// the right adjustments.
// You can now combine both ideas and out comes the solution below (which,
// again, is not mine). The loop could just as well be recursion. At every step
// we ask (assuming `m > n`, otherwise it's trivial): is `m` odd?
// - yes -> go up
// - no -> half
#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;

  int steps{0};

  while (n != m) {
    if (m > n) {
      if (m % 2 == 0) {
        m /= 2;
        steps++;
      } else {
        m++;
        steps++;
      }
    } else if (n > m) {
      steps += n - m;
      n = m;
    }
  }

  std::cout << steps << "\n";
}
