//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    pair<int,int> a[n] = {};
    long long s[n], b[n] = {};
    for (int i=0;i<n;i++) {
      cin >> a[i].first;
      a[i].second = i;
    }
    sort(a,a+n,[](const pair<int,int> &a , const pair<int,int> &b){return a.first > b.first;});
    for (int i=n-1;i>=0;i--) {
      s[i] = a[i].first;
      if (i < n-1) s[i] += s[i+1];
      if (i > 0 && s[i] >= a[i-1].first) b[i] = 1;
    }
    for (int i=0;i<n;i++) {
      if (i>0 && b[i] != 0) b[i] = b[i-1] + 1;
      a[i].first = n - 1 - i + b[i];
    }
    
    sort(a,a+n,[](const pair<int,int> &a , const pair<int,int> &b){return a.second < b.second;});
    for (auto x:a) cout << x.first << " ";
    cout << '\n';
    
  }



}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
