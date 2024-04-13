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
  
  int tt; cin >> tt;

  while (tt--) {
    int n , k; cin >> n >> k;

    vector<int> previous_step(k+1,0);
    vector<pair<int,int>> max_step(k+1,{0,0});

    for (int i=1;i<=n;i++) {
      int current_colour; cin >> current_colour;

      if (i - previous_step[current_colour] - 1 >= max_step[current_colour].first) {
        max_step[current_colour].second = max_step[current_colour].first;
        max_step[current_colour].first = i - previous_step[current_colour] - 1;
      } else {
        max_step[current_colour].second = max(max_step[current_colour].second,i - previous_step[current_colour] - 1);
      }

      previous_step[current_colour] = i;

    }

    int min_steps = n;

    for (int i=1;i<=k;i++) {
      // final step off bridge
      if ((n+1) - previous_step[i] - 1 >= max_step[i].first) {
        max_step[i].second = max_step[i].first;
        max_step[i].first = (n+1) - previous_step[i] - 1;
      } else {
        max_step[i].second = max(max_step[i].second,(n+1) - previous_step[i] - 1);
      }

      min_steps = min(max(max_step[i].first / 2 , max_step[i].second), min_steps);
    }

    cout << min_steps << '\n';

  } 
 
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