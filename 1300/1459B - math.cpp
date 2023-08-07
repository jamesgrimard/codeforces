
// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


  long long n; cin >> n;
  if (n%4 == 0) {
    long long k = (n+1LL) / 2 + 1;
    cout << k * k << '\n';
  } else if (n%2 == 0) {
    cout << ((n+1LL) / 2 + 1) * ((n+1LL)/2+1) << '\n';
  } else {
    cout << (n+2LL)*(n+2LL)/2 << '\n';
  }

  return 0;   

}