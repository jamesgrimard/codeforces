// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
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
#include <fstream>
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

  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    int pos = k % n;
    if (!pos) pos = n;
    pos = n + 1 - pos;
    if (n % 2 == 0) {
      if (k % n == 0) {
        cout << n << '\n';
      } else {
        cout << k % n << '\n';
      }
      continue;
    }
    int q = k % (n / 2);
    if (!q) q = n / 2;
    q *= 2;
    q = n - q;
    if (pos - (q + 1) <= 0) {
      cout << n + (pos - (q+1)) << '\n';
    } else {
      cout << pos - (q + 1) << '\n';
    }
  }


}

int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie();

  #ifndef ONLINE_JUDGE
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    cin.rdbuf(inputFile.rdbuf());
    cout.rdbuf(outputFile.rdbuf());
  #endif

  solve();

  return 0;
}