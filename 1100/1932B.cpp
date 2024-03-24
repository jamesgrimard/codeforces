//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

 int tt; cin >> tt;
 while (tt--) {
  int n; cin >> n;
  long long a[n]; for (int i=0;i<n;i++) cin >> a[i];
  long long p = a[0];
  for (int i=1;i<n;i++) p = (p / a[i] + 1) * a[i];
  cout << p << '\n';
 } 
 
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

