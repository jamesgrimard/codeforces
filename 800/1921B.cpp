//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int supply = 0 , demand = 0;
    for (int i=0;i<n;i++) {
      if (a[i] == '0' && b[i] == '1') demand++;
      if (a[i] == '1' && b[i] == '0') supply++;
    }
    int takeaway = max(supply - demand, 0);
    cout << demand + takeaway << '\n';
    

  }

  return 0;
}

