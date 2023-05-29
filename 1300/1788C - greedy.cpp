// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		if (n%2==0) {
			cout << "No\n";
			continue;
		}
		vector<pair<int,int>> a(n);
		int t = 0;
		for (int i=0;i<2*n;i+=2) {
			a[t].first = t+1 , a[t].second = 2 * n - (i%n);
			t++;
		}
		sort(a.begin(),a.end(), [](auto a , auto b){
			return (a.first + a.second) < (b.first + b.second);
		});
		cout << "Yes\n";
		for (auto v:a) cout << v.first << " " << v.second << '\n';
	}


	return 0;	
}

		