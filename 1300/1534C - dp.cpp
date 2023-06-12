// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

void myFunction(int i, pair<int,int> *a , vector<int>& v) {
	if (v[i] == 0) {
		v[i] = 1;
		myFunction(a[i].second,a,v);
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		
		pair<int,int> a[n+1];
		for (int i=1;i<=n;i++) cin >> a[i].first;
		for (int i=1;i<=n;i++) cin >> a[i].second;
		sort(a,a+n+1);

		vector<int> v(n+1);
		long long sum = 1;
		for (int i=1;i<=n;i++) {
			if (v[i] == 1) continue;
			myFunction(i,a,v);
			sum = (sum * 2LL) % 1000000007;
		}

		cout << sum << '\n';
		

	}






	return 0;	
}