
// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
  
  int tt; cin >> tt;
  while (tt--) {
    long long n; cin >> n;
    map<long long,int> m;
    for (int i=2;i<=sqrt(n);i++) {
      while (n%i==0) {
        n /= i;
        m[i]++;
      }
    }
    
    m[n]++;
    int mx = 0;
    long long MX;
    for (auto [k,v]:m) if (v > mx) MX = k, mx = v;
    long long last = MX;
    for (auto [k,v]:m) {
      if (k != MX) while (v--) last *= k;     
    }
    cout << mx << '\n';
    for (int i=0;i<m[MX]-1;i++) cout << MX << " ";
    cout << last << '\n';
  }


  return 0;   

}