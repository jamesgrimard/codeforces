// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	int ind(0),mx(0),smx(0);
	for (int i=0;i<tt;i++){
		int x;
		cin>>x;
		if (x > mx) {
			smx = mx;
			mx = x;
			ind = i + 1;
			continue;
		}
		if (x > smx) {
			smx = x;
		} 
	}

	cout << ind << ' ' << smx << endl;

	return 0;
}