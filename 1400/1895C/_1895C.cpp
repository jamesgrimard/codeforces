// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1895/C
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>

using namespace std;

void solve() {

  int n; cin >> n;

  vector<int> a(n), sz(n);
  int v[6][46] = {};

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    int total = 0, TEMP = a[i], SZ = 0;
    while (TEMP) {
      total += TEMP % 10;
      TEMP /= 10;
      SZ++;
    }
    v[SZ][total]++;
    sz[i] = SZ;
  }

  sort(a.begin(), a.end());
  long long total = 0;

  for (int i = n - 1; i >= 0; i--) {

    vector<int> T, B;
    int TEMP = a[i];

    while (TEMP) {
      T.push_back(TEMP % 10);
      B.push_back(TEMP % 10);
      TEMP /= 10;
    }

    int N = T.size();

    for (int j = 1; j < N; j++) {
      T[j] += T[j - 1];
      B[N - 1 - j] += B[N - 1 - j + 1];
    }

    for (int j = N; j > 0; j -= 2) {
      int K = (j + N) / 2;
      int D = T[K - 1] - (T[N - 1] - T[K - 1]);
      int O = B[N - K] - (B[0] - B[N - K]);
      total += v[j][D];
      total += v[j][O];
    }

    v[N][T[N - 1]]--;
  }

  cout << total - (long long)n << '\n';
  // test

}

int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();

  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/