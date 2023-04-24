// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , a , b; cin >> n >> a >> b;
		int gap,start;
		for (int i=n;i>=2;i--) {
			for (int j=i-1;j>=1;j--) {
				if ((b-a) % (i-j) != 0) continue;
				if (a - (j-1)*((b-a)/(i-j)) >= 1) {
					gap = (b-a)/(i-j);
					start = a - gap * (j-1);
					goto out;
				}
			}
		}
		out: for (int i=0;i<n;i++) cout << i*gap+start << " ";
		cout << '\n';
	}

	return 0;
}