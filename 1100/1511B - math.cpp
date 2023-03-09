// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int a , b , c; cin >> a >> b >> c;
		cout << 1; for (int i=0;i<a-1;i++) cout << 0;
		cout << " ";
		for (int i=0;i<b-(c-1);i++) cout << 9;
		for (int i=0;i<c-1;i++) cout << 0;
		cout << '\n';	
	}


	return 0;
}

