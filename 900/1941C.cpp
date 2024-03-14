// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
                                      
  int tt; cin  >> tt;
  while (tt--) {
  	int n; cin >> n;
  	string s; cin >> s;
  	int cnt = 0;
  	bool r[n] = {};
  	for (int i=2;i<n-2;i++) {
  		if (s[i] == 'p' && s[i-2] == 'm' && s[i-1] == 'a' && s[i+1] == 'i' && s[i+2] == 'e') {
  			cnt++;
				r[i-2] = 1 , r[i-1] = 1 , r[i] = 1 , r[i+1] = 1 , r[i+2] = 1;
  		}
  	}
  	for (int i=1;i<n-1;i++) {
  		if (r[i] != 1 && s[i] == 'i' && s[i-1] == 'p' && s[i+1] == 'e') cnt++;
  		if (r[i] != 1 && s[i] == 'a' && s[i-1] == 'm' && s[i+1] == 'p') cnt++;
  	}
  	cout << cnt << '\n';
  }
  		  		  		

		                    
  return 0;
}