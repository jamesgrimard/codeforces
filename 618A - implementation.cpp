// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	vector<int> a;
	int k = 1;
	for (int i=0;i<=log2(tt);i++){
		int tmp = k << i;
		if((tmp & tt) == tmp) {
			a.push_back(i+1);
			
		}
	}
	for (int i=size(a)-1;i>=0;i--){
		cout<<a[i]<<endl;
	}
	return 0;
}