// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<string> a(3);
	for (int i=0;i<3;i++) cin >> a[i];

	sort(begin(a),end(a), [](auto a, auto b) { // sort-colour
		return a[1] < b[1];
	});

	for (int i=1;i<3;i++) {
		if (a[i][0] < a[i-1][0] && a[i][1] == a[i-1][1]) { // sort-number
			swap(a[i],a[i-1]);
			i = max(i-2,0);
			
		}
	}

	int cnt = 1;
	
	for (int i=1;i<3;i++) if (a[i] == a[i-1]) cnt++; // three-of-a-kind

	int mn = 3 - cnt;

	cnt = 1;

	for (int i=1;i<3;i++) if ((a[i][0] - '0') - (a[i-1][0] - '0') == 1 && a[i][1] == a[i-1][1]) cnt++; // straight-flush

	mn = min(mn,3-cnt);

	cnt = 1;

	for (int i=1;i<3;i++) if ((a[i][0] - '0') - (a[i-1][0] - '0') == 2 && a[i][1] == a[i-1][1]) cnt = 2;

	mn = min(mn,3-cnt);

	cout << mn << '\n';

	return 0;
}