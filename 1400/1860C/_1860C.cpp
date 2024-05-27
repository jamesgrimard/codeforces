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
    int n; cin >> n;
    vector<int> a(n),l(n,0);
    for (int i=0;i<n;i++) cin >> a[i];

    int mn , cnt = 0;
    for (int i=0;i<n;i++) {
      if (i == 0) mn = a[i];
      if (a[i] <= mn) {
        l[i] = 1;
        mn = a[i];
      }
    }
    mn = n+1;
    for (int i=0;i<n;i++) {
      if (l[i]) continue;
      if (a[i] < mn) {
        mn = a[i];
        cnt++;
      }
    }
    cout << cnt << '\n';
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