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
    string s,t,b; cin >> s;

    vector<vector<int>> a(11);
    for (int i=0;i<s.size();i++) a[s[i]-'0'].push_back(i+1);
    for (int i=0;i<=10;i++) if (a[i].empty()) a[i].push_back(0);

    int m; cin >> m;
    cin >> t >> b;

    bool ans = 0;
    int p = 0 , mx = a[t[0]-'0'][0] , mn;  
    
    for (int j = t[0] - '0'; j <= b[0] - '0'; j++) {
      mx = max(a[j][0],mx);
      if (!a[j][0]) ans = 1;
    }

    p = mx;

    for (int i=1;i<m;i++) {
      mn = 0;
      for (int j = t[i] - '0'; j <= b[i] - '0'; j++) {
        bool tmp = 1;
        for (int k=0;k<a[j].size();k++) {
          if (a[j][k] > p) {
            mn = max(a[j][k],mn);
            tmp = 0;
            break;
          }
        }
        if (tmp) ans = 1;
      }
      p = mn;
    }

    (ans) ? cout << "YES\n" : cout << "NO\n";

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