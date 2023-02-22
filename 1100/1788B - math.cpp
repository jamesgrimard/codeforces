// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		bool f = 0; //flip
		string a = "" , b = "";
		for (int i=0;i<size(s);i++) {
			int k = s[i] - '0';
			if (k % 2 != 0) {
				if (f == 0) {
					a += to_string(k/2+1);
					b += to_string(k/2);
				} else {
					b += to_string(k/2+1);
					a += to_string(k/2); 
				}
				f = ! f;
			} else {
				a += to_string(k/2);
				b += to_string(k/2);
			}
		}
		while (b[0] == '0') {
			if (size(b) == 1) break;
			b.replace(0,1,"");
		}
		cout << a << " " << b << '\n';
	}


	return 0;
}

