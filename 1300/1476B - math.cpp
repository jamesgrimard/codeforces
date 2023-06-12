
// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    double n,k; cin >> n >> k;
    long long sum = 0.0 , start; cin >> start;
    for (int i=0;i<n-1;i++) {
      double a; cin >> a;
      if (a / (start + sum) > k*0.01) {
        double d = (ceil(a * 100 / k) - (start + sum ));
        sum += d;
      }
      start += a;
    }
    cout << sum << '\n';
  }

  return 0;   

}