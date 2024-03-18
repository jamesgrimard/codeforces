//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    int a[n],b[n]; 
    int mxa = 0 , mxb = 0;
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) cin >> b[i];
    for (int i=0;i<n;i++) {
      mxa = max(max(a[i],b[i]),mxa);
      mxb = max(min(a[i],b[i]),mxb);
    }
    (mxa <= max(a[n-1],b[n-1]) && mxb <= min(a[n-1],b[n-1])) ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}

