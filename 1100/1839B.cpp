//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;


void solve() {
	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,vector<int>> m;
		for (int i=0;i<n;i++) {
			int x,y; cin >> x >> y;
			m[x].push_back(y);
		}
		long long sum = 0;
		for (auto& v : m) {
			sort(v.second.rbegin(),v.second.rend());
			int N = v.second.size();
			for (int i=0;i<min(v.first,N);i++) sum += v.second[i];			
		}
		cout << sum << '\n';
	}


	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
