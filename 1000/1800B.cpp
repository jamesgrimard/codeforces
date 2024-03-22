//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

void solve() {

 int tt; cin >> tt;
 while (tt--) {
  int n,k; cin >> n >> k;
  string s; cin >> s;
  int a[26] = {} , b[26] = {};
  for (int i=0;i<n;i++) {
    if (s[i] == tolower(s[i])) {
      a[s[i]-'a']++;
    } else {
      b[s[i]-'A']++;
    }
  }
  int sum = 0;
  for (int i=0;i<26;i++) {
    int tmp = min(a[i],b[i]);
    sum += tmp;
    a[i] -= tmp;
    b[i] -= tmp;
  }
  for (int i=0;i<26;i++) {
    int tmp = max(a[i],b[i]);
    sum += min(tmp/2,k);
    k -= min(k,tmp/2);
  }
  cout << sum << '\n';
 }
 
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


  solve();
 	
  return 0;
}

