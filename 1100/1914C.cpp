//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int n , k; cin >> n >> k;
  long long a[n] = {}, b[n] = {};
  for (int i=0;i<n;i++) {
    cin >> a[i];
    if (i > 0) a[i] += a[i-1];
  }
  for (int i=0;i<n;i++) {
    cin >> b[i];
    if (i > 0) b[i] = max(b[i-1],b[i]);
    
  }
  long long mx = 0;
  for (int i=0;i<n;i++) {
    mx = max(mx,a[i] + b[i]*(k-(i+1)));
    if (k - (i+1) == 0) break;
  }
  
  cout << mx << '\n';
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  int tt; cin >> tt; 
  while (tt--) solve();
 	
  return 0;
}

