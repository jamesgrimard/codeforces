//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
    int n; cin >> n;
    bool is_there_a_zero = 0;
    int cnt_negatives = 0;
    int a[n];
    for (int i=0;i<n;i++) {
      cin >> a[i];
      if (a[i] == 0) is_there_a_zero = 1;
      if (a[i] < 0) cnt_negatives++;
    }
    if (is_there_a_zero || cnt_negatives % 2) {
      cout << "0\n";
    } else {
      cout << "1\n" << "1 0\n";
    }
  }

  return 0;
}

