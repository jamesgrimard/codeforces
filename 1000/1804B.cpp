//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt; cin >> tt;
  while (tt--) {
    int n ,k , d, w; cin >> n >> k >> d >> w;
    int a[n]; for (int i=0;i<n;i++) cin >> a[i];
    int current = a[0]+w , open = a[0]+w;
    int cnt = 1 , doses = k-1;
    for (int i=1;i<n;i++) {
      if (doses > 0 && a[i] <= current && current - open <= d) {
        doses--;
        continue;  
      }
      if (doses > 0 && a[i] > current && a[i] - open <= d) {
        (a[i] + w - open <= d) ? current = a[i] + w : current = a[i];
        doses--;
        continue;
      }
      current = a[i] + w;
      open = a[i] + w;
      doses = k-1;
      cnt++;
    }
    cout << cnt << '\n';
  }
 
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

