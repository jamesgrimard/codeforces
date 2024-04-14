// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// ----------------------------------------------------------------------------
// PROBLEM
// ----------------------------------------------------------------------------
/*

*/
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int n; cin >> n;
  long long prizes[5] , points[n];

  for (int i=0;i<n;i++) cin >> points[i];
  for (int i=0;i<5;i++) cin >> prizes[i];

  long long sum = 0;
  long long score[5] = {};

  for (int i=0;i<n;i++) {
    sum += points[i];
    for (int j=4;j>=0;j--) {
      if (sum / prizes[j]) {
        score[j] += sum / prizes[j];
        sum %= prizes[j];
      }
    }
  }
  for (auto x:score) cout << x << " ";
  cout << '\n';
  cout << sum << '\n';


}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();
 	
  return 0;
}
// ----------------------------------------------------------------------------
// NOTES
// ----------------------------------------------------------------------------
/*

*/
