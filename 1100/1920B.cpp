//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , k , x; cin >> n >> k >> x;
    int a[n+1] = {} , r[n+1] = {}; 
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n+1, [](const int &a , const int &b) {return a > b;});
    for (int i=n-1;i>=0;i--) r[i] = r[i+1] + a[i];
    int mx = -r[0];
    for (int i=0;i<=k;i++) {
      int X = r[i] - r[min(i+x,n)];
      mx = max(mx,r[min(i+x,n)]-X);
    }
    
    cout << mx << '\n';
  }
 
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

