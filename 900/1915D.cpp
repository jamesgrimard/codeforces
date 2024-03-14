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
  	int n ;cin >> n;
  	string s; cin >> s;
  	int cnt = 0;
  	for (int i=0;i<n;i++) {
  		cnt++;
  		if (cnt % 3 == 0 && s[i] != 'a' && s[i] != 'e' && s[i+1] != 'a' && s[i+1] != 'e') {
  			cout << s[i];
  			if (i != n-1) cout << ".";
  			cnt = 0;
  		} else if (cnt % 3 == 0) {
  			cout << "." << s[i];
  			cnt = 1;
  		} else {
  			cout << s[i];
  		}
		}
  
  	cout << '\n';
  }			

								  			                                                                  	


                    
  return 0;
}