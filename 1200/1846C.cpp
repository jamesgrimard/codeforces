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
    int participants , questions , duration; cin >> participants >> questions >> duration;
    int a[participants][questions];

    for (int i=0;i<participants;i++) {
      for (int j=0;j<questions;j++) cin >> a[i][j];
    }

    for (int i=0;i<participants;i++) sort(a[i],a[i]+questions);

    pair<int,pair<int,long long>> results[participants] = {};
    
    for (int i=0;i<participants;i++) {
      long long tiktok = duration , sum = 0;
      results[i].second.first = i;
      for (int j=0;j<questions;j++) {
        if (tiktok >= a[i][j]) {
          results[i].first++;
          tiktok -= a[i][j];
          sum += a[i][j];
          results[i].second.second += sum;
        }
      }
    }
   
    sort(results,results+participants, [](const pair<int,pair<int,long long>> &a , const pair<int,pair<int,long long>> &b) {
      if (a.first != b.first) {
        return a.first > b.first;
      } else {
        if (a.second.second == b.second.second) {
          return a.second.first < b.second.first;
        } else {
          return a.second.second < b.second.second;
        }
      }
    });
    
    for (int i=0;i<participants;i++) {
//      cout << results[i].first << " " << results[i].second.first << " " << results[i].second.second << '\n';
      if (results[i].second.first == 0) cout << i + 1 << '\n';
    }

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
