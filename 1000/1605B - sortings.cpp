// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--){
		int n ; cin >> n;
		string s; cin >> s;
		vector<int> a;		
		int r = n-1;
		for (int i=0;i<=r;i++){
			if (s[i] == '0') continue;
			for (int j=r;j>i;j--) {
				if (s[j] == '0') {
					r = j-1;
					a.push_back(i+1); a.push_back(j+1);
					break;
				}
			}
		}
		if (size(a) == 0) {
			cout << 0;
		} else {
			cout << 1 << '\n' << size(a);
			sort(begin(a),end(a));
			for (int i=0;i<size(a);i++) cout << " " << a[i];
		}
		
		cout << '\n';
	}


	return 0;
}
