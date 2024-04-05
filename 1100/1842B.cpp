//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

void solve() {

int tt; cin >> tt;
while (tt--) {
	int n , x , k = 0; cin >> n >> x;
	bool A = 0 , B = 0 , C = 0;
	for (int i=0;i<n;i++) {
		int tmp; cin >> tmp;
		bitset<32> a(x);
		bitset<32> b(tmp);
		for (int i=0;i<32;i++) if (b[i] == 1 && a[i] == 0) A = 1;
		if (A == 0) k |= tmp;
	}
	for (int i=0;i<n;i++) {
		int tmp; cin >> tmp;
		bitset<32> a(x);
		bitset<32> b(tmp);
		for (int i=0;i<32;i++) if (b[i] == 1 && a[i] == 0) B = 1;
		if (B == 0) k |= tmp;
	}
	for (int i=0;i<n;i++) {
		int tmp; cin >> tmp;
		bitset<32> a(x);
		bitset<32> b(tmp);
		for (int i=0;i<32;i++) if (b[i] == 1 && a[i] == 0) C = 1;
		if (C == 0) k |= tmp;
	}
  (k == x) ? cout << "YES\n" : cout << "NO\n";
}


	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
