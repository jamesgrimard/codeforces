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
    int a[n]; for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    vector<int> b,c;
    bool flag = 0;
    for (int i=0;i<n;i++) {
      if (i == 0) {
        b.push_back(a[i]);
      } else if (i > 0 && flag == 0 && a[i] == a[i-1]) {
        b.push_back(a[i]);
      } else {
        flag = 1;
        c.push_back(a[i]);
      }
    }
    if (flag) {
      cout << b.size() << " " << c.size() << '\n';
      for (int i=0;i<b.size();i++) cout << b[i] << " ";
      cout << '\n';
      for (int i=0;i<c.size();i++) cout << c[i] << " ";
      cout << '\n';
    } else {
      cout << "-1\n";
    }
  }


  return 0;
}

