//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
long long mod(long long a, long long b) { return (a % b + b) % b; }

void solve() {

  long long n,k; cin >> n >> k;
  long long a[n] , s[n]; for (int i=0;i<n;i++) {
    cin >> a[i];
    s[i] = a[i];
    if (i > 0) s[i] += s[i-1];
  }

  long long mx = 0 , mn = 0;

  for (int i=0;i<n;i++) {
    if (s[i] < mn) mn = s[i];
    mx = max(s[i]-mn,mx);
  } 

  long long q = mx;

  while (k--) mx = mod(mx * 2LL,MOD);
  
  cout << mod(mx+s[n-1] - q,MOD) << '\n';
  

  //cout << mx << " " << mn << " " << s[n-1] << '\n';
   
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  int tt; cin >> tt; 
  while (tt--) solve();
 	
  return 0;
}

