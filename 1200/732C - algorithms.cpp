// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<long long> a(3);
	for (int i=0;i<3;i++) cin >> a[i];
	sort(rbegin(a),rend(a));
	long long cnt =0 ;
	for (int i=1;i<3;i++) {
		cnt += max(0LL,a[0]-1LL-a[i]);
	}
	cout << cnt;
	
	return 0;	
}

		