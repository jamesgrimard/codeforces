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
    
    int triangles; cin >> triangles;

    double base, height; cin >> base >> height;
    double total_area =  0.5 * base * height * (double) triangles;

    int a[triangles];
    for (int i=0;i<triangles;i++) cin >> a[i];

    double ratio = base / height;

    for (int i=triangles-2;i>=0;i--) {
      double overlap_height = max(a[i]+height - a[i+1] , 0.0);
      double overlap_width = overlap_height * ratio;
      total_area -= 0.5 * overlap_width * overlap_height;
    }

    cout << setprecision(12) << total_area << '\n';
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
