// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
                                      
  int tt; cin >> tt;
  while (tt--) {
  	int n , k; cin >> n >> k;
  	string s; cin >> s;
  	int a[26] = {}; for (int i=0;i<n;i++) a[s[i]-'a']++;
		int cnto = 0;
		for (int i=0;i<26;i++) if (a[i] % 2) cnto++;

		(k >= cnto-1) ? cout << "YES\n" : cout << "NO\n";
	}

                    
  return 0;
}