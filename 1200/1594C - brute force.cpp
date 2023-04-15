// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		char k; cin >> k;
		string s; cin >> s;
		bool F= 0;
		for (int i=0;i<n;i++) {
			if (s[i] != k) {
				F = 1;
				break;
			}
		}
		if (F == 1) {
			for (int i=n-1;i>=1;i--) {
				if (s[i] == k) {
					int jmp = i+1;
					bool f = 0;
					for (int j=i+jmp;j<n;j+=jmp) {
						if (s[j] != k) {
							f = 1;
							break;
						}
					}
					if (f == 0) {
						cout << 1 << '\n' << jmp << '\n';
						break;
					}
				}
				if (i == 1) {
					cout << 2 << '\n' << n << " " << n-1 << '\n';
				}
			}
		} else {
			cout << 0 << '\n';
		}		
	}

	return 0;
}