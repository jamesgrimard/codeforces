// AUTHOR: JAMES PHILIP GRIMARD
// GITHUB: github.com/jamesgrimard/codeforces
// PROBLEM: https://codeforces.com/problemset/problem/1003/B
// ----------------------------------------------------------------------------
// SOLUTION
// ----------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int a, b, x; cin >> a >> b >> x;

  string s = "";

  if (a >= b) {

    for (int i=0;i<x+1;i++) (i & 1) ? s += "1" : s += "0";

    b -= (x + 1) / 2;
    a -= ((x + 1) / 2 + ((x + 1) & 1));

    while (a--) s = "0" + s;

    if ((x + 1) % 2 == 0) {
      while (b--) s += "1";
    } else {
      if (b) {
        s[s.size()-1] = '1';
        b--;
        while (b--) s += "1";
        s += "0";
      }
    }

  } else {

    for (int i=0;i<x+1;i++) (i & 1) ? s += "0" : s += "1";

    a -= (x + 1) / 2;
    b -= ((x + 1) / 2 + ((x + 1) & 1));

    while (b--) s = "1" + s;

    if ((x + 1) % 2 == 0) {
      while (a--) s += "0";
    } else {
      if (a) {
        s[s.size()-1] = '0';
        a--;
        while (a--) s += "0";
        s += "1";
      }
    }
  }

  cout << s << '\n';

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
