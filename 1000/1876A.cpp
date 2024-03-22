//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    long long n , c ; cin >> n >> c;
    pair<long long,long long> p[n];
    for (int i=0;i<n;i++) cin >> p[i].second;
    for (int i=0;i<n;i++) cin >> p[i].first;
    sort(p,p+n);
    long long sum = c, total = n-1;
    for (int i=0;i<n;i++) {
      if (p[i].first < c) {
        sum += (min(total,p[i].second) * p[i].first);
        total -= min(total,p[i].second);
      }
    }
    sum += total * c;
    cout << sum << '\n';
  }
  
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

