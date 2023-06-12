
// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n , m; cin >> n >> m;
    vector<int> a(n+1),b(m+1);
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=m;i++) cin >> b[i];
    sort(begin(a),end(a));
    long long sum = 0;
    int l = 1 , r = n+1;
    while (r--) {
      if (a[r] >= l && b[l] < b[a[r]]) {
        sum += b[l];
        l++;
      } else {
        sum += b[a[r]];
      }
    }
    cout << sum << '\n';
  }

  return 0;   

}