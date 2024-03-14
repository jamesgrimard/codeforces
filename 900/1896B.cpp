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
  	int n; cin >> n;
  	string s; cin >> s;
  	int first_a = n-1 , first_b = -1;
  	for (int i=0;i<n;i++) {
  		if (s[i] == 'A' && first_a == n-1) first_a = i;
  		if (s[i] == 'B') first_b = i;
  	}
  	if (first_b > first_a) {
  		cout << first_b-first_a << '\n';
  	} else {
  		cout << 0 << '\n';
  	}
  }
  			                    
  return 0;
}