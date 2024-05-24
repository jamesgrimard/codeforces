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
    int n , m; cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i=1;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) cin >> b[i];
    a[0] = m;
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    int B = 0;
    for (int i=0;i<n;i++) {
      if (a[i] < b[B]) B++;
    }
    cout << n - B << '\n';
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