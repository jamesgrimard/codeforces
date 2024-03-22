//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

  int tt ; cin >> tt;
  while (tt--) {

  string a, b; cin >> a >> b;

  

  int ans = -1;

  if (a[0] == b[0]) {
    cout << "YES\n" << a[0] << '*' << '\n';
  } else if (a[a.size()-1] == b[b.size()-1]) {
    cout << "YES\n" << '*' << a[a.size()-1] << '\n';

  } else {

    for (int i=0;i<a.size()-1;i++) {
      for (int j=0;j<b.size()-1;j++) {
        if (b[j] == a[i] && b[j+1] == a[i+1]) ans = i;
      }



    }
    if (ans != -1) {
      cout << "YES\n" << "*" << a[ans] << a[ans+1] << "*" << '\n';
    } else {
      cout << "NO\n";
    }
  }
  }
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

