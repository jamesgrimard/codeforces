//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {
  int tt; cin >> tt;
  while (tt--) {
  	int n , k; cin >> n >> k;
  	vector<int> p;
  	bool a[n+1] = {};
  	for (int i=0;i<n;i++) {
  		int x; cin >> x;
  		a[x] = 1;
  		p.push_back(x);
  	}

  	for (int i=0;i<=n;i++) {
  		if (a[i] == 0) {
  			p.push_back(i);
  			break;
  		}
  	}

  	for (int i=0;i<n;i++) p.push_back(p[i]);
  	
  	for (int i=n+1-(k%(n+1));i<n+1-(k%(n+1))+n;i++) cout << p[i] << " ";
  	cout << '\n';
  }		
			


	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
