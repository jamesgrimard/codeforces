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
    vector<int> a(n),t(n,0),b(n,0);
    map<int,bool> m1,m2;
    for (int i=0;i<n;i++) {
      cin >> a[i];
      if (!m1[a[i]]) t[i]++;
      m1[a[i]] = 1;
    }
    for (int i=n-1;i>=0;i--) {
      if (i != n-1) b[i] = b[i+1];
      if (!m2[a[i]]) b[i]++;
      m2[a[i]] = 1;
    }
    long long total = 0;
    for (int i=0;i<n;i++) if (t[i]) total += (long long) b[i];
    cout << total << '\n';
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