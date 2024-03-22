// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

const long long MOD = 1e9 + 7;

void solve() {

  int tt; cin >> tt;
  while (tt--) {

    int n; cin >> n;

    int a[n+1] = {}, b[n+1] = {}, r[2*n+1] = {} , R[2*n+1] = {}, cnt = 0; 

    for (int i=1;i<=n;i++) {
      cin >> a[i]; 
      if (a[i] == a[i-1] || i == 1) {
        cnt++;
      } else {
        r[a[i-1]] = max(cnt,r[a[i-1]]);
        cnt = 1;
      }
    }
    if (cnt > 0) r[a[n]] = max(cnt,r[a[n]]);
    cnt = 0;


    for (int i=1;i<=n;i++) {
      cin >> b[i]; 
      if (b[i] == b[i-1] || i == 1) {
        cnt++;
      }  else {
        R[b[i-1]] = max(cnt,R[b[i-1]]);
        cnt = 1;
      }
    }
    if (cnt > 0) R[b[n]] = max(cnt,R[b[n]]);

    int mx = 0;
    for (int i=1;i<=2*n;i++) mx = max(mx,r[i]+R[i]);

    cout << mx << '\n';
  
  }


  
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  solve();
  
  return 0;
}