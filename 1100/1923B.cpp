//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  long long n , k; cin >> n >> k;
  pair<long long,long long> a[n];
  for (int i=0;i<n;i++) cin >> a[i].second;
  for (int i=0;i<n;i++) {
    cin >> a[i].first;
    a[i].first = abs(a[i].first);
  }
  sort(a,a+n);
  long long sum = 0;
  bool ans = 1;
  for (int i=0;i<n;i++) {
    sum += a[i].second;
    if (sum > k*a[i].first) ans = 0;
  }
  (ans) ? cout << "YES\n" : cout << "NO\n";
 
 
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  int tt; cin >> tt; 
  while (tt--) solve();
 	
  return 0;
}

