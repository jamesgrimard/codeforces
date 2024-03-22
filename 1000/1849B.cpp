//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n , k; cin >> n >> k;
    pair<int,int> a[n]; for (int i=0;i<n;i++) {
      cin >> a[i].first;
      a[i].first %= k;
      a[i].second = i + 1;
      if (a[i].first != 0) a[i].first = k - a[i].first;
    }
    sort(a,a+n);
    for (auto x : a) cout << x.second << " ";
    cout << '\n';
  }
  
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

