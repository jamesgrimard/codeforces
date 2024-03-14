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
	int a ,b , c; cin >> a >> b >> c;
	if (abs(a-b) % 2 == 0 && abs(b-c) % 2 == 0) {
		cout << "1 1 1" << '\n';
	}	else if (abs(a-b) % 2 == 1 && abs(b-c) % 2 == 1) {
		cout << "0 1 0" << '\n';
	} else if (abs(a-b) % 2 == 1) {
		cout << "1 0 0" << '\n';
	} else {
		cout << "0 0 1" << '\n';
	}

	}

		                    
  return 0;
}