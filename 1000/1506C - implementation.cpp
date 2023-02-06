// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string a , b; cin >> a >> b;
		if (size(a) > size(b)) swap(a,b);
		int A = size(a) , B = size(b);
		b += b;
		int mn = A+B;
		for (int i=0;i<B;i++) {
			int count = 0;
			for (int j=0;j<A;j++) {
				if (a[j] == b[j+i]) count++;
				if (a[j] != b[j+i] || j == A-1) {
					mn = min(A+B-count*2,mn); count = 0;
				}
			}
		}
		cout << mn << '\n';
	}


	return 0;
}
