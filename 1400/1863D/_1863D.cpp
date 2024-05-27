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
    int n,m; cin >> n >> m;

    vector<string> s(n);
    for (int i=0;i<n;i++) cin >> s[i];

    vector<vector<char>> b(n,vector<char>(m,'.'));
    
    bool ans = 1;
    vector<int> C(m, 0), R(n, 0);

    for (int i=0;i<n;i++) {
      for (int j=0;j<m;j++) if (s[i][j] != '.') R[i]++;
      if (R[i] & 1) ans = 0;
    }

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) if (s[j][i] != '.') C[i]++;
      if (C[i] & 1) ans = 0;
    }

    if (!ans) {
      cout << -1 << '\n';
      continue;
    }

    for (int i=0;i<m;i++) {
      int cnt = 1;
      for (int j=0;j<n;j++) {
        if (s[j][i] == 'L') {
          if (cnt & 1) {
            b[j][i] = 'B' , b[j][i+1] = 'W';
          } else {
            b[j][i] = 'W', b[j][i + 1] = 'B';
          }
          cnt++;
        }
      }
    }

    for (int i=0;i<n;i++) {
      int cnt = 1;
      for (int j=0;j<m;j++) {
        if (s[i][j] == 'U') {
          if (cnt & 1) {
            b[i][j] = 'B' , b[i+1][j] = 'W';
          } else {
            b[i][j] = 'W', b[i + 1][j] = 'B';
          }
          cnt++;
        }
      }
    }
    

    for (const auto &i : b) {
      for (const auto &j : i) cout << j;
      cout << '\n';
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