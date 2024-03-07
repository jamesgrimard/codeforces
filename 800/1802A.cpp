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
    int cntp = 0 , cntn = 0;
    for (int i=0;i<n;i++) {
      int x; cin >> x;
      (x > 0) ? cntp++ : cntn++;
    }
    for (int i=0;i<cntp;i++) cout << i + 1 <<  " ";
    for (int i=0;i<cntn;i++) cout << cntp-i-1 << " ";
    cout << '\n';
    int a = 1;
    for (int i=0;i<cntp;i++) {
      if (i + 1 <= cntn) {
        cout << "1 0 ";
      } else {
        cout << a << " ";
        a++;
      }
    }
    cout << '\n';
  }

  return 0;
}

