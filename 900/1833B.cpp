//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;





void solve() {

	int tt; cin >> tt;
	while (tt--) {
			int n,k; cin >> n >> k;
			pair<int,int> a[n]; for (int i=0;i<n;i++) {
				cin >> a[i].first;
				a[i].second = i + 1;
			}	
			int b[n]; for (int i=0;i<n;i++) cin >> b[i];
			sort(a,a+n, [](const pair<int,int> &a , const pair<int,int> &b) {return a.first < b.first;});
			sort(b,b+n);
			for (int i=0;i<n;i++) a[i].first = b[i];
			sort(a,a+n, [](const pair<int,int> &a , const pair<int,int> &b) {return a.second < b.second;});
			for (int i=0;i<n;i++) cout << a[i].first << " ";
			cout << '\n';
	}


}







int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();
  
  solve();
    
  return 0;
}
