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

    vector<int> a(n+1);
    vector<vector<int>> b(n+1,vector<int>(31));

    for (int i=1;i<=n;i++) {
      int x ; cin >> x;
      a[i] = x;
      for (int j=0;j<31;j++) {
        b[i][j] = (bool) (x & (1 << j));
        b[i][j] += b[i-1][j];
      }
    }

    int q; cin >> q;
    
    for (int i=0;i<q;i++) {

      int l , L , R = n , M , k , p = 0; cin >> l >> k;
      L = l;
      while (L <= R) {
        p = 0;
        M = (L + R)  / 2;
        for (int j=0;j<31;j++) if (b[M][j] - b[l-1][j] >= M - l + 1) p |= (1 << j);
        if (p >= k) L = M + 1;
        if (p < k) R = M - 1;
      }

      if (R < l) {
        cout << -1 << " ";
      } else {
        cout << R << " ";
      }
      
    }

    cout << '\n';
      
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