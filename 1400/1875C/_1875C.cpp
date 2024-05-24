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
    int n , k , ans = -1; cin >> n >> k;
    
    long long cnt = 0;
    int p = 0;

    while (n % k && p < 5000) {
      cnt += (long long) (n % k);
      n = n * 2 % k;
      p++;
    }

    (n % k) ? cout << -1 << '\n' : cout << cnt << '\n';
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