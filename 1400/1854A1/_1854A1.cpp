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

    vector<long long> a(n);
    vector<int> ans;
    for (int i=0;i<n;i++) cin >> a[i];

    for (int i=0;i<n-1;i++) {
      if (a[i] > 0) {
        for (int k=0;k<7;k++) {
          ans.push_back(i+1);
          ans.push_back(i+1);
          a[i] *= 2LL;
        }
        for (int j=i+1;j<n;j++) {
          ans.push_back(j + 1);
          ans.push_back(j);
          a[j] += a[j - 1];
          ans.push_back(j + 1);
          ans.push_back(j);
          a[j] += a[j - 1];
        }
        break;
      }
    }

    for (int i=n-2;i>=0;i--) {
      if (a[i] > a[i+1]) {
        if (a[i] == 0) {
          a[i] += a[i+1];
          ans.push_back(i+1);
          ans.push_back(i+2);
        }
        for (int k = 0; k < 7; k++) {
          ans.push_back(i+1);
          ans.push_back(i+1);
          a[i] *= 2LL;
        }
        for (int j=i-1;j>=0;j--) {
          ans.push_back(j+1);
          ans.push_back(j+2);
          a[j] += a[j+1];
          ans.push_back(j+1);
          ans.push_back(j+2);
          a[j] += a[j+1];
        }
      }
    }

    cout << ans.size() / 2 << '\n';
    for (int i=0;i<ans.size();i+=2) cout << ans[i] << " " << ans[i+1] << '\n';
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