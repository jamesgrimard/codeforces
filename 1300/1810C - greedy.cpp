// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , cut , insert; cin >> n >> cut >> insert;
		unordered_map<int,bool>m;
		vector<int> a;
		long long total = 0 , mn = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (m[x] == 0) {
				a.push_back(x);
			} else {
				total += cut;
			}
			m[x]=1;
		}
		sort(begin(a),end(a));
		long long k = a.size();
		for (int i=k-1;i>=0;i--) {
			if (i == k-1) {
				mn = total + (((long long)(a[i]-1-i))*insert + ((long long)(k-i-1))*cut);
			} else {
				mn = min(mn,total + (((long long)(a[i]-1-i))*insert + ((long long)(k-i-1))*cut));
			}
		}
		mn = min(mn,total+k*cut+insert);
		cout << mn << '\n';
	}


	return 0;	
}

		