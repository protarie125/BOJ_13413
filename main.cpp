#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll T, N;
string x, y;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> T;
  while (0 < (T--)) {
    cin >> N >> x >> y;

    ll b = 0;
    ll w = 0;
    for (auto i = 0; i < N; ++i) {
      if (x[i] != y[i]) {
        if (x[i] == 'B')
          ++b;
        else
          ++w;
      }
    }

    cout << max(b, w) << '\n';
  }

  return 0;
}