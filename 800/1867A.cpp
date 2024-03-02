//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    pair<int,int> a[n];
    for (int i=0;i<n;i++) cin >> a[i].second , a[i].first = i;
    sort(a,a+n, [](pair<int, int> a, pair<int, int> b) {return a.second < b.second;});
    for (int i=0;i<n;i++) a[i].second = n-i;
    sort(a,a+n, [](const pair<int, int>& a, const pair<int, int>& b) {return a.first < b.first;});
    for (auto x:a) cout << x.second << " ";
    cout << '\n';
  }


  return 0;
}

