// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m; cin >> n >> m;
	vector<int> a(m);
	for (int i=0;i<m;i++) cin >> a[i];
	vector<int> b(begin(a),end(a));
	sort(rbegin(a),rend(a));
	int cnt = n, tally = 0;
	while (cnt > 0) {
		int mx = 0 , index = 0;
		for (int i=0;i<m;i++) {
			if (a[i] > mx) {
				mx = a[i];
				index = i;
			}
		}
		tally += mx;
		a[index]--;
		cnt--;
	}
	
	cout << tally << " ";
	tally = 0 , cnt = n;
	sort(begin(b),end(b));
	for (int i=0;i<m;i++) {
		for (int j=b[i];j>0;j--){
			if (cnt > 0) {
				tally += j;
				cnt--;
			}
		}
	}

	cout << tally;
	return 0;
}
